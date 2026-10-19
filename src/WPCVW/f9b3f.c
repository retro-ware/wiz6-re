extern char g442c[];
extern char g442d[];
extern char g442e[];
extern int g4428[];
extern int g442a[];
extern int g4fca;
f9b3f(p4, p6, p8, p10, p12)
{
	char x0[12];
	char l13;
	char l14;
	char x14[28];
	int l44;
	char x44[6];
	int l52;
	int l54;
	char x54[18];
	int l74;
	f0882(1, &l74, p8, 0);
	strcpy(((p10 << 4) + 21982), &l74);
	*(int *)((char *)g4428 + ((432 * p6) + (p10 << 3))) = p8;
	g442d[((432 * p6) + (p10 << 3))] = l13;
	g442c[((432 * p6) + (p10 << 3))] = l14;
	*(int *)((char *)g442a + ((432 * p6) + (p10 << 3))) = l44;
	g442e[((432 * p6) + (p10 << 3))] = (char)f6a65(l54, l52);
	f5d5b(p6, p12);
	f3118(p4);
	fb1e5(p4, p6);
	f31d1(p4);
	f2a63();
	if (p10 <= p12) goto L9bfe;
	p10--;
L9bfe:
	f030b(p4, 22, (p10 + 9));
	f24e9(p4, ((p10 << 4) + 21982), -5);
	f0396(p4, 37, 0);
	f030b(p4, 38, (p10 + 9));
	f23e3(p4, (unsigned char)(((unsigned char)g442d[((432 * p6) + (p10 << 3))] + 1)), 4);
	f0aaa(0);
	f09a3(g4fca);
}
