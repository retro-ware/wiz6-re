extern char g00de[];
extern char g00df[];
extern char g00e0[];
extern char g450c[];
extern int g4404[];
extern int g4410[];
extern int g522c;
extern int g527a;
extern int g5322;
f9edb(p4, p6)
{
	int l2;
	int l4;
	f32be(p4, 32, 3, 0);
	l2 = f8ce8(p4, p6);
	g522c = -1;
	if (l2 == -1) goto L9fcb;
	l4 = (l2 / 256);
	l2 = (l2 % 256);
	*(int *)((char *)g4410 + ((432 * p6) + ((unsigned char)g00de[(l2 * 6)] << 2))) -= ((unsigned char)g00e0[(l2 * 6)] * l4);
	f817e(p6, l2, l4, g5322);
	*(int *)((char *)g4404 + (432 * p6)) -= ((f09e2(l4) + (unsigned char)g00df[(l2 * 6)]) + l4);
	if (*(int *)((char *)g4404 + (432 * p6)) >= 0) goto L9fbe;
	*(int *)((char *)g4404 + (432 * p6)) = 0;
	g450c[(432 * p6)] = (char)(f09e2(6) + 6);
L9fbe:
	f5078(p6, g527a);
L9fcb:
	;
}
