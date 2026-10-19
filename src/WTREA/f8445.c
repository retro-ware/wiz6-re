extern char g00de[];
extern char g00df[];
extern char g00e0[];
extern char g450c[];
extern int g4404[];
extern int g4410[];
extern int g501c;
extern int g51d4;
f8445(p4, p6, p8)
{
	int l2;
	int l4;
	l2 = f796a(p6, p8);
	g501c = -1;
	if (l2 == -1) goto L8520;
	l4 = (l2 / 256);
	l2 = (l2 % 256);
	*(int *)((char *)g4410 + ((432 * p8) + ((unsigned char)g00de[(l2 * 6)] << 2))) -= ((unsigned char)g00e0[(l2 * 6)] * l4);
	f6efd(p8, l2, l4, g51d4, p4, p6);
	*(int *)((char *)g4404 + (432 * p8)) -= ((f09e2(l4) + (unsigned char)g00df[(l2 * 6)]) + l4);
	if (*(int *)((char *)g4404 + (432 * p8)) >= 0) goto L8519;
	*(int *)((char *)g4404 + (432 * p8)) = 0;
	g450c[(432 * p8)] = (char)(f09e2(6) + 6);
L8519:
	f4db6(p8);
L8520:
	;
}
