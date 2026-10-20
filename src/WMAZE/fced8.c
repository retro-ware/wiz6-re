#asm
	extrn $ldv:near
#endasm
extern char *g4fa8;
extern char g450c[];
extern char pc_stats[];
extern int main_window;
extern int message_delay;
extern int party_facing;
extern int pc_stamina[];
/* Strength bar mini-game for forcing a door; returns 0 on success. */
force_lock(member, event)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char *win;
	char x12[38];
	int l52;
	int result;
	int target;
	int strength;
	int l60;
	int l62;
	clear_click_flag();
	win = create_window(20, 19, 20, 5, 20, -1, 0, 0);
	fill_window(win, 32, 1, 0);
	fceb2(win, 0, 0, 17);
	fceb2(win, 19, 0, 19);
	fceb2(win, 0, 1, 4);
	fceb2(win, 19, 1, 5);
	fceb2(win, 0, 2, 9);
	fceb2(win, 19, 2, 10);
	fceb2(win, 0, 3, 4);
	fceb2(win, 19, 3, 5);
	fceb2(win, 0, 4, 6);
	fceb2(win, 19, 4, 8);
	for (l2 = 1; l2 < 19; l2++) {
	fceb2(win, l2, 0, 18);
	fceb2(win, l2, 2, 12);
	fceb2(win, l2, 4, 7);
	}
	l10 = *(int *)((g4fa8 + (event << 1)) + 288);
	l4 = (unsigned char)(g4fa8 + event)[1584];
	l8 = extract_bits(l4, 0, 5);
	l60 = 0;
	l4 = *(int *)((g4fa8 + (event << 1)) + 576);
	if (extract_bits(l4, (party_facing << 1), 2) == 2) {
	l60 = 1;
	}
	get_message(2112, &l52);
	set_cursor(main_window, 21, 0);
	print_string_hi(main_window, &l52, 3);
	if ((target = ((18 - ((unsigned char)pc_stats[(432 * member)] - l8)) + l8)) < 1) {
	target = 1;
	}
	if (target > 18) {
	target = 18;
	}
	if (l60) {
	target = 18;
	}
	defer_window_draw(win);
	set_cursor(win, 1, 3);
	for (l2 = 0; l2 < target; l2++) {
	put_char(win, 97, 12);
	}
	resume_window_draw(win);
	l62 = 1;
Ld157:
	defer_window_draw(win);
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,004h,044h,0bbh,064h,000h,0f7h
	db 0ebh,050h,052h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,006h,044h,099h
	db 08bh,0c8h,08bh,0dah,05ah,058h
	call $ldv
	db 050h,052h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,014h,045h,02ah,0e4h
	db 099h,08bh,0c8h,08bh,0dah,05ah,058h,050h,052h,0f7h,0e3h,08bh,0d8h,058h,0f7h,0e1h
	db 003h,0d8h,058h,0f7h,0e1h,003h,0d3h,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0fah,03dh,000h,000h,07eh,00ch
#endasm
	if (random(50)) goto Ld227;
Ld1cb:
	(*(int *)((char *)pc_stamina + (432 * member)))--;
	if ((l6 > 0) && (*(int *)((char *)pc_stamina + (432 * member)) > 0)) goto Ld220;
	g450c[(432 * member)] = (char)(random(6) + 6);
	*(int *)((char *)pc_stamina + (432 * member)) = 0;
	draw_member_status_m(member);
	destroy_window(win, 0);
	return (l60 + 1);
Ld220:
	draw_member_status_m(member);
Ld227:
	if ((strength = ((((random(l6) + random(l6)) + random(l6)) + random(l6)) / 4)) < 1) {
	strength = 1;
	}
	if (strength > 18) {
	strength = 18;
	}
	set_cursor(win, 1, 1);
	for (l2 = 0; l2 < strength; l2++) {
	put_char(win, 97, (l60 == 1 ? 4 : 6));
	}
	clear_window_area(win, (unsigned char)win[6], 1, 18, 1);
	resume_window_draw(win);
	refresh_window(win);
	if ((key_available(1)) && ((char)get_key(1) == 13)) {
	l62 = 0;
	}
	if ((l62 == 1) && (!check_screen_click())) goto Ld157;
	result = (strength >= target ? 0 : 1);
	if (l60) {
	result = 2;
	}
	if (result) {
	if (!random(3)) {
	fce13(event);
	}
	} else {
	fce81(event);
	}
	erase_window(main_window, 1);
	get_message((result + 2113), &l52);
	set_cursor(main_window, (20 - ((strlen(&l52) + 1) / 2)), 0);
	print_string_hi(main_window, &l52, 3);
	wait_animating_m(message_delay);
	destroy_window(win, 0);
	return result;
}
