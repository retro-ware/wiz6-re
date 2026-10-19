#asm
	extrn f09e2_:near
#endasm
extern char g00df[];
extern char g00e2[];
extern char g019d[];
extern int g4360;
extern int g43a8[];
extern int g43b6[];
f8480(p4, p6)
{
	int l2;
	int l4;
	char x4[2];
	char *l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	int l22;
	int l24;
	int l26;
	register int rsi;
	l2 = 0;
	goto L8a27;
L848f:
	;
#asm
l848f:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0c8h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 087h,0a8h,043h,003h,0c1h,089h,046h,0f8h,0b8h,00ah,000h,050h
	call f09e2_
	db 059h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,08ah,040h,029h,098h,08bh,0c8h,058h,003h,0c1h,050h,08bh
	db 046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0d3h,000h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h,089h,046h,0f6h,03dh,001h,000h,07dh,005h
#endasm
	l10 = 1;
L84f0:
	;
#asm
l84f0:
	db 08bh,046h,0f6h,050h,08ah,087h,0d5h,000h,02ah,0e4h,08bh,0c8h,058h,099h,0f7h,0f9h
	db 089h,046h,0f4h,08ah,087h,0dch,000h,02ah,0e4h,0a9h,002h,000h,074h,007h
#endasm
	l8[36] = 1;
L8515:
	if ((unsigned)l8[36] <= 0) goto L854f;
	l8[37] = (char)((f09e2((l10 / 2)) + f09e2(20)) + (l10 / 2));
L854f:
	l8[33] = 0;
	l8[28] = (char)f843b(p4);
	l22 = 0;
L8568:
	l8[29] = (char)f843b(p4);
	l22++;
	if (l8[29] != l8[28]) goto L858b;
	if (l22 < 3) goto L8568;
L858b:
	l14 = 0;
L8590:
	if ((unsigned char)(*(char **)((char *)g43b6 + (p4 << 1)))[213] <= l14) goto L85bb;
	if ((unsigned)l8[34] >= 2) goto L85bb;
	if ((unsigned)l8[17] > 0) goto L85bb;
	if ((unsigned)l8[16] <= 0) goto L85c7;
L85bb:
	;
#asm
l85bb:
	db 08bh,05eh,0f8h,08bh,076h,0f2h,0c6h,040h,018h,000h
#endasm
	goto L85d9;
L85c7:
	;
#asm
l85c7:
	db 08ah,046h,0f6h,08bh,05eh,0f8h,08bh,076h,0f2h,088h,040h,018h
#endasm
	l10 -= l12;
L85d9:
	l14++;
	if (l14 < 4) goto L8590;
	l24 = -1;
	l8[31] = *(char *)&p6;
L85f2:
	l8[32] = (char)f09e2((unsigned char)g019d[g43a8[p6]]);
	rsi = ((unsigned char)l8[32] * 44);
	if ((unsigned)((char *)g43a8[(unsigned char)l8[31]] + rsi)[34] >= 3) goto L85f2;
	if (f09e2(100) >= (unsigned char)(*(char **)((char *)g43b6 + (p4 << 1)))[168]) goto L878b;
	l24 = 3;
	l8[30] = 3;
	l18 = f09e2(100);
	l22 = 5;
	l16 = 0;
	l26 = -1;
L867a:
	if (l18 >= l22) goto L8699;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0f0h,08ah,080h
	db 08ah,000h,02ah,0e4h,089h,046h,0e6h
#endasm
L8699:
	l16++;
	if (l22 >= 15) goto L86a8;
	l22 += 5;
	goto L86b8;
L86a8:
	if (l22 >= 55) goto L86b4;
	l22 += 10;
	goto L86b8;
L86b4:
	l22 += 15;
L86b8:
	if (l26 == -1) goto L867a;
	if (g00e2[(l26 * 6)] != 1) goto L872d;
	if (p4 != 6) goto L8701;
	if (f83ab(l8, 0)) goto L86ff;
	if (f83ab(l8, 6)) goto L86ff;
	l24 = -1;
L86ff:
	goto L872d;
L8701:
	if (f83ab(l8, p4)) goto L872d;
	if (f83ab(l8, (f09e2(g4360) + 1))) goto L872d;
	l24 = -1;
L872d:
	l18 = ((*(int *)l8 - (unsigned char)g00df[(l26 * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0eeh,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L8764:
	;
#asm
l8764:
	db 089h,046h,0eeh
#endasm
L8767:
	if ((f09e2(*(int *)l8) + 1) >= l18) goto L877b;
	l18--;
	goto L8767;
L877b:
	*(int *)(l8 + 10) = ((l18 << 8) + l26);
L878b:
	if (l24 != -1) goto L87d5;
	if (f09e2(100) >= (unsigned char)(*(char **)((char *)g43b6 + (p4 << 1)))[170]) goto L87d5;
	l24 = 8;
	l8[30] = 8;
	*(int *)(l8 + 10) = (unsigned char)(*(char **)((char *)g43b6 + (p4 << 1)))[216];
L87d5:
	if (l24 != -1) goto L8958;
	l18 = 0;
	if ((unsigned)l8[34] >= 2) goto L886f;
	if (l8[17]) goto L886f;
#asm
l87f8:
	db 080h,07fh,010h,000h,074h,003h,0e9h,06eh,000h
#endasm
L8801:
	;
#asm
l8801:
	db 08ah,047h,01ch,02ah,0e4h,089h,046h,0ech
#endasm
	if (p4 != 6) goto L8816;
	l18 = 9;
	goto L886f;
L8816:
	if (p4 < 3) goto L8837;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,0ech,0b9h,004h
	db 000h,0d3h,0e0h,08bh,0f0h,080h,078h,051h,001h,076h,038h
#endasm
L8837:
	l18 = 3;
#asm
	db 0b8h,002h,000h,083h,07eh,004h,003h,07dh,003h,0b8h,000h,000h
#endasm
L8848:
	;
#asm
l8848:
	db 050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,0ech,0b9h
	db 004h,000h,0d3h,0e0h,08bh,0f0h,08ah,040h,051h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h
	db 07dh,005h
#endasm
	l18 = 6;
L886f:
	if ((unsigned char)g019d[g43a8[p6]] >= l18) goto L8888;
	l18 = (unsigned char)g019d[g43a8[p6]];
L8888:
	l16 = 0;
	l22 = 0;
	goto L88b3;
L8894:
	rsi = (44 * l22);
	if ((unsigned)((char *)g43a8[p6] + rsi)[34] >= 3) goto L88b0;
	l16++;
L88b0:
	l22++;
L88b3:
	if (l22 < l18) goto L8894;
	if (l16 <= 0) goto L8951;
	l8[30] = 0;
	l8[31] = *(char *)&p6;
	l8[32] = (char)f09e2(l16);
	l20 = (unsigned char)l8[28];
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,002h,075h,00ah
#endasm
	*(int *)(l8 + 10) = 4;
	goto L894f;
L890b:
	;
#asm
l890b:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,003h,075h,00ah
#endasm
	*(int *)(l8 + 10) = 8;
	goto L894f;
L892a:
	*(int *)(l8 + 10) = f7696(((g43b6[p4] + (l20 << 4)) + 83));
L894f:
	goto L8958;
L8951:
	l8[24] = 0;
L8958:
	*(int *)(l8 + 12) = -1;
	if (l8[30]) goto L8a0a;
	l20 = (unsigned char)l8[29];
	if (p4 < 3) goto L8995;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,0ech,0b9h,004h
	db 000h,0d3h,0e0h,08bh,0f0h,080h,078h,051h,001h,076h,065h
#endasm
L8995:
	;
#asm
l8995:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,002h,075h,00ah
#endasm
	*(int *)(l8 + 12) = 4;
	goto L89f8;
L89b4:
	;
#asm
l89b4:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,003h,075h,00ah
#endasm
	*(int *)(l8 + 12) = 8;
	goto L89f8;
L89d3:
	*(int *)(l8 + 12) = f7696(((g43b6[p4] + (l20 << 4)) + 83));
L89f8:
	goto L8a08;
L89fa:
	l8[25] = 0;
	l8[27] = 0;
L8a08:
	goto L8a24;
L8a0a:
	l4 = 1;
L8a0f:
	;
#asm
l8a0f:
	db 08bh,05eh,0f8h,08bh,076h,0fch,0c6h,040h,018h,000h
#endasm
	l4++;
	if (l4 < 4) goto L8a0f;
L8a24:
	l2++;
L8a27:
	if ((unsigned char)g019d[g43a8[p4]] > l2) goto L848f;
}
