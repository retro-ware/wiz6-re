extern char g00de[];
extern char g00df[];
extern char g00e0[];
extern char g00e3[];
extern char g5588[];
extern int g5498[];
extern int g549a[];
f6e38(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	char x12[10];
	int l24;
	int l36[6];
	switch (p8) {
case 0:
	l10 = 8;
	l12 = 28;
	goto L6e87;
case 1:
	l10 = 4;
	l12 = 26;
	goto L6e87;
case 3:
	l10 = 2;
	l12 = 27;
	goto L6e87;
case 2:
	l10 = 1;
	l12 = 25;
	goto L6e87;
	}
L6e87:
	movmem(22008, &l24, 12);
	setmem(22008, 12, 0);
	l8 = 1;
	l4 = 0;
	l2 = 0;
L6eba:
	if (!(l10 & (unsigned char)g00e3[(l2 * 6)])) goto L6f02;
	if ((unsigned char)g00df[(l2 * 6)] > l8) goto L6f02;
	if (f28af(&l24, l2)) goto L6f02;
	f2881(22008, l2, 1);
	l4++;
L6f02:
	l2++;
	if (l2 < 82) goto L6eba;
	if (l4) goto L6f29;
	movmem(&l24, 22008, 12);
	return;
L6f29:
	f32be(p6, 32, 3, 0);
	f3118(p6);
	f030b(p6, 1, 1);
	f083f(703, p6, 18);
	f31d1(p6);
	l2 = 0;
L6f70:
	l36[l2] = *(int *)((char *)g5498 + (l2 << 2));
	*(int *)((char *)g5498 + (l2 << 2)) = 999;
	l2++;
	if (l2 < 6) goto L6f70;
L6fa3:
	l6 = f6800(p4, p6, 0);
	if (l6 != -1) goto L6fbd;
	goto L6fa3;
L6fbd:
	movmem(&l24, 22008, 12);
	l2 = 0;
L6fd4:
	*(int *)((char *)g5498 + (l2 << 2)) = l36[l2];
	l2++;
	if (l2 < 6) goto L6fd4;
	f2881(22008, l6, 1);
	l2 = (((unsigned char)g00df[(l6 * 6)] << 1) + 1);
	l4 = (unsigned char)g00de[(l6 * 6)];
	if ((unsigned char)g00e0[(l6 * 6)] <= (*(int *)((char *)g549a + (l4 << 2)) + l2)) goto L704c;
	l2 = ((unsigned char)g00e0[(l6 * 6)] - *(int *)((char *)g549a + (l4 << 2)));
L704c:
	*(int *)((char *)g549a + (l4 << 2)) += l2;
	*(int *)((char *)g5498 + (l4 << 2)) += l2;
	g5588[p8]--;
	f50d1(p4);
	return;
}
