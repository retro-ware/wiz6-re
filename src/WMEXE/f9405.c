#asm
	extrn $ldv:near
#endasm
extern int g4352;
extern int g435a;
extern int g435c;
extern int g435e;
extern int g4ec8;
extern int g4ecc;
extern int g4ece;
extern int g4ed0;
extern int g4ed2;
extern int g4ed4;
extern int g4ed6;
extern int g4ed8;
extern int g4eda;
extern int g4edc;
extern int g4fc8;
extern int g5116;
extern int game_state_arg;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
struct s4 { int w[2]; };
struct s4 f5eea();
do_cast_spell(p4, p6, p8)
char *p4;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[2];
	l6 = (unsigned char)p4[31];
#asm
	db 08ah,047h,020h,089h,046h,0f8h
#endasm
	g5116 = 0;
	calc_spell_level_value(p6, p8);
	if (*(char *)&l6 == -1) goto L9452;
#asm
	db 050h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,058h,02bh,000h,08bh,05eh,004h,003h,007h
#endasm
L9452:
	;
#asm
l9452:
	db 089h,046h,0f6h
#endasm
	switch (p6) {
case 0:
	f8efc(l6, l8, 2, 1);
	f8149(l6, l8, 1, 7, p8, 1, l10);
	goto Lb021;
case 1:
	f8efc(l6, l8, 3, 0);
	f825f(l6, (0 - (p8 + 1)), 3476, 2, 4, l10, 0, p8, 2, p8, 0, 0);
	goto Lb021;
case 2:
	f8efc(l6, 0, 0, 1);
	f8149(l6, (0 - (p8 + 3)), 2, 5, p8, 1, l10);
	goto Lb021;
case 3:
	(*(char **)((char *)monster_groups + (g435e << 1)))[396] = (char)clamp_toward_x((p8 * 15), (unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[396], 0);
	goto Lb021;
case 4:
	f8efc(l6, 0, 0, 1);
	f8149(l6, (0 - (p8 + 4)), 3, 3, p8, 1, l10);
	goto Lb021;
case 5:
	f8efc(l6, 0, 2, 1);
	f8149(l6, (0 - (p8 + 3)), 1, 10, p8, 1, l10);
	goto Lb021;
case 6:
	f8efc(l6, 0, 2, 1);
	f8bdb(l6, (0 - (p8 + 3)), p8, l10);
	goto Lb021;
case 7:
	f8efc(l6, 0, 0, 1);
	f8149(l6, -10, 2, 4, p8, 1, l10);
	l2 = (unsigned char)(*(char **)((char *)monster_groups + (l6 << 1)))[402];
	if (l2 < p8) {
	l2 = p8;
	}
	(*(char **)((char *)monster_groups + (l6 << 1)))[402] = (char)(l2 + 1);
	(*(char **)((char *)monster_groups + (l6 << 1)))[406] = (char)(g435a + 1);
	goto Lb021;
case 8:
	f8efc((g435e == 0 ? 1 : 0), 0, 0, 1);
	f861e(((!g435e) || (g435e == 6) ? 1 : 0), 5, 5, p8, 1, l10);
	goto Lb021;
case 9:
	f8efc(l6, l8, 1, 1);
	f8149(l6, l8, 1, 6, p8, 3, l10);
	goto Lb021;
case 11:
	f8efc(l6, 0, 16, 0);
	f825f(l6, -10, 3473, 10, 1, l10, 0, p8, 3, p8, 0, 0);
	goto Lb021;
case 12:
	f8efc(l6, 0, 16, 0);
	f88b1(l6, (0 - (p8 + 3)), l10, p8, 1);
	goto Lb021;
case 13:
	f8efc(l6, 0, 16, 0);
	f88b1(l6, (0 - (p8 + 3)), l10, p8, 0);
	goto Lb021;
case 14:
	l2 = 0;
	goto L97ea;
L97a1:
	if ((unsigned)((char *)monster_groups[g435e] + (44 * l2))[34] < 3) {
	((char *)monster_groups[g435e] + (44 * l2))[41] = (char)clamp_toward_x((p8 << 1), ((char *)monster_groups[g435e] + (44 * l2))[41], 0);
	}
	l2++;
L97ea:
	if ((unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[413] > l2) goto L97a1;
	goto Lb021;
case 16:
	(*(char **)((char *)monster_groups + (g435e << 1)))[397] = (char)clamp_toward_x((p8 * 15), (unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[397], 0);
	goto Lb021;
case 17:
	f8efc(l6, 0, 1, 1);
	f8149(l6, (0 - (p8 + 4)), 3, 4, p8, 3, l10);
	goto Lb021;
case 18:
	f8efc(l6, l8, 16, 0);
	f825f(l6, l8, 3475, 4, 3, l10, 0, (p8 << 1), 1, p8, 0, 0);
	goto Lb021;
case 19:
	f8efc(l6, l8, 1, 1);
	f8149(l6, l8, 3, 10, p8, 3, l10);
	goto Lb021;
case 20:
	f8efc(l6, l8, 3, 0);
	f83f3(l6, l8, 3477, 6, p8, l10, 1, 5, 5, 0, (p8 * 10), 2, p8, 0, 0);
	goto Lb021;
case 21:
	(*(char **)((char *)monster_groups + (g435e << 1)))[398] = (char)clamp_toward_x((p8 * 15), (unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[398], 0);
	goto Lb021;
case 22:
	f8efc(l6, 0, 3, 1);
	f83f3(l6, -3, 3480, 5, p8, l10, 1, 6, 8, 0, p8, 4, p8, 0, 0);
	goto Lb021;
case 23:
	(*(char **)((char *)monster_groups + (g435e << 1)))[399] = (char)clamp_toward_x((p8 * 15), (unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[399], 0);
	goto Lb021;
case 24:
	f8efc(l6, 0, 16, 0);
	f825f(l6, (0 - (p8 + 3)), 3472, 12, 0, l10, 0, p8, 2, 0, 0, 0);
	goto Lb021;
case 25:
	f8efc(l6, 0, 3, 0);
	f83f3(l6, -10, 3477, 6, p8, l10, 1, 4, 5, 0, (p8 * 10), 2, p8, 0, 0);
	l2 = (unsigned char)(*(char **)((char *)monster_groups + (l6 << 1)))[403];
	if (l2 < p8) {
	l2 = p8;
	}
	(*(char **)((char *)monster_groups + (l6 << 1)))[403] = (char)(l2 + 1);
	(*(char **)((char *)monster_groups + (l6 << 1)))[407] = (char)(g435a + 1);
	goto Lb021;
case 27:
	f8efc(l6, 0, 4, 0);
	f8149(l6, (0 - (p8 + 3)), 1, 7, p8, 5, l10);
	goto Lb021;
case 28:
	clear_msg_line(3);
	print_msg_centered(3224, 3, 3);
	combat_delay((g4fc8 / 2));
	for (l2 = 0; l2 < 4; l2++) {
	if ((l4 = ((unsigned char)((char *)monster_groups[g435e] + l2)[402] - p8)) >= 0) goto L9b82;
	l4 = 0;
L9b82:
	((char *)monster_groups[g435e] + l2)[402] = *(char *)&l4;
	}
	if ((unsigned)(*(char **)((char *)monster_groups + (g435e << 1)))[399] > 0) {
	if ((l4 = ((unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[399] - (p8 * 10))) < 0) {
	l4 = 0;
	}
	(*(char **)((char *)monster_groups + (g435e << 1)))[399] = *(char *)&l4;
	clear_msg_line(3);
	print_msg_centered((l4 == 0 ? 3225 : 3226), 3, 3);
	}
	goto Lb021;
case 29:
	f8efc(l6, l8, 3, 0);
	if (random(100) >= (p8 * 5)) goto L9c52;
	f825f(l6, l8, 3489, 6, 3, l10, 1, 0, 0, 0, 14, 6);
	goto L9c9e;
L9c52:
	f83f3(l6, l8, 3477, 6, p8, l10, 3, 5, 5, 0, (p8 * 10), 4, (p8 * 10), 0, 0);
L9c9e:
	goto Lb021;
case 31:
	f8efc(l6, 0, 3, 0);
	f83f3(l6, -10, 3480, 5, p8, l10, 2, 3, 8, 0, p8, 4, p8, 0, 0);
	l2 = (unsigned char)(*(char **)((char *)monster_groups + (l6 << 1)))[404];
	if (l2 < p8) {
	l2 = p8;
	}
	(*(char **)((char *)monster_groups + (l6 << 1)))[404] = (char)(l2 + 1);
	(*(char **)((char *)monster_groups + (l6 << 1)))[408] = (char)(g435a + 1);
	goto Lb021;
case 32:
	f8efc(l6, 0, 3, 1);
	f83f3(l6, (0 - (p8 + 3)), 3480, 5, p8, l10, 1, 6, 8, 0, p8, 4, p8, 0, 0);
	goto Lb021;
case 33:
	f8efc(l6, 0, 4, 0);
	f87ae(((!g435e) || (g435e == 6) ? 1 : 0), 3490, 5, 3, l10, 1, p8, p8, p8, 14, 6);
	goto Lb021;
case 34:
	f8efc((g435e == 0 ? 1 : 0), 0, 4, 0);
	f861e(((!g435e) || (g435e == 6) ? 1 : 0), 4, 4, p8, 5, l10);
	goto Lb021;
case 35:
	f8efc(l6, l8, 3, 1);
	f8149(l6, l8, 1, 7, p8, 8, l10);
	goto Lb021;
case 36:
	f8efc(l6, l8, 3, 0);
	f825f(l6, -3, 3487, 8, 9, l10, 0, p8, 2, p8, 0, 0);
	goto Lb021;
case 37:
	((char *)monster_groups[l6] + (44 * l8))[38] = (char)clamp_toward_x(p8, ((char *)monster_groups[l6] + (44 * l8))[38], 1);
	goto Lb021;
case 40:
	f8efc(l6, 0, 15, 0);
	f8149(l6, (0 - (p8 + 3)), 2, 4, p8, 7, l10);
	goto Lb021;
case 42:
	f8efc(l6, l8, 2, 0);
	f825f(l6, l8, 3488, 4, 3, l10, 0, (p8 << 1), 1, p8, 0, 0);
	goto Lb021;
case 43:
	f8efc(l6, 0, 3, 1);
	f8149(l6, -10, 1, 6, p8, 8, l10);
	l2 = (unsigned char)(*(char **)((char *)monster_groups + (l6 << 1)))[405];
	if (l2 < p8) {
	l2 = p8;
	}
	(*(char **)((char *)monster_groups + (l6 << 1)))[405] = (char)(l2 + 1);
	(*(char **)((char *)monster_groups + (l6 << 1)))[409] = (char)(g435a + 1);
	goto Lb021;
case 44:
	f8efc(l6, l8, 4, 1);
	l4 = f7af7(l6, p8, 0, l10);
	l2 = 0;
	goto La052;
La012:
	((char *)monster_groups[l6] + (44 * l2))[38] = (char)clamp_toward_x(l4, ((char *)monster_groups[l6] + (44 * l2))[38], 0);
	l2++;
La052:
	if ((unsigned char)(*(char **)((char *)monster_groups + (l6 << 1)))[413] > l2) goto La012;
	goto Lb021;
case 45:
	if ((g435e) && (g435e != 6)) goto La09d;
	f8fa8(212, 213, 214, 215, 216, 217, p8);
	goto La10d;
La09d:
	switch (game_state_arg) {
case 10:
	f8fa8(214, 214, 214, 214, 214, 214, p8);
	goto La10d;
case 11:
	f8fa8(214, 214, 215, 215, 216, 216, p8);
	goto La10d;
case 12:
	f8fa8(214, 214, 214, 215, 215, 217, p8);
	goto La10d;
default:
	f8fa8(0, 0, 0, 0, 0, 0, 0);
	goto La10d;
	}
La10d:
	goto Lb021;
case 47:
	f8efc(l6, l8, 16, 1);
	f83f3(l6, l8, 3479, 10, p8, l10, 1, 7, 7, 0, p8, 1, p8, 0, 0);
	goto Lb021;
case 48:
	f8efc(l6, 0, 16, 0);
	f825f(l6, (0 - (p8 + 3)), 3474, 9, 2, l10, 0, p8, 2, 0, 0, 0);
	goto Lb021;
case 49:
	l4 = (((p8 - 1) / 2) + 1);
	l2 = 0;
	goto La23c;
La1bf:
	((char *)monster_groups[g435e] + (44 * l2))[38] = (char)clamp_toward_x(l4, ((char *)monster_groups[g435e] + (44 * l2))[38], 1);
	((char *)monster_groups[g435e] + (44 * l2))[39] = (char)clamp_toward_x(l4, ((char *)monster_groups[g435e] + (44 * l2))[39], 1);
	l2++;
La23c:
	if ((unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[413] > l2) goto La1bf;
	goto Lb021;
case 50:
	f8efc(l6, l8, 16, 0);
	f825f(l6, l8, 3496, 9, 3, l10, 0, (p8 << 1), 1, p8, 0, 0);
	goto Lb021;
case 54:
	l2 = 1;
	goto La2ed;
La2a7:
	if (random(100) < (((p8 * 10) + 80) - (game_state_arg * 5))) {
	(*(char **)((char *)monster_groups + (l2 << 1)))[412] = 0;
	}
	l2++;
La2ed:
	if (l2 <= monster_group_count) goto La2a7;
	goto Lb021;
case 55:
	f8efc(l6, l8, 16, 0);
	f825f(l6, (0 - (p8 + 3)), 3492, 9, 3, l10, 0, p8, 2, 0, 0, 0);
	goto Lb021;
case 58:
	f8efc(l6, 0, 16, 1);
	f83f3(l6, (0 - (p8 + 3)), 3479, 10, p8, l10, 1, 7, 7, 0, (p8 << 1), 2, p8, 0, 0);
	goto Lb021;
case 59:
	if ((g435e) && (g435e != 6)) goto La3d2;
	f8fa8(218, 219, 220, 221, 222, 223, p8);
	goto La472;
La3d2:
	switch (game_state_arg) {
case 9:
	f8fa8(218, 218, 219, 219, 219, 222, p8);
	goto La472;
case 10:
	f8fa8(219, 219, 219, 222, 222, 223, p8);
	goto La472;
case 11:
	f8fa8(214, 214, 210, 216, 210, 216, p8);
	goto La472;
case 12:
	f8fa8(219, 219, 219, 222, 222, 223, p8);
	goto La472;
default:
	f8fa8(0, 0, 0, 0, 0, 0, 0);
	goto La472;
	}
La472:
	goto Lb021;
case 61:
	f8efc(l6, l8, 16, 0);
	f825f(l6, l8, 3482, 11, 3, (l10 + -35), 1, 0, 0, 0, 14, 6);
	goto Lb021;
case 63:
	f8efc(l6, 0, 16, 1);
	f861e(((!g435e) || (g435e == 6) ? 1 : 0), 4, 4, p8, 10, l10);
	goto Lb021;
case 65:
	f8efc(l6, l8, 15, 0);
	f8149(l6, l8, 1, 8, p8, 12, l10);
	goto Lb021;
case 66:
	f8efc(l6, 0, 2, 1);
	f8149(l6, (0 - (p8 + 1)), 1, 7, p8, 12, l10);
	goto Lb021;
case 67:
	f8efc(l6, 0, 2, 1);
	if ((*(char **)((char *)group_monster_rec + (l6 << 1)))[208] == 20) goto La5a2;
	l10 = -100;
	goto La5c7;
La5a2:
	l10 += ((*(int *)p4 - *(int *)((char *)monster_groups[l6] + (44 * l8))) * 3);
La5c7:
	f825f(l6, (0 - p8), 3493, 11, 3, l10, 1, 0, 0, 0, 14, 6);
	goto Lb021;
case 69:
	if (!((char *)monster_groups[g435e] + (44 * g435c))[36]) {
	((char *)monster_groups[g435e] + (44 * g435c))[37] = (char)(random((g435a / 2)) + (g435a / 2));
	}
	((char *)monster_groups[g435e] + (44 * g435c))[36] = (char)((unsigned char)((char *)monster_groups[g435e] + (44 * g435c))[36] + (p8 * 3));
	goto Lb021;
case 71:
	if ((g435e) && (g435e != 6)) goto La6db;
	if (!random(2)) {
	f8fa8(200, 201, 202, 203, 204, 205, p8);
	} else {
	f8fa8(206, 207, 208, 209, 210, 211, p8);
	}
	goto La7ae;
La6db:
	if (((unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[410] != 150) && ((unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[410] != 153)) goto La70c;
	f8fa8(211, 211, 211, 211, 211, 211, 1);
	goto La7ae;
La70c:
	switch (game_state_arg) {
case 9:
	f8fa8(200, 207, 202, 208, 203, 209, p8);
	goto La7ae;
case 10:
	f8fa8(201, 201, 208, 208, 208, 208, p8);
	goto La7ae;
case 11:
	f8fa8(202, 202, 208, 203, 203, 210, p8);
	goto La7ae;
case 12:
	f8fa8(206, 206, 208, 208, 209, 209, p8);
	goto La7ae;
default:
	f8fa8(0, 0, 0, 0, 0, 0, 0);
	goto La7ae;
	}
La7ae:
	goto Lb021;
case 72:
	(*(char **)((char *)monster_groups + (l6 << 1)))[401] = (char)clamp_toward_x((p8 << 1), (unsigned char)(*(char **)((char *)monster_groups + (l6 << 1)))[401], 0);
	goto Lb021;
case 75:
	f8efc(l6, 0, 2, 1);
	if ((*(char **)((char *)group_monster_rec + (l6 << 1)))[208] == 21) goto La813;
	l10 = -100;
	goto La838;
La813:
	l10 += ((*(int *)p4 - *(int *)((char *)monster_groups[l6] + (44 * l8))) * 3);
La838:
	f825f(l6, (0 - p8), 3497, 11, 3, l10, 1, 0, 0, 0, 14, 6);
	goto Lb021;
case 76:
	f8efc(l6, 0, 4, 0);
	f861e(((!g435e) || (g435e == 6) ? 1 : 0), 4, 4, p8, 11, l10);
	goto Lb021;
case 78:
	f8efc(l6, 0, 16, 0);
	f87ae(((!g435e) || (g435e == 6) ? 1 : 0), 3486, 11, 3, l10, 1, p8, p8, p8, 14, 6);
	goto Lb021;
case 79:
	f8efc(l6, l8, 4, 0);
	if ((((*(char **)((char *)group_monster_rec + (l6 << 1)))[208] == 22) && (g4352)) || (((*(char **)((char *)group_monster_rec + (l6 << 1)))[208] == 20) || ((*(char **)((char *)group_monster_rec + (l6 << 1)))[208] == 21))) goto La946;
	l10 = -100;
La946:
	if ((l4 = (int)(((long)*(int *)(((char *)monster_groups[l6] + (44 * l8)) + 2) << 3) / (long)*(int *)(((char *)monster_groups[l6] + (44 * l8)) + 4))) < 2) {
	l4 = 2;
	}
	f8149(l6, l8, 1, l4, p8, 0, l10);
	goto Lb021;
case 10:
	l2 = roll_dice_x(f5eea((p8 << 1), 8, p8));
	*(int *)(((char *)monster_groups[l6] + (44 * l8)) + 6) += l2;
	if (*(int *)(((char *)monster_groups[l6] + (44 * l8)) + 6) > *(int *)(((char *)monster_groups[l6] + (44 * l8)) + 8)) {
	*(int *)(((char *)monster_groups[l6] + (44 * l8)) + 6) = *(int *)(((char *)monster_groups[l6] + (44 * l8)) + 8);
	}
	if (!l6) {
	draw_member_card_x(l8, 0);
	}
	goto Lb021;
case 15:
	if ((l2 = ((unsigned char)((char *)monster_groups[l6] + (44 * l8))[17] - (p8 * 25))) < 0) {
	l2 = 0;
	}
	((char *)monster_groups[l6] + (44 * l8))[17] = *(char *)&l2;
	if (!l6) {
	draw_member_card_x(l8, 0);
	}
	goto Lb021;
case 26:
	if ((l2 = ((unsigned char)((char *)monster_groups[l6] + (44 * l8))[35] - p8)) <= 0) {
	l2 = 0;
	((char *)monster_groups[l6] + (44 * l8))[19] = 0;
	}
	((char *)monster_groups[l6] + (44 * l8))[35] = *(char *)&l2;
	if ((l2 = ((unsigned char)((char *)monster_groups[l6] + (44 * l8))[19] - (p8 * 5))) <= 0) {
	l2 = 0;
	((char *)monster_groups[l6] + (44 * l8))[35] = 0;
	}
	((char *)monster_groups[l6] + (44 * l8))[19] = *(char *)&l2;
	if (!l6) {
	draw_member_card_x(l8, 0);
	}
	goto Lb021;
case 57:
	if ((l2 = ((unsigned char)((char *)monster_groups[l6] + (44 * l8))[21] - (p8 * 25))) < 0) {
	l2 = 0;
	}
	((char *)monster_groups[l6] + (44 * l8))[21] = *(char *)&l2;
	if (!l6) {
	draw_member_card_x(l8, 0);
	}
	goto Lb021;
case 51:
	l4 = 1;
Lab86:
	if (((((l4 != 1) && (l4 != 2)) && (l4 != 4)) && (l4 != 8)) && (l4 != 9)) goto Labdb;
	if ((l2 = ((unsigned char)((char *)monster_groups[l6] + ((44 * l8) + l4))[14] - (p8 << 1))) < 0) {
	l2 = 0;
	}
	((char *)monster_groups[l6] + ((44 * l8) + l4))[14] = *(char *)&l2;
Labdb:
	l4++;
	if (l4 <= 9) goto Lab86;
	if (!l6) {
	draw_member_card_x(l8, 0);
	}
	goto Lb021;
case 74:
	f8efc(l6, 0, 4, 0);
	l2 = f7ddc(l6, l8, (p8 << 2), 4, (p8 << 2), 11, l10);
	if (!l6) {
	draw_member_card_x(l8, 0);
	}
	l6 = g435e;
	l8 = g435c;
	p8 = (l2 / 7);
case 64:
	l2 = roll_dice_x(f5eea(p8, 7, p8));
	*(int *)(((char *)monster_groups[l6] + (44 * l8)) + 2) += l2;
	if (*(int *)(((char *)monster_groups[l6] + (44 * l8)) + 2) > *(int *)(((char *)monster_groups[l6] + (44 * l8)) + 4)) {
	*(int *)(((char *)monster_groups[l6] + (44 * l8)) + 2) = *(int *)(((char *)monster_groups[l6] + (44 * l8)) + 4);
	}
	if (!l6) {
	draw_member_card_x(l8, 0);
	}
	goto Lb021;
case 80:
	l2 = roll_dice_x(f5eea(p8, 8, p8));
	*(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 6) += l2;
	if (*(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 6) > *(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 8)) {
	*(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 6) = *(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 8);
	}
	l2 = roll_dice_x(f5eea(p8, 2, 0));
	*(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 2) += l2;
	if (*(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 2) > *(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 4)) {
	*(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 2) = *(int *)(((char *)monster_groups[g435e] + (44 * g435c)) + 4);
	}
	if (!g435e) {
	draw_member_card_x(g435c, 0);
	}
	goto Lb021;
case 81:
	if (g435e) goto Lae36;
	l2 = 0;
Ladd4:
	l4 = roll_dice_x(f5eea(p8, 10, 0));
	*(int *)((char *)pc_spell_pts + ((432 * g435c) + (l2 << 2))) += l4;
	if (*(int *)((char *)pc_spell_pts + ((432 * g435c) + (l2 << 2))) > *(int *)((char *)pc_spell_pts_max + ((432 * g435c) + (l2 << 2)))) {
	*(int *)((char *)pc_spell_pts + ((432 * g435c) + (l2 << 2))) = *(int *)((char *)pc_spell_pts_max + ((432 * g435c) + (l2 << 2)));
	}
	l2++;
	if (l2 < 6) goto Ladd4;
Lae36:
	goto Lb021;
case 53:
	g4ed0 += (p8 * 50);
	g4ed2 = clamp_toward_x(((p8 * 5) + 70), g4ed2, 0);
	goto Lb021;
case 68:
	g4ed4 += (p8 * 35);
	g4ed6 = clamp_toward_x((((p8 - 1) / 2) + 1), g4ed6, 0);
	goto Lb021;
case 41:
	g4ecc += (p8 * 50);
	g4ece = clamp_toward_x((((p8 - 1) / 2) + 1), g4ece, 0);
	goto Lb021;
case 30:
	g4edc += (p8 * 5);
	goto Lb021;
case 38:
	g4ec8 += (100 * p8);
	goto Lb021;
case 70:
	(*(char **)((char *)monster_groups + (g435e << 1)))[400] = (char)clamp_toward_x((p8 * 10), (unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[400], 0);
	if (!g435e) {
	g4ed8 += (p8 * 50);
	g4eda = clamp_toward_x((p8 * 10), g4eda, 0);
	}
	goto Lb021;
	}
Lb021:
	if (!g5116) {
	combat_delay((g4fc8 / 2));
	}
}
