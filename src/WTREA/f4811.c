extern char g3a92[];
extern char g3ac5[];
extern int g4fbc;
extern int g501e;
extern int g5020;
extern int g5022;
extern int g5024;
extern int g5026;
extern int g5028;
extern int g502a;
f4811()
{
	int l2;
	char l12[10];
	if (g5024) goto L482e;
	g5026 = ((g5026 + 1) % 3);
	goto L4843;
L482e:
	if (g5024 != 1) goto L4843;
	g5026 = ((g5026 + 1) % 2);
L4843:
	fb1f3();
	if (g501e != 1) goto L4896;
	l2 = (((g5024 * 3) + g5026) + 1);
	l12[0] = *(char *)&l2;
	l12[(0 + 1)] = 0;
	f3670(3, (unsigned char)g3a92[(l2 << 1)], (unsigned char)g3ac5[l2], 72, 248, 0, 0, l12);
L4896:
	if (g5020 < 0) goto L48a8;
	g5020 = f45de(g5020);
L48a8:
	if (g5022 < 0) goto L48c4;
	g5022 = f4695(g502a, g5028, g5022);
L48c4:
	f36a0(g4fbc);
	if (g5020 != 1) goto L48db;
	f0aaa(5);
L48db:
	;
}
