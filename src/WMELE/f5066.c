extern char g00ba[];
extern char g019d[];
extern char g433e[];
extern char g4348[];
extern int g4362[];
extern int g43a8[];
f5066(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	register int rsi;
	l2 = 0;
	goto L51c7;
L5075:
	rsi = (44 * l2);
	l4 = ((char *)g43a8[p4] + rsi)[42];
	if (l4 == -1) goto L51c4;
	l6 = (l4 / 10);
	l8 = (l4 % 10);
	*(int *)((char *)g4362 + ((l6 * 10) + (l8 << 1))) = 0;
	g4348[((l6 * 5) + l8)] = 0;
	g433e[((l6 * 5) + l8)] = 0;
	((char *)g43a8[p4] + rsi)[42] = 255;
	l10 = (g00ba[((l6 * 5) + l8)] / 10);
	l12 = (g00ba[((l6 * 5) + l8)] % 10);
	if (l6 != 1) goto L514f;
	if (l8) goto L514f;
	l10 = 1;
	l12 = (f09e2(2) + 1);
	if (!*(int *)((char *)g4362 + ((l10 * 10) + (l12 << 1)))) goto L514f;
	l12 = ((l12 % 2) + 1);
L514f:
	;
#asm
l514f:
	db 08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,003h,046h,0f8h,08bh,0d8h
	db 080h,0bfh,0bah,000h,0ffh,074h,05eh
#endasm
	if (*(int *)((char *)g4362 + ((l10 * 10) + (l12 << 1)))) goto L51c4;
	*(int *)((char *)g4362 + ((l10 * 10) + (l12 << 1))) = p4;
#asm
	db 08bh,046h,0f6h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,003h,046h,0f4h
	db 050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,058h,088h,040h,02ah
#endasm
	if (l10) goto L51c4;
	f4f02(p4, l12);
L51c4:
	l2++;
L51c7:
	if ((unsigned char)g019d[g43a8[p4]] > l2) goto L5075;
	f6e01();
	f45a6(4);
}
