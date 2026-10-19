#asm
	extrn f09e2_:near
	extrn f6d32_:near
#endasm
extern char g505c;
extern int g43a8[];
extern int g43b6;
extern int g4fb6;
extern int g4fc8;
extern int g500a;
f7ddc(p4, p6, p8, p10, p12, p14, p16)
{
	int l2;
	char x2[2];
	int l6;
	int l8;
	char x8[24];
	register int rsi;
	g500a = 4;
	rsi = (44 * p6);
	if ((unsigned)((char *)g43a8[p4] + rsi)[34] >= 3) goto L7e08;
	if (!((char *)g43a8[p4] + rsi)[43]) goto L7e10;
L7e08:
	return 0;
L7e10:
	l2 = 0;
	l6 = p12;
L7e1b:
	if (l6 <= 0) goto L7e45;
	l8 = p8;
L7e27:
	if (l8 <= 0) goto L7e40;
	l2 = ((f09e2(p10) + l2) + 1);
	l8--;
	goto L7e27;
L7e40:
	l6--;
	goto L7e1b;
L7e45:
	if (p4) goto L7e66;
	movmem(((432 * p6) + 17722), (g43b6 + 148), 14);
L7e66:
	;
#asm
l7e66:
	db 0b8h,064h,000h,050h
	call f09e2_
	db 059h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,00eh
	db 08ah,080h,094h,000h,02ah,0e4h,08bh,0c8h,02bh,046h,010h,08bh,0c8h,058h,03bh,0c1h
	db 07eh,015h
#endasm
	l2 = f7af7(p4, l2, rsi, p16);
	goto L7ea9;
L7ea4:
	l2 = 0;
L7ea9:
	f033f(g4fb6, 0, 2, 39, 4);
	f030b(g4fb6, 1, 2);
	f774b(1);
	f6ba3(20492, p4, p6);
	f6cc3(20492, (p4 == 0 ? 1 : 6), 2);
	if (l2 <= 0) goto L8010;
	f6d0b(3302, 4, 3);
	f774b(2);
	f04f1(l2, 20492);
	f075b(3309, 20652);
	f030b(g4fb6, 0, 4);
	g505c = 0;
#asm
	db 0b8h,000h,000h,050h,0b8h,005h,000h,050h,050h,0b8h,05ch,050h,050h,0b8h,0ach,050h
	db 050h,0b8h,00ch,050h,050h
	call f6d32_
	db 083h,0c4h,00ch,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh
	db 046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,029h,040h,002h
#endasm
	rsi = (44 * p6);
	if (*(int *)(((char *)g43a8[p4] + rsi) + 2) > 0) goto L7fe5;
	f774b((g4fc8 / 4));
	f7b59(p4, p6, 3486, 0, 3, 0, 6, 6, 3408, 0);
	goto L800e;
L7fe5:
	if (p4) goto L8000;
	f0aaa(2);
	f7353(p6, 1);
L8000:
	f774b((g4fc8 / 4));
L800e:
	goto L8022;
L8010:
	f6d0b(3310, 14, 3);
L8022:
	f774b((g4fc8 / 4));
	return l2;
}
