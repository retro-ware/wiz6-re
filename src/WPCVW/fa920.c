extern char g3592;
extern char pc_portrait[];
extern int disk_header;
extern int member_portrait[];
extern int menu_clicked;
/* Cycle through the 42 portraits and set the member's portrait. */
do_choose_portrait(win, member)
char *win;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[18];
	int l30;
	l8 = 0;
	l10 = disk_header;
	l10 = ((g3592 == 5) && (l10 > 0) ? (l10 + 2) : l10);
	copy_through_char(&l30, 13632, 58);
	if (!l10) goto La977;
	l8 = 1;
	prompt_insert_disk(&l30, 0, 1, 1);
La977:
	l6 = create_window(20, 4, 20, 16, 30, -1, 0, 0);
	fill_window(l6, 32, 3, 0);
	defer_window_draw(l6);
	draw_portrait_frame(l6);
	resume_window_draw(l6);
	fill_window(win, 32, 3, 0);
	refresh_all_windows();
	set_cursor(win, 9, 1);
	print_message(1112, win, 18);
	set_cursor(win, 12, 2);
	print_message(1113, win, 18);
	l4 = -1;
	set_click_region(0, ((unsigned char)win[2] + 9), ((unsigned char)win[3] + 1), ((unsigned char)win[2] + 9), ((unsigned char)win[3] + 1));
	set_click_region(1, ((unsigned char)win[2] + 10), ((unsigned char)win[3] + 1), ((unsigned char)win[2] + 10), ((unsigned char)win[3] + 1));
	set_click_region(2, ((unsigned char)win[2] + 18), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 18), ((unsigned char)win[3] + 2));
	set_click_region(3, 255, 0, 0, 0);
Laac5:
	if ((unsigned char)pc_portrait[(432 * member)] == l4) goto Lab09;
	load_portrait((unsigned char)pc_portrait[(432 * member)], member_portrait[member]);
	l4 = (unsigned char)pc_portrait[(432 * member)];
Lab09:
	draw_portrait(l6, member, 8, 6);
	l2 = get_menu_input(21822, 13720);
	if (menu_clicked != 1) goto Lab5b;
	goto Lab4c;
	l2 = 1;
#asm
	db 0ebh,01dh
#endasm
	l2 = 3;
#asm
	db 0ebh,016h
#endasm
	l2 = 5;
#asm
	db 0ebh,00fh
#endasm
Lab4c:
	;
#asm
lab4c:
	db 03dh,000h,000h,074h,0e6h,03dh,001h,000h,074h,0e8h,03dh,002h,000h,074h,0eah
#endasm
Lab5b:
	switch (l2) {
case 1:
	pc_portrait[(432 * member)] = (char)(((unsigned char)pc_portrait[(432 * member)] + 41) % 42);
	goto Laba6;
case 3:
	pc_portrait[(432 * member)] = (char)(((unsigned char)pc_portrait[(432 * member)] + 1) % 42);
	goto Laba6;
	}
Laba6:
	if (l2 != 5) goto Laac5;
	destroy_window(l6, 0);
	if (l8 != 1) goto Labd4;
	prompt_insert_disk(&l30, l10, 1, 1);
Labd4:
	;
}
