#asm
	extrn fce81_:near
#endasm
extern char *g4fa8;
extern char g452b[];
extern int lock_tumblers[];
extern int main_window;
extern int message_delay;
extern int party_facing;
extern int party_x;
extern int party_y;
extern int pc_level[];
/* Tumbler mini-game for picking a lock; trains the skill and returns 0 on success. */
pick_lock(member, event)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int win;
	char l52[40];
	int result;
	int rolls[6];
	int tumblers;
	int l70;
	int l72;
	int l74;
	clear_click_flag();
	win = create_window(20, 19, 20, 5, 20, -1, 0, 0);
	fill_window(win, 32, 1, 0);
	fceb2(win, 0, 0, 17);
	fceb2(win, 18, 0, 19);
	fceb2(win, 0, 1, 4);
	fceb2(win, 18, 1, 5);
	fceb2(win, 0, 2, 9);
	fceb2(win, 18, 2, 10);
	fceb2(win, 0, 3, 4);
	fceb2(win, 18, 3, 5);
	fceb2(win, 0, 4, 6);
	fceb2(win, 18, 4, 8);
	l2 = 1;
Ld4cc:
	fceb2(win, l2, 0, 18);
	fceb2(win, l2, 2, 12);
	fceb2(win, l2, 4, 7);
	l2++;
	if (l2 < 18) goto Ld4cc;
	l2 = 3;
Ld518:
	fceb2(win, l2, 0, 34);
	fceb2(win, l2, 1, 13);
	fceb2(win, l2, 2, 16);
	fceb2(win, l2, 3, 13);
	fceb2(win, l2, 4, 11);
	l2 += 3;
	if (l2 < 18) goto Ld518;
	defer_window_draw(win);
	l2 = 0;
Ld592:
	set_cursor(win, 19, l2);
	put_char_hi(win, 32, 3);
	l2++;
	if (l2 < 5) goto Ld592;
	resume_window_draw(win);
	l10 = *(int *)((g4fa8 + (event << 1)) + 288);
	l4 = (unsigned char)(g4fa8 + event)[1584];
	l8 = extract_bits(l4, 0, 5);
	if ((l6 = (*(int *)((char *)pc_level + (432 * member)) + (unsigned char)g452b[(432 * member)])) <= 95) goto Ld61c;
	l6 = 95;
Ld61c:
	if ((tumblers = ((l8 / 3) + 1)) <= 6) goto Ld633;
	tumblers = 6;
Ld633:
	l70 = 0;
	l4 = *(int *)((g4fa8 + (event << 1)) + 576);
	if (extract_bits(l4, (party_facing << 1), 2) != 2) goto Ld67e;
	lock_tumblers[((party_x + party_y) % tumblers)] = 100;
	l70 = 1;
Ld67e:
	get_message(2111, l52);
	set_cursor(main_window, 21, 0);
	print_string_hi(main_window, l52, 3);
	l52[0] = 99;
	l52[(0 + 1)] = 99;
	l52[2] = 0;
	l74 = 1;
Ld6c1:
	result = 0;
	defer_window_draw(win);
	l2 = 0;
	goto Ld776;
Ld6d5:
	rolls[l2] = random(l6);
	set_cursor(win, ((l2 * 3) + 1), 3);
	print_int(win, rolls[l2], 2, 1);
	set_cursor(win, ((l2 * 3) + 1), 1);
	if (rolls[l2] <= lock_tumblers[l2]) goto Ld757;
	l72 = 6;
	goto Ld763;
Ld757:
	l72 = 12;
	result = (l70 + 1);
Ld763:
	print_string(win, l52, l72);
	l2++;
Ld776:
	if (l2 < tumblers) goto Ld6d5;
	resume_window_draw(win);
	refresh_window(win);
	if (!key_available(1)) goto Ld7ac;
	if ((char)get_key(1) != 13) goto Ld7ac;
	l74 = 0;
Ld7ac:
	if (l74 != 1) goto Ld7bc;
	if (!check_screen_click()) goto Ld6c1;
Ld7bc:
	if (!result) goto Ld806;
	if (result != 1) goto Ld7f1;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,087h,045h,03ch,003h,074h,008h
	db 03ch,006h,074h,004h,03ch,00dh,075h,011h
#endasm
Ld7e0:
	try_skill_gain(member, 15, 1);
Ld7f1:
	if (random(3)) goto Ld804;
	fce13(event);
Ld804:
	goto Ld836;
Ld806:
	;
#asm
ld806:
	db 0ffh,076h,006h
	call fce81_
	db 059h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,087h,045h,03ch,003h,074h
	db 008h,03ch,006h,074h,004h,03ch,00dh,075h,011h
#endasm
Ld825:
	try_skill_gain(member, 15, 4);
Ld836:
	erase_window(main_window, 1);
	get_message((result + 2113), l52);
	set_cursor(main_window, (20 - ((strlen(l52) + 1) / 2)), 0);
	print_string_hi(main_window, l52, 3);
	wait_animating_m(message_delay);
	destroy_window(win, 0);
	return result;
}
