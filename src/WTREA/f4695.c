extern char g038e[];
extern char g038f[];
extern char g3746[];
extern char g375a[];
animate_chest_trap(p4, p6, p8)
{
	int l2;
	int l4;
	int l14[5];
	int l16;
	int l18;
	int l20;
	char l32[12];
	if (p8 != 3) goto L46a8;
	return -1;
L46a8:
	l16 = (p6 >= 5 ? (p6 < 13 ? 8 : 9) : 7);
	l14[3] = (p6 >= 5 ? (p6 < 13 ? (p6 + -5) : (p6 + -13)) : p6);
	l20 = 1;
	l14[0] = 0;
	l14[1] = 1;
	l14[2] = 2;
	if ((p4 != -1) && ((p4 % 2))) goto L4734;
	l18 = 0;
	l14[4] = ((p6 == 6) || (p6 == 8) || ((p6 >= 10) && (p6 <= 13)) || (p6 == 15) ? 0 : 1);
	goto L4760;
L4734:
	l18 = 1;
	l14[4] = ((p6 == 6) || (p6 == 8) || ((p6 >= 10) && (p6 <= 13)) || (p6 == 15) ? 1 : 0);
L4760:
	l2 = (unsigned char)g3746[((314 * l16) + l14[3])];
	l4 = ((unsigned char)g375a[((314 * l16) + (l2 << 2))] + l14[p8]);
	l32[0] = *(char *)&l4;
	l32[(0 + 1)] = 0;
	drv_draw_text(l16, (unsigned char)g038e[((((p6 * 24) + (l20 * 12)) + (l18 * 6)) + (p8 << 1))], (unsigned char)g038f[((((p6 * 24) + (l20 * 12)) + (l18 * 6)) + (p8 << 1))], 72, 248, l14[4], 0, l32);
	return (p8 + 1);
}
