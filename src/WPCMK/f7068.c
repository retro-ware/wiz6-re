extern char *g546e;
extern char g559c[];
extern int g5488;
extern int g548a;
extern int g548c;
extern int g548e;
extern int g56ac;
f7068()
{
	register int rsi;
	rsi = 0;
L706c:
	f5022((rsi + 204), g546e, 1, (rsi + 5), 5);
	g546e[6]++;
	f05a5(g546e, (unsigned char)g559c[rsi], 2, 1);
	rsi++;
	if (rsi < 8) goto L706c;
	if (g56ac < 0) goto L70f8;
	f030b(g546e, 10, 11);
	f083f(1107, g546e, -7);
	g546e[6]++;
	f05a5(g546e, g56ac, 2, 7);
L70f8:
	f5022(212, g546e, 10, 5, 4);
	g546e[6]++;
	f05a5(g546e, g5488, 4, 6);
	f22b7(g546e, 47, 8);
	f030b(g546e, 14, 6);
	f05a5(g546e, g548a, 4, 6);
	f5022(213, g546e, 10, 8, 4);
	g546e[6]++;
#asm
	db 0feh,047h,006h
#endasm
	f05a5(g546e, g548c, 3, 6);
	f22b7(g546e, 47, 8);
	f030b(g546e, 15, 9);
	f05a5(g546e, g548e, 3, 6);
}
