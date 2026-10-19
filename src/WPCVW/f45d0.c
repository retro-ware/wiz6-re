extern int menu_clicked;
extern int mouse_present;
/* Vertical/grid menu of message strings, entries enabled per flag array; returns the chosen entry. */
run_menu(p4, first_msg, enabled, p10, p12, p14, p16, p18, sel)
char *p4;
{
	int item;
	int l4;
	char l409[405];
	int l411;
	int l413;
	char x413[1];
	register int rsi;
	l4 = 0;
	item = 0;
L45e2:
	;
#asm
l45e2:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h
#endasm
	goto L4715;
L45f4:
	;
#asm
l45f4:
	db 083h,038h,001h,074h,003h
#endasm
	goto L470f;
L45fc:
	l411 = (((l4 / p16) * p14) + p10);
	l413 = ((l4 % p16) + p12);
	set_cursor(p4, l411, l413);
	get_message((first_msg + item), ((l4 * 25) + l409));
	if ((mouse_present) || (sel != l4)) goto L4685;
	print_string(p4, ((l4 * 25) + l409), (0 - p18));
	goto L46a8;
L4685:
	print_string_hi(p4, ((l4 * 25) + l409), 3);
L46a8:
	*(int *)(l409 + ((l4 << 1) + 375)) = item;
	set_click_region(l4, ((unsigned char)p4[2] + l411), ((unsigned char)p4[3] + l413), (((strlen(((l4 * 25) + l409)) + (unsigned char)p4[2]) + l411) - 1), ((unsigned char)p4[3] + l413));
	l4++;
L470f:
	item++;
	goto L45e2;
L4715:
	set_click_region(l4, 255, 0, 0, 0);
L4728:
	if (mouse_present) goto L4779;
	set_cursor(p4, (((sel / p16) * p14) + p10), ((sel % p16) + p12));
	print_string(p4, ((sel * 25) + l409), (0 - p18));
L4779:
	item = get_menu_input(21822, 13720);
	if (menu_clicked != 1) goto L479c;
	sel = item;
	item = 5;
	goto L48ce;
L479c:
	switch (item) {
case 1:
	if ((sel - p16) < 0) goto L47de;
	unhighlight_menu_item(p4, sel, p14, p16, p10, p12, ((sel * 25) + l409));
	sel -= p16;
L47de:
	goto L48ce;
case 2:
	if ((sel % p16) <= 0) goto L4820;
	unhighlight_menu_item(p4, sel, p14, p16, p10, p12, ((sel * 25) + l409));
	sel--;
L4820:
	goto L48ce;
case 3:
	if ((sel + p16) >= l4) goto L4862;
	unhighlight_menu_item(p4, sel, p14, p16, p10, p12, ((sel * 25) + l409));
	sel += p16;
L4862:
	goto L48ce;
case 4:
	if (((sel % p16) >= (p16 - 1)) || ((sel + 1) >= l4)) goto L48af;
	unhighlight_menu_item(p4, sel, p14, p16, p10, p12, ((sel * 25) + l409));
	sel++;
L48af:
	goto L48ce;
	}
L48ce:
	if (item != 5) goto L4728;
	return *(int *)(l409 + ((sel << 1) + 375));
}
