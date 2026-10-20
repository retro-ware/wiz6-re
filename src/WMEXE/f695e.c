extern char g038e[];
extern char g038f[];
extern char g3746[];
extern char g375a[];
extern int anim_cycle;
extern int g50fe[];
extern int g5114;
extern int monster_groups[];
extern int view_anim_state;
play_spell_animation(p4, p6, p8, p10, p12, p14, p16)
{
	int l18[9];
	int l20;
	int l22;
	int l24;
	int l26;
	char l38[12];
	if ((p4) || (((char *)monster_groups[p4] + (44 * p6))[31])) goto L6989;
	return;
L6989:
	reset_animation();
	l18[8] = (p8 >= 5 ? (p8 < 13 ? 8 : 9) : 7);
	l18[3] = (p8 >= 5 ? (p8 < 13 ? (p8 + -5) : (p8 + -13)) : p8);
	if ((p4) && (p4 != 6)) goto L6a10;
	l26 = 0;
	l18[4] = 0;
	l18[0] = 2;
	l18[1] = 1;
	l18[2] = 0;
	if (!(p6 % 2)) {
	l24 = 0;
	l18[5] = 0;
	} else {
	l24 = 1;
	l18[5] = 1;
	}
	goto L6a98;
L6a10:
	l26 = 1;
	l18[4] = -1;
	l18[0] = 0;
	l18[1] = 1;
	l18[2] = 2;
	if ((p14 != -1) && ((p14 % 2))) goto L6a6c;
	l24 = 0;
	l18[5] = ((p8 == 6) || (p8 == 8) || ((p8 >= 10) && (p8 <= 13)) || (p8 == 15) ? 0 : 1);
	goto L6a98;
L6a6c:
	l24 = 1;
	l18[5] = ((p8 == 6) || (p8 == 8) || ((p8 >= 10) && (p8 <= 13)) || (p8 == 15) ? 1 : 0);
L6a98:
	play_sound(g5114);
	l18[7] = (unsigned char)g3746[((314 * l18[8]) + l18[3])];
	for (l18[6] = 0; l18[6] < 3; l18[6]++) {
	l22 = 42;
	l20 = ((unsigned char)g375a[((314 * l18[8]) + (l18[7] << 2))] + l18[l18[6]]);
	l38[0] = *(char *)&l20;
	l38[(0 + 1)] = 0;
	view_anim_state = -2;
	animate_step();
	add_sprite(l22, l18[8], (unsigned char)g038e[((((p8 * 24) + (l26 * 12)) + (l24 * 6)) + (l18[6] << 1))], (unsigned char)g038f[((((p8 * 24) + (l26 * 12)) + (l24 * 6)) + (l18[6] << 1))], 72, 248, l18[5], l38);
L6b5c:
	animate_step();
	if (view_anim_state != -2) goto L6b5c;
	}
	if (p16 == 1) {
	g50fe[(p10 * 5)] = l18[4];
	anim_cycle = 0;
	combat_delay(2);
	}
	return;
}
