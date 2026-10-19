#asm
	extrn fa4b1_:near
#endasm
extern char pc_class[];
extern int class_allowed[];
extern int pc_level[];
/* Change-class menu for member p8. */
do_change_class(p4, p6, p8)
{
	int l2;
	int l4;
	char x4[8];
	int l14;
	int l42[14];
	int l44;
	int l46;
	calc_allowed_classes(p8);
	l46 = create_window(20, 4, 20, 16, 30, -1, 0, 0);
	fill_window(l46, 32, 3, 0);
	defer_window_draw(l46);
	draw_portrait_frame(l46);
	resume_window_draw(l46);
	fill_window(p6, 32, 3, 0);
	refresh_all_windows();
	l44 = 1;
	l4 = 0;
La637:
	if (class_allowed[l4] != 1) goto La64e;
	l42[l4] = 1;
	goto La657;
La64e:
	l42[l4] = 0;
La657:
	l4++;
	if (l4 <= 13) goto La637;
	l14 = -1;
	l42[(unsigned char)pc_class[(432 * p8)]] = 0;
	set_cursor(p6, 4, 1);
	print_message(660, p6, 18);
	set_cursor(p6, 6, 2);
	print_message(661, p6, 18);
	l2 = run_menu(l46, 119, &l44, 1, 1, 10, 11, 5, 0);
	destroy_window(l46, 0);
	if (l2 <= 0) goto La789;
	pc_class[(432 * p8)] = (char)(l2 - 1);
	if (*(int *)((char *)pc_level + (432 * p8)) >= 250) goto La727;
#asm
	db 08ah,087h,00ch,044h,088h,087h,097h,045h
#endasm
	goto La72c;
La727:
	;
#asm
la727:
	db 0c6h,087h,097h,045h,000h
#endasm
La72c:
	;
#asm
la72c:
	db 0c7h,087h,00ch,044h,001h,000h,0c6h,087h,088h,045h,000h,0c7h,087h,0f6h,043h,000h
	db 000h,0c7h,087h,0f4h,043h,000h,000h,08ah,087h,085h,045h,02ah,0e4h,050h,0ffh,076h
	db 008h
	call fa4b1_
	db 083h,0c4h,004h
#endasm
	fa368(p8, (unsigned char)pc_class[(432 * p8)]);
	draw_sheet(p4, p6, p8);
	do_equip_items(p4, p6, p8);
La789:
	;
}
