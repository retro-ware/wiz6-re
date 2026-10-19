#asm
	extrn clear_window_area_:near
	extrn play_sound_:near
	extrn resume_window_draw_:near
	extrn strcpy_:near
#endasm
extern char g00cc[];
extern char pc_item_count[];
extern char pc_item_flags[];
extern char pc_item_icon[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern char pc_swag_count[];
extern int g43ca;
extern int pc_item_id[];
/* Swag bag menu: move items between inventory and swag, drop swag. */
do_swag_menu(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	char x6[10];
	int l18;
	int l26[4];
	int l28;
	int l30;
	int l32;
	char x32[72];
	int l106;
	register int rsi;
	register int rdi;
	l32 = 0;
	l4 = create_window(20, 4, 20, 16, 25, -1, 0, 0);
	fill_window(l4, 0, 1, 0);
	put_frame_char(l4, 0, 0, 14);
	put_frame_char(l4, 19, 0, 10);
	put_frame_char(l4, 0, 15, 11);
	put_frame_char(l4, 19, 15, 8);
	l2 = 1;
L63b5:
	put_frame_char(l4, l2, 0, 12);
	put_frame_char(l4, l2, 2, 12);
	put_frame_char(l4, l2, 15, 7);
	l2++;
	if (l2 < 19) goto L63b5;
	l2 = 1;
L6401:
	put_frame_char(l4, 0, l2, 13);
	put_frame_char(l4, 19, l2, 5);
	l2++;
	if (l2 < 15) goto L6401;
	put_frame_char(l4, 0, 2, 33);
	put_frame_char(l4, 0, 9, 15);
	put_frame_char(l4, 0, 11, 15);
	put_frame_char(l4, 0, 13, 15);
	put_frame_char(l4, 19, 2, 10);
	put_frame_char(l4, 17, 2, 14);
	put_frame_char(l4, 17, 15, 11);
	l2 = 3;
L64cc:
	put_frame_char(l4, 17, l2, 13);
	l2++;
	if (l2 < 15) goto L64cc;
	defer_window_draw(l4);
	set_cursor(l4, 1, 1);
	print_message(750, l4, 18);
	put_icon_at(l4, 2, 1, 100);
	put_icon_at(l4, 17, 1, 100);
	l2 = 0;
	goto L6684;
L6543:
	l28 = (l2 + 10);
	if (l32) goto L6591;
	access_scenario_record(1, &l106, *(int *)((char *)pc_item_id + ((432 * p8) + (l28 << 3))), 0);
	strcpy(((l2 << 4) + 22162), &l106);
L6591:
	set_cursor(l4, 2, (l2 + 3));
	print_string(l4, ((l2 << 4) + 22162), 9);
	pad_to_column(l4, 14, 0);
	if (g00cc[(unsigned char)pc_item_type[((432 * p8) + (l28 << 3))]] != 1) goto L6632;
	set_cursor(l4, 14, (l2 + 3));
	print_int(l4, (unsigned char)pc_item_qty[((432 * p8) + (l28 << 3))], 3, 1);
	goto L6643;
L6632:
	pad_to_column(l4, 17, 0);
L6643:
	set_cursor(l4, 18, (l2 + 3));
	put_char_hi(l4, (unsigned char)(((unsigned char)pc_item_icon[((432 * p8) + (l28 << 3))] + 1)), 4);
	l2++;
L6684:
	if ((unsigned char)pc_swag_count[(432 * p8)] > l2) goto L6543;
#asm
l669a:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,080h,0bfh,095h,045h,00ch,073h,01fh,0b8h
	db 00eh,000h,050h,0b8h,010h,000h,050h,08ah,087h,095h,045h,02ah,0e4h,040h,040h,040h
	db 050h,0b8h,001h,000h,050h,0ffh,076h,0fch
	call clear_window_area_
	db 083h,0c4h,00ah
#endasm
L66c8:
	l2 = (unsigned char)pc_swag_count[(432 * p8)];
	goto L6703;
L66db:
	set_cursor(l4, 18, (l2 + 3));
	put_char_hi(l4, 32, 3);
	l2++;
L6703:
	if (l2 < 12) goto L66db;
	l32 = 1;
	resume_window_draw(l4);
	fill_window(p6, 32, 3, 0);
	refresh_window(l4);
	refresh_window(p6);
	l2 = 0;
L673d:
	l26[l2] = 1;
	l2++;
	if (l2 <= 3) goto L673d;
	if (((unsigned)pc_swag_count[(432 * p8)] < 12) && (pc_item_count[(432 * p8)])) goto L6771;
	l26[0] = 0;
L6771:
	if ((pc_swag_count[(432 * p8)]) && ((unsigned)pc_item_count[(432 * p8)] < 10)) goto L6784;
	l26[1] = 0;
L6784:
	if (pc_swag_count[(432 * p8)]) goto L6790;
	l26[2] = 0;
L6790:
	l18 = -1;
	fill_window(p6, 32, 3, 0);
	refresh_window(p6);
	l6 = run_menu(p6, 751, l26, 2, 1, 8, 2, 5, count_enabled_before(l26, 3));
	goto L6a43;
	defer_window_draw(l4);
	fill_window(p6, 32, 3, 0);
	refresh_all_windows();
	g43ca = choose_item(p4, p6, 760, p8, 0);
	if (g43ca == -1) goto L68f7;
	if (!((unsigned char)pc_item_flags[((432 * p8) + (g43ca << 3))] & 1)) goto L6856;
#asm
	db 0b8h,000h,000h,050h
	call play_sound_
	db 059h,0e9h,0a1h,000h
#endasm
L6856:
	l28 = ((unsigned char)pc_swag_count[(432 * p8)] + 10);
	rsi = (((432 * p8) + (g43ca << 3)) + 17448);
	rdi = (((432 * p8) + (l28 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,0a1h,0cah,043h,0b9h,004h,000h,0d3h
	db 0e0h,005h,0deh,055h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,095h
	db 045h,02ah,0e4h,0d3h,0e0h,005h,092h,056h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	pc_swag_count[(432 * p8)]++;
	remove_item(p8, g43ca);
	defer_window_draw(p4);
	draw_inventory_panel(p4, p8);
	resume_window_draw(p4);
L68f7:
	;
#asm
l68f7:
	db 0ffh,076h,0fch
	call resume_window_draw_
	db 059h,0e9h,05fh,001h
#endasm
	l30 = choose_item(l4, p6, 761, p8, 1);
	if (l30 == -1) goto L69bd;
	l28 = (l30 + 10);
	rsi = (((432 * p8) + (l28 << 3)) + 17448);
	rdi = (((432 * p8) + ((unsigned char)pc_item_count[(432 * p8)] << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,08bh,046h,0e2h,0b9h,004h,000h,0d3h
	db 0e0h,005h,092h,056h,050h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08ah,087h,094h
	db 045h,02ah,0e4h,0d3h,0e0h,005h,0deh,055h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	pc_item_count[(432 * p8)]++;
	remove_swag_item(p8, l30);
	draw_inventory_panel(p4, p8);
L69bd:
	;
#asm
l69bd:
	db 0e9h,0a0h,000h
#endasm
	if ((l30 = choose_item(l4, p6, 762, p8, 1)) == -1) goto L6a19;
	l28 = (l30 + 10);
	if (!((unsigned char)pc_item_flags[((432 * p8) + (l28 << 3))] & 64)) goto L6a0d;
	play_sound(0);
	goto L6a19;
L6a0d:
	remove_swag_item(p8, l30);
L6a19:
	;
#asm
l6a19:
	db 0ebh,045h
#endasm
	fill_window(p6, 32, 3, 0);
	destroy_window(l4, 1);
L6a3d:
	return;
L6a43:
	;
#asm
l6a43:
	db 03dh,000h,000h,075h,003h,0e9h,0a0h,0fdh
l6a4b:
	db 03dh,001h,000h,075h,003h,0e9h,0aeh,0feh
l6a53:
	db 03dh,002h,000h,075h,003h,0e9h,065h,0ffh
l6a5b:
	db 03dh,003h,000h,074h,0bbh
l6a60:
	db 0e9h,0e7h,0f8h
#endasm
	goto L6a3d;
}
