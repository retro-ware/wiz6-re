extern char g3648[];
extern char g3649[];
extern char g364a[];
extern char g3732[];
extern char g373c[];
extern char g3746[];
extern char g3750[];
extern char g375a[];
extern char g375b[];
extern char g375c[];
extern char g3816[];
extern char pic_slot_monster[];
extern int monster_groups[];
build_monster_frames(p4, p6, p8)
char *p8;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	register int rsi;
	register int rdi;
	rsi = (unsigned char)(*(char **)((char *)monster_groups + (p4 << 1)))[411];
	l10 = 0;
	l8 = 0;
	goto L5ff0;
L5fc7:
	if (((char *)monster_groups[p4] + (44 * l8))[42] == p6) {
	l10 = l8;
	}
	l8++;
L5ff0:
	if ((unsigned char)(*(char **)((char *)monster_groups + (p4 << 1)))[413] > l8) goto L5fc7;
	l12 = 0;
	rdi = 0;
	goto L6214;
L6011:
	if (((((char *)monster_groups[p4] + (44 * l10))[34] != 2) && ((unsigned)((char *)monster_groups[p4] + (44 * l10))[17] <= 0)) && ((unsigned)((char *)monster_groups[p4] + (44 * l10))[16] <= 0)) goto L607a;
	l2 = (unsigned char)g3648[((p6 * 30) + (rdi * 3))];
	l4 = (unsigned char)g3746[((314 * rsi) + l2)];
	goto L61ce;
L607a:
	l4 = (unsigned char)g3649[((p6 * 30) + (rdi * 3))];
	l6 = (unsigned char)g364a[((p6 * 30) + (rdi * 3))];
	if (--l6 > 0) goto L61a8;
	l2 = (unsigned char)g3648[((p6 * 30) + (rdi * 3))];
	l4++;
	if ((((unsigned char)g3746[((314 * rsi) + l2)] + (unsigned char)g3750[((314 * rsi) + l2)]) - 1) < l4) {
	l2 = (random((unsigned char)g373c[((314 * rsi) + rdi)]) + (unsigned char)g3732[((314 * rsi) + rdi)]);
	g3648[((p6 * 30) + (rdi * 3))] = *(char *)&l2;
	l4 = (unsigned char)g3746[((314 * rsi) + l2)];
	}
	g3649[((p6 * 30) + (rdi * 3))] = *(char *)&l4;
	l6 = (random((unsigned char)g375c[((314 * rsi) + (l4 << 2))]) + (unsigned char)g375b[((314 * rsi) + (l4 << 2))]);
L61a8:
	g364a[((p6 * 30) + (rdi * 3))] = *(char *)&l6;
L61ce:
	*(p8 + l12) = g375a[((314 * rsi) + (l4 << 2))];
	if ((pic_slot_monster[rsi] != 40) || (rdi != 4)) goto L6203;
	*(p8 + l12) = 0;
L6203:
	if (*(p8 + l12)) {
	l12++;
	}
	rdi++;
L6214:
	if ((unsigned char)g3816[(314 * rsi)] > rdi) goto L6011;
	*(p8 + l12) = 0;
}
