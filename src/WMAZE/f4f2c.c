#asm
	extrn set_cursor_:near
	extrn strlen_:near
#endasm
extern char *main_window;
extern int menu_clicked;
extern int mouse_present;
extern int party_count;
choose_party_member_m(p4, p6)
{
	int l2;
	char *l4;
	int l6;
	char x6[8];
	int l16;
	char x16[8];
	int l26;
	char x26[78];
	int l106;
	int l108;
	int l110;
	int l112;
	int l114;
	register int rsi;
	if (party_count >= 2) goto L4f42;
	return 0;
L4f42:
	l4 = create_window(0, 19, 19, 5, 25, -4, 0, 0);
	fill_window(l4, 32, 3, 0);
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	refresh_all_windows();
	get_message(p4, &l106);
#asm
	db 0b8h,000h,000h,050h,08dh,046h,096h,050h
	call strlen_
	db 059h,0b9h,000h,000h,083h,07eh,006h,001h,075h,003h,0b9h,005h,000h
#endasm
L4fbe:
	;
#asm
l4fbe:
	db 003h,0c1h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h,00ah,000h,02bh,0c1h
	db 050h,0ffh,036h,042h,033h
	call set_cursor_
	db 083h,0c4h,006h
#endasm
	print_string_hi(main_window, &l106, 3);
	if (p6 != 1) goto L5055;
	main_window[6]++;
	l108 = (unsigned char)main_window[6];
	l110 = (unsigned char)main_window[7];
	get_message(2027, &l16);
	get_message(2028, &l26);
	if (mouse_present != 1) goto L5043;
	print_string_hi(main_window, &l16, 3);
	goto L5055;
L5043:
	print_string(main_window, &l26, -5);
L5055:
	rsi = 0;
	goto L50e4;
L505b:
	l112 = (((rsi % 2) * 9) + 2);
	l114 = ((rsi / 2) + 1);
	set_cursor(l4, l112, l114);
	print_string_hi(l4, ((432 * rsi) + 17384), 3);
	set_click_region(rsi, ((unsigned char)l4[2] + l112), ((unsigned char)l4[3] + l114), (((strlen(((432 * rsi) + 17384)) + (unsigned char)l4[2]) + l112) - 1), ((unsigned char)l4[3] + l114));
	rsi++;
L50e4:
	if (rsi < party_count) goto L505b;
	set_click_region(party_count, 255, 0, 0, 0);
	if (p6 != 1) goto L515e;
	set_click_region(party_count, ((unsigned char)main_window[2] + l108), ((unsigned char)main_window[3] + l110), (((strlen(&l26) + (unsigned char)main_window[2]) + l108) - 1), ((unsigned char)main_window[3] + l110));
	set_click_region((party_count + 1), 255, 0, 0, 0);
L515e:
	l6 = (p6 == 1 ? -1 : 0);
L516d:
	if (mouse_present) goto L51dc;
	if (l6 != -1) goto L519e;
	set_cursor(main_window, l108, l110);
	print_string(main_window, &l26, -5);
	goto L51dc;
L519e:
	set_cursor(l4, (((l6 % 2) * 9) + 2), ((l6 / 2) + 1));
	print_string(l4, ((432 * l6) + 17384), -5);
L51dc:
	l2 = get_maze_input(20520, 13720);
	if (menu_clicked != 1) goto L520d;
	l6 = (l2 < party_count ? l2 : -1);
	l2 = 5;
	goto L5311;
L520d:
	switch (l2) {
case 1:
	if ((l6 == -1) || ((l6 % 2) <= 0)) goto L5238;
	f4ee7(l4, l6);
	l6--;
L5238:
	goto L5311;
case 2:
	if (l6 == -1) goto L5273;
	if ((l6 - 2) < 0) goto L525c;
	f4ee7(l4, l6);
	l6 -= 2;
	goto L5273;
L525c:
	if (p6 != 1) goto L5273;
	f4ee7(l4, l6);
	l6 = -1;
L5273:
	goto L5311;
case 3:
	if (((l6 == -1) || ((l6 % 2) >= 1)) || ((l6 + 1) >= party_count)) goto L52a4;
	f4ee7(l4, l6);
	l6++;
L52a4:
	goto L5311;
case 4:
	if (l6 != -1) goto L52d5;
	set_cursor(main_window, l108, l110);
	print_string_hi(main_window, &l16, 3);
	l6 = 0;
	goto L52f2;
L52d5:
	if ((l6 + 2) >= party_count) goto L52f2;
	f4ee7(l4, l6);
	l6 += 2;
L52f2:
	goto L5311;
	}
L5311:
	if (l2 != 5) goto L516d;
	erase_window(main_window, 0);
	destroy_window(l4, 0);
	return l6;
}
