#asm
	extrn f8861_:near
#endasm
extern char g019d[];
extern int g43a8[];
extern int g43b6[];
extern int g4fb6;
extern int g4fc8;
f88b1(p4, p6, p8, p10, p12)
{
	int l2;
	int l4;
	int l6;
	char x6[2];
	int l10;
	int l12;
	int l14;
	int l16;
	register int rsi;
	l10 = (unsigned char)g019d[g43a8[p4]];
	l12 = (p6 < 0 ? -p6 : p6);
	if (l12 <= l10) goto L88e6;
	l12 = l10;
L88e6:
	l14 = f09e2((l10 - l12));
	l2 = l14;
	goto L8bc8;
L88fa:
	rsi = (44 * l2);
	if ((unsigned)((char *)g43a8[p4] + rsi)[34] >= 3) goto L8bc5;
	if (((char *)g43a8[p4] + rsi)[43]) goto L8bc5;
	f033f(g4fb6, 0, 2, 39, 4);
	f030b(g4fb6, 1, 2);
	f774b(1);
	f6ba3(20492, p4, l2);
	f6cc3(20492, (p4 == 0 ? 1 : 6), 2);
	l6 = f7af7(p4, p10, 3, p8);
	if (l6 <= 0) goto L8ba5;
	if (f09e2(100) <= ((unsigned char)(*(char **)((char *)g43b6 + (p4 << 1)))[151] - p8)) goto L8ba5;
	if (p12 != 1) goto L8a8c;
#asm
l89ce:
	db 0b8h,001h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,028h,098h,050h,08bh,046h,0fah,048h
	db 0b9h,002h,000h,099h,0f7h,0f9h,040h,050h
	call f8861_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,028h,0b8h,000h,000h,050h,0b8h
	db 02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,08ah,040h,027h,098h,050h,08bh,046h,0fah,048h,0b9h,002h,000h,099h,0f7h
	db 0f9h,040h,050h
	call f8861_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,027h
#endasm
	rsi = (44 * l2);
	l4 = (*(int *)((char *)g43a8[p4] + rsi) - l6);
	if (l4 >= 1) goto L8a7f;
	l4 = 1;
L8a7f:
	*(int *)((char *)g43a8[p4] + rsi) = l4;
	l16 = 3491;
	goto L8b71;
L8a8c:
	;
#asm
l8a8c:
	db 0b8h,001h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,029h,098h,050h,08bh,046h,0fah,08bh
	db 0d0h,0d1h,0e0h,003h,0c2h,050h
	call f8861_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,029h
#endasm
	l10 = 0;
L8ad5:
	;
#asm
l8ad5:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,003h,046h,0f6h,08bh,0f0h,08bh,046h,004h,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,018h,02ah,0e4h,0b9h,002h,000h,099h,0f7h
	db 0f9h,088h,040h,018h
#endasm
	l10++;
	if (l10 < 4) goto L8ad5;
	rsi = (44 * l2);
	if (((char *)g43a8[p4] + rsi)[41] >= 0) goto L8b6c;
#asm
	db 080h,078h,029h,000h,07dh,008h,08ah,040h,029h,098h,0f7h,0d8h,0ebh,004h
#endasm
L8b2b:
	;
#asm
l8b2b:
	db 08ah,040h,029h,098h
#endasm
L8b2f:
	;
#asm
l8b2f:
	db 0b9h,00ah,000h,099h,0f7h,0f9h,089h,046h,0f6h,03dh,003h,000h,07eh,005h
#endasm
	l10 = 3;
L8b42:
	if (l10 <= 0) goto L8b6c;
#asm
	db 0b8h,02ch,000h,0f7h,06eh,0feh,0b9h,004h,000h,02bh,04eh,0f6h,003h,0c1h,08bh,0f0h
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,018h,000h
#endasm
	l10--;
	goto L8b42;
L8b6c:
	l16 = 3494;
L8b71:
	f6d0b(l16, 5, 3);
	if (p4) goto L8b95;
	f7353(l2, 0);
L8b95:
	f774b((g4fc8 / 2));
	goto L8bc5;
L8ba5:
	f6d0b(3471, 14, 3);
	f774b((g4fc8 / 2));
L8bc5:
	l2++;
L8bc8:
	if ((l14 + l12) > l2) goto L88fa;
}
