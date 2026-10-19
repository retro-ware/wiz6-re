extern char g019b[];
extern char g3648[];
extern char g3649[];
extern char g364a[];
extern char g3732[];
extern char g373c[];
extern char g3746[];
extern char g3750[];
extern char g375b[];
extern char g375c[];
extern char g3813[];
extern char g3816[];
extern char g432c[];
extern int g43a8[];
f4f02(p4, p6)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	rsi = (unsigned char)g019b[g43a8[p4]];
	rdi = 0;
	goto L504c;
L4f23:
	if ((unsigned)g3813[(314 * rsi)] <= 0) goto L4f6d;
	if ((unsigned char)g3813[(314 * rsi)] == 255) goto L4f6d;
	if (g432c[rsi] == 46) goto L4f6d;
	if (g432c[rsi] == 36) goto L4f6d;
	l2 = ((unsigned char)g3813[(314 * rsi)] / 25);
	l4 = ((unsigned char)g3813[(314 * rsi)] % 25);
	if (g432c[rsi] != 54) goto L4f6b;
	if (rdi) goto L4f6b;
	l2 = 0;
	l4 = 0;
L4f6b:
	goto L4fc4;
L4f6d:
	l2 = (f09e2((unsigned char)g373c[((314 * rsi) + rdi)]) + (unsigned char)g3732[((314 * rsi) + rdi)]);
	l4 = (f09e2((unsigned char)g3750[((314 * rsi) + l2)]) + (unsigned char)g3746[((314 * rsi) + l2)]);
L4fc4:
	g3648[((p6 * 30) + (rdi * 3))] = *(char *)&l2;
	g3649[((p6 * 30) + (rdi * 3))] = *(char *)&l4;
	g364a[((p6 * 30) + (rdi * 3))] = (char)(f09e2((unsigned char)g375c[((314 * rsi) + (l4 << 2))]) + (unsigned char)g375b[((314 * rsi) + (l4 << 2))]);
	rdi++;
L504c:
	if ((unsigned char)g3816[(314 * rsi)] > rdi) goto L4f23;
}
