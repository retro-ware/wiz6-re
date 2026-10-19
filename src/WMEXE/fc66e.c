#asm
	extrn do_cast_action_:near
	extrn fb934_:near
	extrn random_:near
	extrn reduce_field6_:near
	extrn test_bit_:near
#endasm
extern char *group_monster_rec;
extern char g019a[];
extern char g019d[];
extern char g433e[];
extern char g4348[];
extern char g4515[];
extern char g4518[];
extern char g4519[];
extern char g4591[];
extern char g4592[];
extern char g4593[];
extern char g505c;
extern char pc_class[];
extern char pc_equipped[];
extern char pc_sex[];
extern char pc_stats[];
extern int anim_cycle;
extern int cur_member;
extern int g435c;
extern int g435e;
extern int g4fc8;
extern int g50fc;
extern int g50fe[];
extern int g5114;
extern int g5118;
extern int game_state;
extern int monster_groups[];
extern int party_picture_win;
extern int return_cmd;
extern int view_pos_group[];
fc66e()
{
	char *l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	group_monster_rec[220] = 0;
	g5114 = 6;
	g50fc = 0;
	g5118 = 0;
#asm
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0c8h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,087h,0a8h,043h,003h,0c1h,089h,046h,0feh,08bh,0d8h,080h,07fh,022h,002h,073h
	db 00ch,080h,07fh,011h,000h,077h,006h,080h,07fh,010h,000h,076h,005h
#endasm
	return;
Lc6c2:
	clear_window(party_picture_win, 1);
	l4 = 0;
	l6 = 0;
	l8 = 0;
	if ((((l4) || ((unsigned)l2[15] <= 0)) || (random(100) <= 80)) || (l2[30] == 7)) goto Lc709;
	l4 = 3209;
Lc709:
	if (((l4) || ((unsigned)l2[21] <= 0)) || (random(100) <= 40)) goto Lc74a;
	l4 = (random(3) + 3205);
	if (random(100) <= 80) goto Lc74a;
	l4 = 3208;
	l6 = 1;
Lc74a:
	if ((l4) || ((unsigned)l2[20] <= 0)) goto Lc770;
	l4 = 3210;
	if (random(100) <= 25) goto Lc770;
	l6 = 1;
Lc770:
	if (((l4) || ((unsigned)l2[18] <= 0)) || (random(100) <= 80)) goto Lc796;
	l4 = 3204;
	l6 = 0;
Lc796:
	if (((l4) || ((unsigned)l2[22] <= 0)) || (random(100) <= 75)) goto Lc7bc;
	l4 = 3203;
	l6 = 0;
Lc7bc:
	;
#asm
lc7bc:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0dch,000h,02ah
	db 0e4h,0a9h,004h,000h,074h,057h
#endasm
	if ((unsigned)((char *)monster_groups[(unsigned char)l2[31]] + ((unsigned char)l2[32] * 44))[20] <= 0) goto Lc829;
	l4 = 3218;
	if ((unsigned char)g019a[monster_groups[g435e]] != 151) goto Lc824;
	l2[43] = 3;
	l2[36] = 1;
	l8 = 2;
	goto Lc829;
Lc824:
	l8 = 1;
Lc829:
	if (l4 <= 0) goto Lcb02;
	combat_delay(2);
	get_combatant_name(20492, g435e, g435c);
	get_message(l4, 20652);
	g505c = 0;
	print_combat_line(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, 0);
	if (l8 <= 0) goto Lc9a0;
	if (((char *)monster_groups[g435e] + (44 * g435c))[42] == -1) goto Lc91b;
	l14 = (((char *)monster_groups[g435e] + (44 * g435c))[42] / 10);
	l16 = (((char *)monster_groups[g435e] + (44 * g435c))[42] % 10);
	anim_cycle = 0;
	*(int *)((char *)g50fe + ((l14 * 10) + (l16 << 1))) = 1;
	reset_animation();
	*(int *)((char *)view_pos_group + ((l14 * 10) + (l16 << 1))) = 0;
	g4348[((l14 * 5) + l16)] = 0;
	g433e[((l14 * 5) + l16)] = 0;
Lc91b:
	((char *)monster_groups[g435e] + (44 * g435c))[42] = 255;
	if (l8 != 1) goto Lc96a;
	((char *)monster_groups[g435e] + (44 * g435c))[34] = 3;
	*(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 2) = 0;
Lc96a:
	for (l14 = 0; l14 < 4; l14++) {
	((char *)monster_groups[g435e] + ((44 * g435c) + l14))[24] = 0;
	}
	combat_delay(g4fc8);
	return;
Lc9a0:
	combat_delay((g4fc8 / 2));
	if (l6) goto Lc9bd;
	l2[16]++;
	return;
Lc9bd:
	l2[30] = 0;
	l2[33] = 0;
	*(int *)(l2 + 12) = -1;
	*(int *)(l2 + 10) = 255;
	if (g435e) goto Lca10;
	l4 = 7;
	if (test_bit(((432 * g435c) + 17639), l4) != 1) goto Lca09;
	*(int *)(l2 + 10) = l4;
Lca09:
	l4--;
#asm
	db 07dh,0d9h
#endasm
	goto Lca40;
Lca10:
	l4 = 7;
#asm
lca15:
	db 0ffh,076h,0fch,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h,043h,005h,053h
	db 000h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,075h,009h
#endasm
	*(int *)(l2 + 10) = l4;
Lca3b:
	l4--;
#asm
	db 07dh,0d5h
#endasm
Lca40:
	if (*(int *)(l2 + 10) != 255) goto Lca4f;
	*(int *)(l2 + 10) = 8;
Lca4f:
	l2[28] = 0;
	l2[31] = *(char *)&g435e;
	l2[32] = (char)random((unsigned char)g019d[monster_groups[g435e]]);
	clear_window(party_picture_win, 1);
	combat_delay(2);
	get_combatant_name(20492, g435e, g435c);
	get_message(3211, 20652);
	g505c = 0;
	print_combat_line(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, 0);
	play_sound(0);
	combat_delay((g4fc8 / 2));
	clear_window(party_picture_win, 1);
Lcb02:
	if (((unsigned)((char *)monster_groups[(unsigned char)l2[31]] + ((unsigned char)l2[32] * 44))[34] < 3) && (!((char *)monster_groups[(unsigned char)l2[31]] + ((unsigned char)l2[32] * 44))[43])) goto Lcb60;
	if (l2[31]) goto Lcb45;
	l2[32] = (char)fc4e7((unsigned char)l2[32]);
	goto Lcb60;
Lcb45:
	l2[32] = (char)fc546((unsigned char)l2[31], (unsigned char)l2[32]);
Lcb60:
	if ((l6 != 1) || ((unsigned char)l2[32] != g435c)) goto Lcb7a;
	l2[16]++;
	return;
Lcb7a:
	if (g435e) goto Lcc9f;
	group_monster_rec[134] = pc_stats[(432 * g435c)];
	group_monster_rec[135] = g4515[(432 * g435c)];
	group_monster_rec[136] = g4518[(432 * g435c)];
	group_monster_rec[137] = g4519[(432 * g435c)];
	movmem(((432 * g435c) + 17722), (group_monster_rec + 148), 14);
	movmem(((432 * g435c) + 17736), (group_monster_rec + 190), 8);
	group_monster_rec[190] = (char)((group_monster_rec[190] + group_monster_rec[191]) + group_monster_rec[192]);
	group_monster_rec[211] = g4593[(432 * g435c)];
	group_monster_rec[213] = g4592[(432 * g435c)];
	group_monster_rec[212] = g4591[(432 * g435c)];
	group_monster_rec[214] = pc_sex[(432 * g435c)];
	group_monster_rec[208] = pc_class[(432 * g435c)];
	goto Lce09;
Lcc9f:
	if (l2[31]) goto Lce09;
	group_monster_rec[134] = pc_stats[((unsigned char)l2[32] * 432)];
	group_monster_rec[135] = g4515[((unsigned char)l2[32] * 432)];
	group_monster_rec[136] = g4518[((unsigned char)l2[32] * 432)];
	group_monster_rec[137] = g4519[((unsigned char)l2[32] * 432)];
	movmem((((unsigned char)l2[32] * 432) + 17722), (group_monster_rec + 148), 14);
	movmem((((unsigned char)l2[32] * 432) + 17736), (group_monster_rec + 190), 8);
	l4 = 0;
Lcd51:
	if ((l4 == 1) || (l4 == 2)) goto Lcd83;
	(group_monster_rec + l4)[190] = (char)(((group_monster_rec + l4)[190] + group_monster_rec[191]) + group_monster_rec[192]);
Lcd83:
	l4++;
	if (l4 < 8) goto Lcd51;
	group_monster_rec[211] = g4593[((unsigned char)l2[32] * 432)];
	group_monster_rec[213] = g4592[((unsigned char)l2[32] * 432)];
	group_monster_rec[212] = g4591[((unsigned char)l2[32] * 432)];
	group_monster_rec[214] = pc_sex[((unsigned char)l2[32] * 432)];
	group_monster_rec[208] = pc_class[((unsigned char)l2[32] * 432)];
Lce09:
	;
#asm
lce09:
	db 08bh,05eh,0feh,08ah,047h,01eh,02ah,0e4h,0e9h,043h,002h
#endasm
	if (((unsigned)((char *)monster_groups[(unsigned char)l2[31]] + ((unsigned char)l2[32] * 44))[34] >= 3) || (((char *)monster_groups[(unsigned char)l2[31]] + ((unsigned char)l2[32] * 44))[43])) goto Lcee7;
	l10 = (unsigned char)(l2 + ((unsigned char)l2[33] % 2))[28];
	if ((g435e) || ((unsigned char)pc_equipped[((432 * g435c) + l10)] != 255)) goto Lce81;
	l10 = 0;
Lce81:
	l12 = *(int *)((l2 + (((unsigned char)l2[33] % 2) << 1)) + 10);
	combat_delay(2);
	f723e(l2, l10, l12);
	if ((l12 != 3) && (l12 != 6)) goto Lced3;
	reduce_field6(l2, (random(4) + 3));
	goto Lcee7;
Lced3:
	reduce_field6(l2, (random(3) + 2));
Lcee7:
	goto Ld064;
	combat_delay(2);
#asm
	db 0ffh,076h,0feh
	call do_cast_action_
	db 059h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0e9h,05eh,001h
#endasm
	combat_delay(2);
#asm
	db 0ffh,076h,0feh
	call fb934_
	db 059h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0e9h,042h,001h
#endasm
	if (*(int *)(l2 + 10) != 3) goto Lcf5e;
	l4 = (int)(((long)*(int *)(l2 + 8) * 5) / 100L);
	*(int *)(l2 + 6) = ((random(l4) + *(int *)(l2 + 6)) + 1);
#asm
	db 08bh,047h,006h,03bh,047h,008h,07eh,006h,08bh,047h,008h,089h,047h,006h
#endasm
Lcf5e:
	goto Ld064;
	combat_delay(2);
	do_change_equipment();
	reduce_field6(l2, (random(4) + 3));
	reset_animation();
	clear_window(party_picture_win, 0);
	game_state = 17;
	return_cmd = 13;
	cur_member = g435c;
	return;
	combat_delay(2);
	do_use_item_action(l2);
#asm
	db 0b8h,003h,000h,050h
	call random_
	db 059h,040h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0e9h,098h,000h
#endasm
	combat_delay(2);
	do_advance_retreat(g435c, *(int *)(l2 + 10));
#asm
	db 0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,040h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0ebh,069h
#endasm
	combat_delay(2);
	do_hide(l2);
#asm
	db 0b8h,003h,000h,050h
	call random_
	db 059h,040h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0ebh,045h
#endasm
	combat_delay(2);
	do_run_away(l2);
#asm
	db 0b8h,005h,000h,050h
	call random_
	db 059h,005h,005h,000h,050h,0ffh,076h,0feh
	call reduce_field6_
	db 083h,0c4h,004h,0ebh,01fh,014h,0ceh,022h,0cfh,061h,0cfh,0eah,0ceh,0a7h,0cfh,0cch
	db 0cfh,0fbh,0cfh,01fh,0d0h,006h,0cfh
ld057:
	db 03dh,009h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,045h,0d0h
#endasm
Ld064:
	if (g435e) goto Ld079;
	draw_member_card_x(g435c, 0);
Ld079:
	return;
}
