extern char g00cc[];
extern char g4585[];
extern char g4586[];
extern char g4587[];
extern char g56d0[];
extern char g572a[];
extern int g54b2;
extern int g54b4[];
extern int g56ee[];
extern int g57de[];
extern int g57e0[];
f9fcf(p4, p6, p8, p10)
char *p4;
{
	int l2;
	int l4;
	f88c7(p4, 0);
	f3118(p4);
	l2 = -2;
L9fee:
	if ((p8 + l2) < 0) goto La1e6;
	if ((p8 + l2) >= g54b2) goto La1e6;
	f030b(p4, 2, (l2 + 2));
	l4 = g54b4[(p8 + l2)];
	if (p10 != 1) goto La09f;
	if (l2) goto La09f;
	f24e9(p4, ((l4 << 4) + 21744), 3);
	if (g00cc[(unsigned char)g56d0[l4]] != 1) goto La08c;
	f0396(p4, 15, 3);
	f05a5(p4, g56ee[l4], 3, 1);
	goto La09d;
La08c:
	f0396(p4, 18, 3);
La09d:
	goto La0f9;
La09f:
	f251d(p4, ((l4 << 4) + 21744), 3);
	if (g00cc[(unsigned char)g56d0[l4]] != 1) goto La0f9;
	f030b(p4, 15, (l2 + 2));
	f05a5(p4, g56ee[l4], 3, 18);
La0f9:
	f030b(p4, 19, (l2 + 2));
	f23e3(p4, (unsigned char)(((unsigned char)g572a[l4] + 1)), 4);
	p4[6]++;
	if (!f28af(((l4 << 1) + 22344), (unsigned char)g4587[(432 * p6)])) goto La190;
	if (!f28af(((l4 << 1) + 22404), (unsigned char)g4585[(432 * p6)])) goto La190;
	if (f28af((l4 + 22464), (unsigned char)g4586[(432 * p6)])) goto La1a3;
La190:
	f083f(1567, p4, 18);
	goto La1bd;
La1a3:
	f083f(((unsigned char)g56d0[l4] + 1550), p4, 18);
La1bd:
	p4[6] = 32;
	f0507(p4, *(int *)((char *)g57de + (l4 << 2)), *(int *)((char *)g57e0 + (l4 << 2)), 7, 18);
La1e6:
	l2++;
	if (l2 <= 2) goto L9fee;
	f31d1(p4);
	f2b19(p4);
}
