extern char *g43b8;
extern int g3342;
extern int g4358;
extern int g500e;
extern int g5010;
extern int g50b4[];
f6e12()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	if (g500e != 1) goto L6e57;
	f075b(2025, 20500);
	f09fb(g3342, 1);
	f0b7e(g3342, 20500, 0, 18);
	g500e = 0;
L6e57:
	l8 = f09e2(4);
	l2 = 0;
L6e67:
	if (!f09e2(8)) goto L6e7b;
	if (l2 != l8) goto L6e8e;
L6e7b:
	if ((unsigned)g43b8[210] <= 0) goto L6e8e;
	f0aaa(14);
L6e8e:
	g4358 = -2;
	f6d4d();
	l4 = 0;
L6e9c:
	l6 = 0;
L6ea1:
	if ((l6 % 2) == 1) goto L6eb7;
#asm
	db 083h,07eh,0fah,000h,075h,01bh
#endasm
L6eb7:
	;
#asm
l6eb7:
	db 08bh,046h,004h,0d1h,0e0h,0d1h,0e0h,003h,046h,0feh,08bh,0d8h,08ah,087h,0c4h,000h
	db 02ah,0e4h,08bh,0c8h,0b8h,000h,000h,02bh,0c1h,0ebh,012h
l6ed2:
	db 08bh,046h,004h,0d1h,0e0h,0d1h,0e0h,003h,046h,0feh,08bh,0d8h,08ah,087h,0c4h,000h
	db 02ah,0e4h
l6ee4:
	db 089h,046h,0f6h
#endasm
	l10 = (*(int *)((char *)g50b4 + ((l4 * 10) + (l6 << 1))) == 1 ? l10 : 0);
	if (l4) goto L6f27;
	if (l6) goto L6f27;
	if (g5010 != 1) goto L6f27;
	l10 = 0;
L6f27:
	f66bf(l4, l6, l10);
	l6++;
	if (l6 < 5) goto L6ea1;
	l4++;
	if (l4 < 2) goto L6e9c;
	g4358 = 0;
L6f58:
	f6d4d();
	if (g4358 != -2) goto L6f58;
	l2++;
	if (l2 < 4) goto L6e67;
	l4 = 0;
L6f75:
	l6 = 0;
L6f7a:
	*(int *)((char *)g50b4 + ((l4 * 10) + (l6 << 1))) = 0;
	l6++;
	if (l6 < 5) goto L6f7a;
	l4++;
	if (l4 < 2) goto L6f75;
	g5010 = 0;
}
