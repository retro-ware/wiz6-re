extern char *main_window;
extern int bottom_line_win;
extern int g54b2;
extern int menu_clicked;
/* NPC shop list: let the party buy items from the NPC. */
do_npc_buy(p4, p6, p8)
char *p4;
{
	int l2;
	int l4;
	char x4[8];
	int l14;
	char x14[8];
	int l24;
	int l26;
	int l28;
	l26 = 12;
	l28 = 0;
	defer_window_draw(main_window);
	erase_window(main_window, 0);
	get_message(1509, 20948);
	set_cursor(main_window, 2, 0);
	print_string_hi(main_window, 20948, 3);
	resume_window_draw(main_window);
	refresh_window(main_window);
	refresh_window(bottom_line_win);
	get_message(1506, &l14);
	get_message(1507, &l24);
	fa206();
	if (g54b2 > 0) goto La415;
	return -1;
La415:
	if (p8 < g54b2) goto La425;
	p8 = (g54b2 - 1);
La425:
	l4 = 0;
	set_click_region(0, ((unsigned char)p4[2] + 2), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + 16), ((unsigned char)p4[3] + 2));
	set_click_region(1, ((unsigned char)p4[2] + 1), (unsigned char)p4[3], ((unsigned char)p4[2] + 1), (unsigned char)p4[3]);
	set_click_region(2, ((unsigned char)p4[2] + 1), ((unsigned char)p4[3] + 4), ((unsigned char)p4[2] + 1), ((unsigned char)p4[3] + 4));
	set_click_region(3, ((unsigned char)main_window[2] + l26), ((unsigned char)main_window[3] + l28), (((strlen(&l14) + (unsigned char)main_window[2]) + l26) - 1), ((unsigned char)main_window[3] + l28));
	set_click_region(4, 255, 0, 0, 0);
La502:
	if (l4 != 1) goto La53f;
	set_cursor(main_window, l26, l28);
	print_string(main_window, &l24, -3);
	f9fcf(p4, p6, p8, 0);
	goto La574;
La53f:
	set_cursor(main_window, l26, l28);
	print_string_hi(main_window, &l14, 3);
	f9fcf(p4, p6, p8, 1);
La574:
	l2 = f5994(21098, 13720);
	if (menu_clicked != 1) goto La5c3;
	goto La5af;
	l2 = 5;
#asm
	db 0ebh,02eh
#endasm
	l2 = 2;
#asm
	db 0ebh,027h
#endasm
	l2 = 4;
#asm
	db 0ebh,020h
#endasm
	l4 = 1;
	l2 = 5;
#asm
	db 0ebh,014h
#endasm
La5af:
	;
#asm
la5af:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
#endasm
La5c3:
	switch (l2) {
case 1:
	if (l4 == 1) goto La5d3;
	l4 = 1;
La5d3:
	goto La62a;
case 2:
	if (l4 != 1) goto La5e2;
	l4 = 0;
	goto La5eb;
La5e2:
	if (p8 <= 0) goto La5eb;
	p8--;
La5eb:
	goto La62a;
case 3:
	if (l4 != 1) goto La5f8;
	l4 = 0;
La5f8:
	goto La62a;
case 4:
	if (l4 != 1) goto La607;
	l4 = 0;
	goto La614;
La607:
	if ((p8 + 1) >= g54b2) goto La614;
	p8++;
La614:
	goto La62a;
	}
La62a:
	if (l2 != 5) goto La502;
	if (l4 != 1) goto La63f;
	return -1;
La63f:
	return p8;
}
