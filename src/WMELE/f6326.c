extern char g019b[];
extern char g019d[];
extern char g3648[];
extern char g3649[];
extern char g364a[];
extern char g3732[];
extern char g373c[];
extern char g3746[];
extern char g375a[];
extern char g375b[];
extern char g375c[];
extern char g3816[];
extern char g432c[];
extern int g43a8[];
f6326(p4, p6, p8)
char *p8;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	register int rsi;
	register int rdi;
	rsi = (unsigned char)g019b[g43a8[p4]];
	l10 = 0;
	l8 = 0;
	goto L6376;
L634d:
	if (((char *)g43a8[p4] + (44 * l8))[42] != p6) goto L6373;
	l10 = l8;
L6373:
	l8++;
L6376:
	if ((unsigned char)g019d[g43a8[p4]] > l8) goto L634d;
	l12 = 0;
	rdi = 0;
	goto L659a;
L6397:
	if (((char *)g43a8[p4] + (44 * l10))[34] == 2) goto L63c0;
	if ((unsigned)((char *)g43a8[p4] + (44 * l10))[17] > 0) goto L63c0;
	if ((unsigned)((char *)g43a8[p4] + (44 * l10))[16] <= 0) goto L6400;
L63c0:
	l2 = (unsigned char)g3648[((p6 * 30) + (rdi * 3))];
	l4 = (unsigned char)g3746[((314 * rsi) + l2)];
	goto L6554;
L6400:
	l4 = (unsigned char)g3649[((p6 * 30) + (rdi * 3))];
	l6 = (unsigned char)g364a[((p6 * 30) + (rdi * 3))];
	l6--;
#asm
	db 07eh,003h
#endasm
	goto L652e;
L6437:
	;
#asm
l6437:
	db 08ah,087h,048h,036h,02ah,0e4h,089h,046h,0feh
#endasm
	l4++;
#asm
	db 0b8h,03ah,001h,0f7h,0eeh,08bh,0c8h,08bh,046h,0feh,003h,0c8h,08bh,0d9h,08ah,087h
	db 046h,037h,02ah,0e4h,050h,08ah,087h,050h,037h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h
	db 048h,03bh,046h,0fch,07dh,065h
#endasm
	l2 = (f09e2((unsigned char)g373c[((314 * rsi) + rdi)]) + (unsigned char)g3732[((314 * rsi) + rdi)]);
	g3648[((p6 * 30) + (rdi * 3))] = *(char *)&l2;
	l4 = (unsigned char)g3746[((314 * rsi) + l2)];
L64ce:
	g3649[((p6 * 30) + (rdi * 3))] = *(char *)&l4;
	l6 = (f09e2((unsigned char)g375c[((314 * rsi) + (l4 << 2))]) + (unsigned char)g375b[((314 * rsi) + (l4 << 2))]);
L652e:
	g364a[((p6 * 30) + (rdi * 3))] = *(char *)&l6;
L6554:
	*(p8 + l12) = g375a[((314 * rsi) + (l4 << 2))];
	if (g432c[rsi] != 40) goto L6589;
	if (rdi != 4) goto L6589;
	*(p8 + l12) = 0;
L6589:
	if (!*(p8 + l12)) goto L6599;
	l12++;
L6599:
	rdi++;
L659a:
	if ((unsigned char)g3816[(314 * rsi)] > rdi) goto L6397;
	*(p8 + l12) = 0;
}
