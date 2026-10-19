#asm
	extrn f24e9_:near
#endasm
extern char g019d[];
extern char g019e[];
extern int g3342;
extern int g4360;
extern int g43a8[];
f4623(p4, p6)
char *p4;
{
	int l2;
	int l4;
	register int rsi;
	f4580();
	f3118(p4);
	f02f0(p4, 1);
	l2 = 1;
	goto L4762;
L4649:
	g019e[g43a8[l2]] = 0;
	l4 = 0;
	goto L468c;
L4660:
	rsi = (44 * l4);
	if ((unsigned)((char *)g43a8[l2] + rsi)[34] >= 2) goto L4689;
	if (((char *)g43a8[l2] + rsi)[17]) goto L4689;
	if (((char *)g43a8[l2] + rsi)[16]) goto L4689;
#asm
	db 0feh,087h,09eh,001h
#endasm
L4689:
	l4++;
L468c:
	if ((unsigned char)g019d[g43a8[l2]] > l4) goto L4660;
	f030b(p4, 0, (l2 - 1));
	f22b7(p4, (unsigned char)(((unsigned char)g019d[g43a8[l2]] + 48)), 6);
	p4[6]++;
#asm
	db 0b8h,00eh,000h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h
	db 0bfh,09dh,001h,001h,075h,005h,0b8h,000h,000h,0ebh,003h
#endasm
L46f9:
	;
#asm
l46f9:
	db 0b8h,001h,000h
#endasm
L46fc:
	;
#asm
l46fc:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,051h,08ah,087h,09ch,001h,02ah,0e4h,0b9h,005h
	db 000h,0d3h,0e0h,059h,003h,0c8h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h
	db 043h,003h,0c1h,050h,0ffh,076h,004h
	call f24e9_
	db 083h,0c4h,006h
#endasm
	f030b(p4, 19, (l2 - 1));
	f22b7(p4, (unsigned char)(((unsigned char)g019e[g43a8[l2]] + 48)), 9);
	l2++;
L4762:
	if (l2 <= g4360) goto L4649;
	f31d1(p4);
	if (p6 != 1) goto L478a;
	f2b19(g3342);
	f2b19(p4);
L478a:
	;
}
