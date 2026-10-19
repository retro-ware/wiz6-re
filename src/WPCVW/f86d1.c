extern char g00de[];
extern char g00df[];
extern char g00e0[];
extern char g450c[];
extern int g4404[];
extern int g4410[];
extern int g553c;
extern int g578e;
f86d1(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	f32be(p6, 32, 3, 0);
	f3118(p6);
	f030b(p6, 8, 1);
	f083f(701, p6, 18);
	f31d1(p6);
	if (p10) goto L873e;
	f780a(p4, p6, p8, 0);
	g553c = -1;
#asm
	db 0e9h,0d5h,000h
#endasm
L873e:
	l2 = f780a(p4, p6, p8, 1);
	if (l2 == -1) goto L8813;
	g553c = -1;
	l6 = (l2 / 256);
	l4 = (l2 % 256);
	*(int *)((char *)g4410 + ((432 * p8) + ((unsigned char)g00de[(l4 * 6)] << 2))) -= ((unsigned char)g00e0[(l4 * 6)] * l6);
	*(int *)((char *)g4404 + (432 * p8)) -= ((f09e2(l6) + (unsigned char)g00df[(l4 * 6)]) + l6);
	if (*(int *)((char *)g4404 + (432 * p8)) >= 0) goto L87fa;
	*(int *)((char *)g4404 + (432 * p8)) = 0;
	g450c[(432 * p8)] = (char)(f09e2(6) + 6);
L87fa:
	f6b3c(p8, l4, l6, g578e, p4, p6);
L8813:
	;
}
