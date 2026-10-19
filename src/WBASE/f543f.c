#asm
	extrn destroy_window_:near
#endasm
extern int copy_protection_ok;
extern int g4f84;
extern int main_window;
/* Copy protection: draw three random icons, ask for their magic word (spell name, msg 4000+); -1 if wrong. */
check_magic_word()
{
	char *win;
	char x2[40];
	int prompt;
	char x44[38];
	int word;
	int x;
	int l88;
	int icon1;
	int icon2;
	int icon3;
	int input_x;
	if (copy_protection_ok != 1) goto L5453;
	return 0;
L5453:
	erase_window(main_window, 0);
	win = create_window(0, 19, 40, 5, 10, -1, 0, 0);
	fill_window(win, 32, 3, 0);
	defer_window_draw(win);
	get_message(1050, &prompt);
	print_centered(win, &prompt, 1, 18);
	draw_glyph_at(win, 7, 2, 17);
	draw_glyph_at(win, 33, 2, 19);
	draw_glyph_at(win, 7, 4, 6);
	draw_glyph_at(win, 33, 4, 8);
	for (x = 8; x < 33; x++) {
	draw_glyph_at(win, x, 2, 18);
	draw_glyph_at(win, x, 4, 7);
	}
	draw_glyph_at(win, 7, 3, 4);
	draw_glyph_at(win, 33, 3, 5);
	l88 = 0;
	defer_window_draw(win);
	clear_window_area(win, 8, 3, 32, 3);
	icon1 = random(8);
	icon3 = random(8);
	icon2 = (random(4) + ((icon3 / 4) << 2));
	set_cursor(win, 10, 3);
	put_char(win, (unsigned char)((icon1 + 104)), 4);
	win[6]++;
	put_char(win, (unsigned char)((icon2 + 112)), 5);
	win[6]++;
	put_char(win, (unsigned char)((icon3 + 120)), 2);
	input_x = ((unsigned char)win[6] + 2);
	resume_window_draw(win);
	refresh_all_windows();
	l88++;
	clear_window_area(win, 16, 3, 32, 3);
	set_cursor(win, input_x, 3);
	get_message((((((icon2 << 3) + (icon3 << 6)) + icon1) % 79) + 4000), &word);
	input_text_animated(win, &word, 15, 5, 0);
	g4f84 = 17210;
#asm
	db 0fch,056h,057h,08dh,076h,0ach,08dh,07eh,0d4h
#endasm
#asm
l56cd:
	db 036h,0ach,036h,0aah,03ch,000h,075h,0f8h,05fh,05eh,090h,090h,0b8h,000h,000h,050h
	db 0ffh,076h,0feh
	call destroy_window_
	db 083h,0c4h,004h
#endasm
	if (!strcmp(&prompt, &word)) goto L56fe;
	return -1;
L56fe:
	copy_protection_ok = 1;
	return 0;
}
