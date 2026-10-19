extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g501c;
extern char g501d;
extern char g5034;
extern char g5035;
extern int g0004[];
extern int g440c[];
extern int g4410[];
extern int g4fc4;
extern int g5010;
extern int g5012;
extern int g5014;
extern int g5016;
extern int g5018;
extern int g501a;
f644a(p4, p6)
{
	char *l2;
	char *l4;
	int l6;
	char x6[2];
	int l10;
	int l50[20];
	int l52;
	int l54;
	int l56;
	int l58;
	int l60;
	char x60[2];
	int l64;
	int l66;
	int l68;
	int l70;
	int l72;
	int l74;
	int l76;
	register int rsi;
	l2 = f011a(0, 18, 23, 7, 25, -1, 0, 0);
	l4 = f011a(22, 19, 18, 6, 26, -5, 0, 0);
	f61a0(l2, p6);
	f6029(l4, 1);
	l64 = 0;
	l6 = 0;
L64c0:
	l74 = (((l6 / 3) * 6) + 1);
	l76 = (((l6 % 3) << 1) + 1);
	f0c16(l6, ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76), ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76));
	l6++;
	if (l6 < 6) goto L64c0;
	f0c16(6, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
L6545:
	f0c16(7, 255, 0, 0, 0);
	l72 = 1;
	g5014 = l2;
L6564:
	if (l72 != 1) goto L66c6;
	g5016 = 1;
	if (l64 != -1) goto L65ee;
	g5012 = 13;
	g5010 = 3;
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f(3956, l2, 9);
	f033f(l2, 18, 5, 20, 5);
	l10 = -1;
	f6029(l4, 1);
	goto L669d;
L65ee:
	g5012 = (((l64 / 3) * 6) + 1);
	g5010 = (((l64 % 3) << 1) + 1);
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f((l64 + 3950), l2, g0004[l64]);
	f033f(l2, 18, 5, 20, 5);
	l10 = f632f(p6, l64, l50);
	f638a(l4, p6, l64, 0, 0, l10, l50);
L669d:
	g5034 = 99;
	g5035 = 0;
	g501a = 5;
	g501c = (char)(l64 + 35);
	g501d = 0;
	g5018 = 17;
	l72 = 0;
L66c6:
	l6 = f51d9(17270, 13720);
	if (g4fc4 != 1) goto L6720;
	if (l6 != l64) goto L66ea;
	l6 = 5;
	goto L6718;
L66ea:
	f5fd6(l2, l64);
	if (l6 >= 6) goto L6709;
	l64 = l6;
	l6 = 0;
	goto L6718;
L6709:
	l64 = -1;
	l6 = 5;
	l10 = -1;
L6718:
	l72 = 1;
	goto L6806;
L6720:
	switch (l6) {
case 1:
	if (l64 != -1) goto L6744;
	f5fd6(l2, l64);
	l64 = 4;
	l72 = 1;
	goto L6761;
L6744:
	if ((l64 - 3) < 0) goto L6761;
	f5fd6(l2, l64);
	l64 += -3;
	l72 = 1;
L6761:
	goto L6806;
case 2:
	if (l64 == -1) goto L678e;
	if ((l64 % 3) <= 0) goto L678e;
	f5fd6(l2, l64);
	l64--;
	l72 = 1;
L678e:
	goto L6806;
case 3:
	if (l64 == -1) goto L67bd;
	f5fd6(l2, l64);
	l72 = 1;
	if ((l64 + 3) >= 6) goto L67b8;
	l64 = (l64 + 3);
	goto L67bd;
L67b8:
	l64 = -1;
L67bd:
	goto L6806;
case 4:
	if (l64 == -1) goto L67ea;
	if (((l64 % 3) + 1) >= 3) goto L67ea;
	f5fd6(l2, l64);
	l64++;
	l72 = 1;
L67ea:
	goto L6806;
	}
L6806:
	if (l6 != 5) goto L6564;
	if (!l10) goto L6564;
	if (l64 != -1) goto L6846;
	g5016 = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	return -1;
L6846:
	f5fd6(l2, l64);
	l58 = 0;
	l60 = 0;
	g5014 = l4;
	g5012 = 2;
	g5010 = 2;
	strcpy(20508, 20462);
	g5018 = 0;
	f0c16(7, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	f0c16(8, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	f0c16(9, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	f0c16(10, 255, 0, 0, 0);
L6918:
	g5016 = 1;
	f075b((l50[l58] + 4000), 20532);
	g501a = g0004[l64];
	f638a(l4, p6, l64, l58, 1, l10, l50);
	l66 = (unsigned char)g00e0[(l50[l58] * 6)];
	f030b(l2, 18, 5);
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) >= l66) goto L69c7;
	f24e9(l2, 20478, g0004[l64]);
	goto L69e2;
L69c7:
	f05a5(l2, l66, 3, g0004[l64]);
L69e2:
	l6 = f51d9(17270, 13720);
	if (g4fc4 != 1) goto L6a65;
#asm
	db 0ebh,05ch
#endasm
	l64 = l6;
	l6 = 1;
	goto L6a65;
	g5016 = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	return -1;
	l6 = 2;
#asm
	db 0ebh,02fh
#endasm
	l6 = 4;
#asm
	db 0ebh,028h
#endasm
	l6 = 5;
#asm
	db 0ebh,021h,0fch,069h,0fch,069h,0fch,069h,0fch,069h,0fch,069h,0fch,069h,009h,06ah
	db 02fh,06ah,036h,06ah,03dh,06ah
l6a58:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,044h,06ah
#endasm
L6a65:
	switch (l6) {
case 1:
	l60 = 1;
	goto L6a99;
case 2:
	if (l58 <= 0) goto L6a7a;
	l58--;
L6a7a:
	goto L6a99;
case 4:
	if ((l58 + 1) >= l10) goto L6a88;
	l58++;
L6a88:
	goto L6a99;
	}
L6a99:
	if (l6 == 5) goto L6aa8;
	if (l60 != 1) goto L6918;
L6aa8:
	if (l60 == 1) goto L6545;
	l52 = l50[l58];
	f6029(l4, 0);
	f3118(l4);
	f030b(l4, 2, 2);
	f083f((l52 + 4000), l4, 18);
	f31d1(l4);
	f2b19(l4);
	g5014 = l2;
	l54 = 1;
	l56 = ((*(int *)((char *)g440c + (432 * p6)) - (unsigned char)g00df[(l52 * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0c8h,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L6b4f:
	;
#asm
l6b4f:
	db 089h,046h,0c8h
#endasm
	l6 = 0;
	goto L6b92;
L6b59:
	f0c16(l6, (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3), (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3));
	l6++;
L6b92:
	if (l6 < l56) goto L6b59;
	f0c16(l56, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
	f0c16((l56 + 1), 255, 0, 0, 0);
	l72 = 1;
L6be4:
	l66 = ((unsigned char)g00e0[(l52 * 6)] * l54);
	if (l72 != 1) goto L6d30;
	l72 = 0;
	g5016 = 1;
	if (l54) goto L6c9d;
	g5012 = 13;
	g5010 = 3;
	g5034 = 99;
	g5035 = 0;
	g501a = 5;
	g501c = 34;
	g501d = 0;
	g5018 = 17;
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f(3956, l2, 9);
	f033f(l2, 18, 5, 20, 5);
	goto L6d30;
L6c9d:
	g5012 = (l54 + 14);
	g5010 = 3;
	g5034 = (char)(l54 + 23);
	g5035 = 0;
	g501a = 7;
	g501c = 32;
	g501d = 0;
	g5018 = 0;
	f030b(l2, 18, 5);
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) >= l66) goto L6d15;
	f24e9(l2, 20482, g0004[l64]);
	goto L6d30;
L6d15:
	f05a5(l2, l66, 3, g0004[l64]);
L6d30:
	l6 = f51d9(17270, 13720);
	if (g4fc4 != 1) goto L6da7;
	if ((l6 + 1) != l54) goto L6d55;
	l6 = 5;
	goto L6d9f;
L6d55:
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54 = (l6 < l56 ? (l6 + 1) : 0);
	l6 = (l54 == 0 ? 5 : 0);
L6d9f:
	l72 = 1;
	goto L6e98;
L6da7:
	switch (l6) {
case 1:
	if (l54 <= 0) goto L6de5;
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54--;
	l72 = 1;
L6de5:
	goto L6e98;
case 3:
	if (l54) goto L6e4c;
	f5fd6(l2, -1);
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f((l64 + 3950), l2, g0004[l64]);
	l54 = 1;
	l72 = 1;
	goto L6e86;
L6e4c:
	if (l54 >= l56) goto L6e86;
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54++;
	l72 = 1;
L6e86:
	goto L6e98;
	}
L6e98:
	if (l6 != 5) goto L6be4;
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) < l66) goto L6be4;
	g5016 = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	if (l54) goto L6eea;
	return -1;
L6eea:
	if (g00e2[(l52 * 6)] != 1) goto L6f52;
	f32be(p4, 32, 3, 0);
	f2a63();
	rsi = (44 * p6);
#asm
	db 08bh,01eh,0a8h,043h,0c6h,040h,01fh,000h
#endasm
	l70 = f5a33(3609);
	if (l70 != -1) goto L6f3c;
	return -1;
L6f3c:
	;
#asm
l6f3c:
	db 08ah,046h,0bah,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,088h,040h,020h
#endasm
	goto L6f9d;
L6f52:
	if (g00e2[(l52 * 6)] != 2) goto L6f9d;
	l68 = f55cd(p4, 3603, 3, 0);
	if (l68 != -1) goto L6f89;
	return -1;
L6f89:
	;
#asm
l6f89:
	db 08ah,046h,0bch,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,088h,040h,01fh
#endasm
L6f9d:
	return ((l54 << 8) + l52);
}
