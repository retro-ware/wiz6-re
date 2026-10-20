#asm
	extrn inflict_condition_:near
	extrn inflict_status_:near
	extrn random_:near
	extrn show_trap_effect_:near
#endasm
extern char g4517[];
extern char g451b[];
extern char g453c[];
extern char g4545[];
extern char g50f2;
extern char g5142;
extern char pc_condition[];
extern char pc_stats[];
extern int g50c8;
extern int game_state_arg;
extern int message_delay;
extern int party_count;
extern int party_picture_win;
extern int pc_hp[];
extern int pc_hp_max[];
/* Apply the effects of a sprung chest trap (damage, poison, stat loss, teleport...) to the party. */
spring_trap(trap, member)
{
	char x0[78];
	int l80;
	int i;
	clear_window(party_picture_win, 0);
	refresh_all_windows();
	if (trap) goto L5f92;
	get_message(5228, &l80);
	show_centered_line(party_picture_win, g50c8, &l80, 1, 7);
	return;
L5f92:
	;
#asm
l5f92:
	db 08bh,046h,004h,0e9h,009h,007h
#endasm
	show_trap_effect(0, 15);
	for (i = 0; i < party_count; i++) {
	trap_damage_member(i, (game_state_arg + 1), 8);
	}
	goto L66ae;
	show_trap_effect(0, 16);
	i = 0;
#asm
	db 0ebh,021h
#endasm
L5fe3:
	inflict_status(i, 5253, 10, 3, 10, 10, 50);
	i++;
L6004:
	if (i < party_count) goto L5fe3;
	goto L66ae;
#asm
	db 0b8h,0ffh,0ffh,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0e9h,08dh,006h
#endasm
	show_trap_effect(member, 6);
	trap_damage_member(member, 1, 6);
#asm
	db 0b8h,032h,000h,050h,0b8h,00ah,000h,050h,0a1h,03ch,036h,040h,040h,050h,0b8h,005h
	db 000h,050h,0b8h,000h,000h,050h,0b8h,087h,014h,050h,0ffh,076h,006h
	call inflict_status_
	db 083h,0c4h,00eh,0e9h,049h,006h
#endasm
	show_trap_effect(0, 2);
	i = 0;
#asm
	db 0e9h,0ech,000h
#endasm
L607b:
	if (random(100) <= (unsigned char)g453c[(432 * i)]) goto L6164;
#asm
l609c:
	db 0b8h,006h,000h,050h
	call random_
	db 059h,0e9h,0b0h,000h
#endasm
	trap_damage_member(i, (game_state_arg + 1), 8);
	goto L6164;
#asm
	db 0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h,004h,000h,050h,0b8h,002h,000h
	db 050h,0b8h,086h,014h,050h,0ffh,076h,0aeh
	call inflict_status_
	db 083h,0c4h,00eh,0e9h,087h,000h,0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h
	db 002h,000h,050h,0b8h,009h,000h,050h,0b8h,084h,014h,050h,0ffh,076h,0aeh
	call inflict_status_
	db 083h,0c4h,00eh,0ebh,067h,0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h,003h
	db 000h,050h,0b8h,004h,000h,050h,0b8h,085h,014h,050h,0ffh,076h,0aeh
	call inflict_status_
	db 083h,0c4h,00eh,0ebh,047h,0b8h,003h,000h,050h,0b8h,00bh,000h,050h,0b8h,08ch,014h
	db 050h,0ffh,076h,0aeh
	call inflict_condition_
	db 083h,0c4h,008h,0ebh,030h,0b8h,002h,000h,050h,0b8h,00bh,000h,050h,0b8h,08fh,014h
	db 050h,0ffh,076h,0aeh
	call inflict_condition_
	db 083h,0c4h,008h,0ebh,019h,0a7h,060h,0bch,060h,0ddh,060h,0fdh,060h,01dh,061h,034h
	db 061h
l6157:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,04bh,061h
#endasm
L6164:
	i++;
L6167:
	if (i < party_count) goto L607b;
	goto L66ae;
	show_trap_effect(0, 16);
	i = 0;
#asm
	db 0e9h,024h,001h
#endasm
L618c:
	inflict_status(i, 5265, 11, 9, 10, 10, 50);
	if (((random(100) <= ((unsigned char)g4545[(432 * i)] + 75)) || ((unsigned)pc_stats[(432 * i)] <= 3)) || ((unsigned)pc_condition[(432 * i)] >= 3)) goto L622d;
	pc_stats[(432 * i)]--;
	get_message(5266, &l80);
	get_message(5267, 20722);
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 5, 5, 0);
	wait_animating(message_delay);
	goto L62ad;
L622d:
	if (((random(100) <= ((unsigned char)g4545[(432 * i)] + 75)) || ((unsigned)g4517[(432 * i)] <= 3)) || ((unsigned)pc_condition[(432 * i)] >= 3)) goto L62ad;
	g4517[(432 * i)]--;
	get_message(5266, &l80);
	get_message(5268, 20722);
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 5, 5, 0);
	wait_animating(message_delay);
L62ad:
	i++;
L62b0:
	if (i < party_count) goto L618c;
	goto L66ae;
#asm
	db 0b8h,010h,000h,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0e9h,0deh,003h
#endasm
	show_trap_effect(0, 2);
	i = 0;
#asm
	db 0e9h,0b4h,000h
#endasm
L62e6:
	if ((random(100) <= ((unsigned char)g4545[(432 * i)] + 50)) || ((unsigned)pc_condition[(432 * i)] >= 3)) goto L6397;
	*(int *)((char *)pc_hp_max + (432 * i)) -= (random(4) + 1);
	if (*(int *)((char *)pc_hp_max + (432 * i)) < 1) {
	*(int *)((char *)pc_hp_max + (432 * i)) = 1;
	}
	if (*(int *)((char *)pc_hp + (432 * i)) > *(int *)((char *)pc_hp_max + (432 * i))) {
	*(int *)((char *)pc_hp + (432 * i)) = *(int *)((char *)pc_hp_max + (432 * i));
	}
	get_message(5266, &l80);
	get_message(5269, 20722);
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 5, 5, 0);
	wait_animating(message_delay);
L6397:
	i++;
L639a:
	if (i < party_count) goto L62e6;
	goto L66ae;
#asm
	db 0b8h,0ffh,0ffh,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0e9h,0f4h,002h
#endasm
	show_trap_effect(0, 16);
	i = 0;
#asm
	db 0ebh,018h
#endasm
L63cf:
	inflict_condition(i, 5263, 11, 2);
	i++;
L63e7:
	if (i < party_count) goto L63cf;
	goto L66ae;
#asm
	db 0b8h,004h,000h,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0e9h,0aah,002h
#endasm
	i = random(party_count);
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,080h,0bfh,089h,045h,003h,073h,0e6h
#endasm
	show_trap_effect(i, 4);
	get_message(5270, &l80);
	clear_window(party_picture_win, 1);
	print_centered(party_picture_win, &l80, g50c8, 5);
	play_sound(0);
	wait_animating(message_delay);
	get_message(5271, &l80);
	g50f2 = 0;
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 6, 0, 0);
	wait_animating(message_delay);
	trap_damage_member(i, (game_state_arg + 1), 8);
	if (((unsigned)pc_condition[(432 * i)] >= 3) || (random(21) <= (unsigned char)g451b[(432 * i)])) goto L657e;
	get_message(5272, &l80);
	g50f2 = 0;
	g5142 = 0;
	print_member_message(i, &l80, 20722, 20802, 1, 6, 0, 0);
	wait_animating(message_delay);
	trap_damage_member(i, ((game_state_arg << 1) + 2), 8);
	if (random(21) <= (unsigned char)g451b[(432 * i)]) goto L657e;
	inflict_condition(i, 5273, 11, 3);
L657e:
	get_message(5274, &l80);
	clear_window(party_picture_win, 1);
	print_centered(party_picture_win, &l80, g50c8, 5);
	play_sound(0);
	wait_animating(message_delay);
	goto L66ae;
	show_trap_effect(0, 3);
	i = 0;
#asm
	db 0ebh,033h
#endasm
L65d8:
	trap_damage_member(i, (game_state_arg + 1), 8);
	inflict_status(i, 5275, 5, 8, 10, 10, 50);
	i++;
L660b:
	if (i < party_count) goto L65d8;
	goto L66ae;
	show_trap_effect(0, 0);
	i = 0;
#asm
	db 0ebh,015h
#endasm
L6629:
	trap_damage_member(i, (game_state_arg + 1), 10);
	i++;
L663e:
	if (i < party_count) goto L6629;
	goto L66ae;
	show_trap_effect(0, 4);
	i = 0;
#asm
	db 0ebh,018h
#endasm
L665e:
	inflict_condition(i, 5260, 11, 3);
	i++;
L6676:
	if (i < party_count) goto L665e;
	goto L66ae;
#asm
	db 0aeh,066h,098h,05fh,0ceh,05fh,010h,060h,021h,060h,065h,060h,076h,061h,0bfh,062h
	db 0d0h,062h,0a9h,063h,0bah,063h,0f3h,063h,004h,064h,0c3h,065h,017h,066h,049h,066h
l66a1:
	db 03dh,010h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,081h,066h
#endasm
L66ae:
	return;
}
