extern char g442e[];
extern char g558e[];
extern char g558f;
extern int g0004[];
extern int g4428[];
fb6c4(p4, p6, p8, p10)
{
	int l2;
	int l4;
	char *l6;
	int l8;
	char l9;
	char l10;
	char x10[1];
	char l12;
	char l13;
	char l14;
	char l22[8];
	int l24;
	int l26;
	char l34[8];
	char x34[1];
	char l36;
	char l37;
	char l38;
	char l39;
	char l40;
	char l41;
	char l42;
	char l43;
	char l44;
	char l45;
	char l46;
	char l47;
	char x47[1];
	int l50;
	int l52;
	char l53;
	char l54;
	int l56;
	char x56[22];
	int l80;
	int l122[21];
	char x122[2];
	int l126;
	char x126[38];
	int l166;
	int l168;
	int l170;
	f0882(1, &l80, *(int *)((char *)g4428 + ((432 * p6) + (p8 << 3))), 0);
	l6 = f011a(20, 8, 20, 12, 25, -1, 0, 0);
	f32be(l6, 0, 1, 0);
	fb139(l6, 0, 0, 21);
	fb139(l6, 19, 0, 8);
	fb139(l6, 0, 11, 11);
	fb139(l6, 19, 11, 8);
	l2 = 1;
Lb782:
	fb139(l6, l2, 0, 7);
	fb139(l6, l2, 2, 18);
	fb139(l6, l2, 11, 7);
	l2++;
	if (l2 < 19) goto Lb782;
	l2 = 2;
Lb7ce:
	fb139(l6, 0, l2, 13);
	fb139(l6, 19, l2, 5);
	l2++;
	if (l2 < 11) goto Lb7ce;
	fb139(l6, 0, 2, 36);
	fb139(l6, 19, 2, 19);
	fb139(l6, 0, 5, 15);
	fb139(l6, 0, 7, 15);
	fb139(l6, 0, 9, 15);
	fb139(l6, 0, 1, 5);
	f3118(l6);
	f030b(l6, 1, 1);
	l2 = 1;
Lb899:
	f23e3(l6, 32, 3);
	l2++;
	if (l2 < 20) goto Lb899;
	fb1bc(l6, 1, 1, ((unsigned char)l22[3] + 1));
	fb1bc(l6, 18, 1, ((unsigned char)l22[3] + 1));
	f030b(l6, (10 - ((strlen(&l80) + 1) / 2)), 1);
	f251d(l6, &l80, 3);
	l122[19] = 0;
	l122[18] = 0;
	l122[17] = 0;
	l122[16] = 0;
	l122[15] = 0;
	l122[14] = 0;
	l122[13] = 0;
	l122[12] = 0;
	l122[11] = 0;
	l122[8] = 0;
	l122[6] = 0;
	l122[7] = 0;
	l122[10] = 1;
	l122[9] = 7;
	switch ((unsigned char)l22[2]) {
case 0:
case 1:
case 2:
case 3:
	l122[19] = 1;
	l122[16] = 1;
	l122[14] = 1;
	l122[13] = 1;
	l122[8] = 1;
	l122[6] = 1;
	l122[7] = 1;
	goto Lba42;
case 4:
	l122[18] = 1;
	l122[8] = 1;
	l122[6] = 1;
	goto Lba42;
case 5:
	l122[17] = 1;
	l122[9] = 3;
	l122[12] = 1;
	l122[7] = 1;
	goto Lba42;
case 6:
case 7:
case 8:
case 9:
case 10:
	l122[17] = 1;
	l122[15] = 1;
	l122[12] = 1;
	l122[7] = 1;
	goto Lba42;
case 11:
	l122[17] = 1;
	l122[12] = 1;
	l122[7] = 1;
	goto Lba42;
case 12:
case 16:
	l122[10] = 0;
	l122[19] = 1;
	l122[11] = 1;
	l122[13] = 1;
	goto Lba42;
case 13:
	l122[10] = 0;
	l122[18] = 1;
	l122[11] = 1;
	goto Lba42;
case 14:
case 15:
	l122[18] = 1;
	l122[13] = 1;
	l122[7] = 1;
	goto Lba42;
	}
Lba42:
	if (p10) goto Lc029;
	f075b(((unsigned char)l22[2] + 1550), 21902);
	f030b(l6, (10 - ((strlen(21902) + 1) / 2)), 3);
	f24e9(l6, 21902, 1);
	if (!l122[10]) goto Lbbaa;
	f030b(l6, 3, 4);
	f075b(454, 21902);
	l2 = 0;
Lbac0:
	f22b7(l6, (unsigned char)g558e[l2], (f28af(&l24, l2) == 1 ? 6 : 11));
	l2++;
	if (l2 < 11) goto Lbac0;
	l6[6]++;
	f075b(455, 21902);
	l2 = 0;
Lbb12:
	f22b7(l6, (unsigned char)g558e[l2], (f28af(l22, l2) == 1 ? 6 : 11));
	l2++;
	if (l2 < 2) goto Lbb12;
	f030b(l6, 3, 5);
	f075b(456, 21902);
	l2 = 0;
Lbb6f:
	f22b7(l6, (unsigned char)g558e[l2], (f28af(&l26, l2) == 1 ? 6 : 11));
	l2++;
	if (l2 < 14) goto Lbb6f;
	goto Lbc08;
Lbbaa:
	if (!l122[11]) goto Lbc08;
	if (!l52) goto Lbc08;
	l126 = (l52 % 256);
	f075b((l126 + 4000), 21902);
	f030b(l6, (10 - ((strlen(21902) + 1) / 2)), 5);
	f24e9(l6, 21902, 4);
Lbc08:
	if (!l122[14]) goto Lbdc3;
#asm
lbc11:
	db 08ah,046h,0edh,02ah,0e4h,0e9h,0dah,000h,0c7h,046h,084h,000h,000h,0e9h,0e9h,000h
	db 0c7h,046h,084h,001h,000h,0e9h,0e1h,000h,0c7h,046h,084h,002h,000h,0e9h,0d9h,000h
	db 0c7h,046h,084h,003h,000h,0e9h,0d1h,000h,0c7h,046h,084h,004h,000h,0e9h,0c9h,000h
	db 0c7h,046h,084h,007h,000h,0e9h,0c1h,000h,0c7h,046h,084h,006h,000h,0e9h,0b9h,000h
	db 0c7h,046h,084h,008h,000h,0e9h,0b1h,000h,0c7h,046h,084h,005h,000h,0e9h,0a9h,000h
	db 000h,000h,001h,000h,002h,000h,003h,000h,004h,000h,005h,000h,006h,000h,007h,000h
	db 008h,000h,009h,000h,00ah,000h,00bh,000h,00ch,000h,00dh,000h,00eh,000h,00fh,000h
	db 010h,000h,011h,000h,012h,000h,013h,000h,014h,000h,015h,000h,018h,000h,026h,000h
	db 033h,000h,034h,000h,035h,000h,036h,000h,037h,000h,038h,000h,039h,000h,03ah,000h
	db 03bh,000h,059h,000h,05ah,000h,062h,000h,019h,0bch,021h,0bch,029h,0bch,029h,0bch
	db 031h,0bch,031h,0bch,031h,0bch,039h,0bch,039h,0bch,039h,0bch,039h,0bch,041h,0bch
	db 041h,0bch,049h,0bch,021h,0bch,021h,0bch,021h,0bch,039h,0bch,019h,0bch,039h,0bch
	db 059h,0bch,059h,0bch,051h,0bch,051h,0bch,021h,0bch,031h,0bch,021h,0bch,031h,0bch
	db 021h,0bch,031h,0bch,039h,0bch,021h,0bch,021h,0bch,019h,0bch,039h,0bch,031h,0bch
	db 00ah,0bdh
#endasm
Lbcf3:
	;
#asm
lbcf3:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,061h,0bch,0b9h,025h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,046h,05fh,007h,0ffh,0e1h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah
	db 087h,085h,045h,02ah,0e4h,050h,08dh,046h,0e8h,050h,0e8h,08fh,06bh,083h,0c4h,004h
	db 03dh,001h,000h,075h,03ch,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,087h
	db 045h,02ah,0e4h,050h,08dh,046h,0e6h,050h,0e8h,071h,06bh,083h,0c4h,004h,03dh,001h
	db 000h,075h,01eh,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,08ah,087h,086h,045h,02ah
	db 0e4h,050h,08dh,046h,0eah,050h,0e8h,053h,06bh,083h,0c4h,004h,03dh,001h,000h,074h
	db 015h,0b8h,08eh,055h,050h,0b8h,01fh,006h,050h,0e8h,0ech,049h,083h,0c4h,004h,0c7h
	db 046h,0feh,009h,000h,0ebh,016h,0b8h,08eh,055h,050h,08bh,046h,084h,005h,07ch,015h
	db 050h,0e8h,0d4h,049h,083h,0c4h,004h,0c7h,046h,0feh,002h,000h,0b8h,006h,000h,050h
	db 0b8h,08eh,055h,050h,0e8h,075h,082h,059h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh
	db 0c8h,0b8h,00ah,000h,02bh,0c1h,050h,0ffh,076h,0fah,0e8h,05bh,045h,083h,0c4h,006h
	db 0ffh,076h,0feh,0b8h,08eh,055h,050h,0ffh,076h,0fah,0e8h,029h,067h,083h,0c4h,006h
#endasm
Lbdc3:
	if (!l122[13]) goto Lbe78;
	if (l22[2] != 3) goto Lbe04;
	f075b(3058, 21902);
	f030b(l6, 3, 7);
	f24e9(l6, 21902, 5);
	goto Lbe78;
Lbe04:
	l4 = 0;
	l2 = 0;
Lbe0e:
	if (f28af(&l8, l2) != 1) goto Lbe6d;
	f030b(l6, (((l4 / 3) << 3) + 3), ((l4 % 3) + 7));
	f075b((l2 + 3050), 21902);
	f24e9(l6, 21902, 5);
	l4++;
Lbe6d:
	l2++;
	if (l2 < 8) goto Lbe0e;
Lbe78:
	f030b(l6, 1, 10);
	if (l122[19]) goto Lbe95;
	if (!l122[18]) goto Lbef4;
Lbe95:
	f075b(451, 21902);
	f22b7(l6, (unsigned char)g558e[0], (l122[19] != 0 ? 6 : 14));
	f22b7(l6, 47, 14);
	f22b7(l6, (unsigned char)g558f, (((unsigned char)l22[(0 + 1)] & 8) ? 6 : 14));
	goto Lbf4a;
Lbef4:
	if (!l122[17]) goto Lbf4a;
	f075b(452, 21902);
	f24e9(l6, 21902, (l122[9] + 8));
	l6[6]++;
	f04f1((0 - l10), 21902);
	f24e9(l6, 21902, l122[9]);
Lbf4a:
	if (!l122[16]) goto Lbf91;
	f075b((((unsigned char)l22[(0 + 1)] & 4) ? 458 : 457), 21902);
	f030b(l6, 8, 10);
	f24e9(l6, 21902, 4);
	goto Lbfcc;
Lbf91:
	if (!l122[15]) goto Lbfcc;
	f075b(((unsigned char)l22[2] + 454), 21902);
	f030b(l6, 8, 10);
	f24e9(l6, 21902, 4);
Lbfcc:
	f030b(l6, 14, 10);
	f05a5(l6, (l50 / 10), 3, 9);
	f22b7(l6, 46, 9);
	f05a5(l6, (l50 % 10), 1, 9);
	goto Lc661;
Lc029:
	if ((p10 * 3) <= (unsigned char)l22[4]) goto Lc61e;
	l168 = 3;
	if (!l122[8]) goto Lc1d5;
	f030b(l6, 1, 3);
	f075b(466, 21902);
	f24e9(l6, 21902, 14);
	f04f1((unsigned char)l54, 21902);
	f04f1((unsigned char)l53, 22416);
	f04f1(l56, &l166);
	f030b(l6, (19 - (((strlen(21902) + strlen(22416)) + strlen(&l166)) + 2)), 3);
	f24e9(l6, 21902, 5);
	f075b(478, 21902);
	f24e9(l6, 21902, 5);
	f24e9(l6, 22416, 5);
	f22b7(l6, 43, 5);
	f24e9(l6, &l166, 5);
	if (!l9) goto Lc1cf;
	f030b(l6, 1, 4);
	f075b(467, 21902);
	f24e9(l6, 21902, 14);
	f030b(l6, 7, 4);
	f04f1(l9, 21902);
	if (l9 < 0) goto Lc1be;
	f22b7(l6, 43, 5);
Lc1be:
	f24e9(l6, 21902, 5);
Lc1cf:
	l168 = 5;
Lc1d5:
	if (!l122[7]) goto Lc296;
	if (!((unsigned char)l14 - (unsigned char)l13)) goto Lc296;
	l168 = (l122[8] != 0 ? 4 : 3);
	f030b(l6, 11, l168);
	f075b(468, 21902);
	f24e9(l6, 21902, 14);
	f030b(l6, 17, l168);
	f04f1(((unsigned char)l14 - (unsigned char)l13), 21902);
	if (((unsigned char)l14 - (unsigned char)l13) < 0) goto Lc27f;
	f22b7(l6, 43, 5);
Lc27f:
	f24e9(l6, 21902, 5);
	l168 = 5;
Lc296:
	if (!l22[5]) goto Lc2f4;
	f030b(l6, 1, l168);
	f075b(465, 21902);
	f24e9(l6, 21902, 3);
	f030b(l6, 15, l168);
	fb659(l6, (unsigned char)l22[5], 1);
	l168++;
Lc2f4:
	if (!l52) goto Lc3b7;
	l126 = (l52 % 256);
	f075b((l126 + 4000), 21902);
	f030b(l6, 1, l168);
	f24e9(l6, 21902, 4);
	f030b(l6, 16, l168);
	if (g442e[((432 * p6) + (p8 << 3))]) goto Lc388;
	f075b(480, 21902);
	f24e9(l6, 21902, 1);
	goto Lc3b3;
Lc388:
	f05a5(l6, (unsigned char)g442e[((432 * p6) + (p8 << 3))], 3, 1);
Lc3b3:
	l168++;
Lc3b7:
	if (l168 <= 3) goto Lc3c9;
	if (l168 >= 8) goto Lc3c9;
	l168++;
Lc3c9:
	if (!l12) goto Lc427;
	f075b(469, 21902);
	f030b(l6, 1, l168);
	f24e9(l6, 21902, 7);
	f030b(l6, 15, l168);
	fb659(l6, (unsigned char)l12, 1);
	l168++;
Lc427:
	if (!l122[6]) goto Lc49e;
	l4 = 0;
	l2 = 0;
Lc437:
	if ((unsigned)l34[l2] <= 0) goto Lc490;
	f030b(l6, (((l4 / 3) << 3) + 3), ((l4 % 3) + l168));
	f075b((l2 + 470), 21902);
	f24e9(l6, 21902, 5);
	l4++;
Lc490:
	l2++;
	if (l2 < 8) goto Lc437;
	goto Lc61c;
Lc49e:
	if (!l122[12]) goto Lc61c;
	l122[0] = (((unsigned char)l47 + (unsigned char)l46) / 2);
	l122[1] = (((unsigned char)l45 + (unsigned char)l44) / 2);
	l122[2] = (((unsigned char)l43 + (unsigned char)l42) / 2);
	l122[3] = (((unsigned char)l41 + (unsigned char)l40) / 2);
	l122[4] = (((unsigned char)l39 + (unsigned char)l38) / 2);
	l122[5] = (((unsigned char)l37 + (unsigned char)l36) / 2);
	l2 = 0;
Lc542:
	l122[l2] = (l122[l2] > 99 ? 99 : l122[l2]);
	f030b(l6, (((l2 / 3) * 9) + 1), ((l2 % 3) + l168));
	f075b((l2 + 3950), 21902);
	f24e9(l6, 21902, g0004[l2]);
	f030b(l6, (((l2 / 3) * 9) + 7), ((l2 % 3) + l168));
	f05a5(l6, l122[l2], 2, 1);
	f22b7(l6, 37, g0004[l2]);
	l2++;
	if (l2 < 6) goto Lc542;
Lc61c:
	goto Lc661;
Lc61e:
	f075b(482, 21902);
	f030b(l6, (10 - ((strlen(21902) + 1) / 2)), 4);
	f24e9(l6, 21902, 1);
Lc661:
	f31d1(l6);
	f32be(p4, 32, 3, 0);
	f3118(p4);
	f075b(609, 21902);
	f030b(p4, (20 - ((strlen(21902) + 1) / 2)), 1);
	f251d(p4, 21902, 3);
	f31d1(p4);
	f2b19(l6);
	f2b19(p4);
	l170 = 1;
Lc6e2:
	if (!f0c42()) goto Lc6ef;
	l170 = 0;
Lc6ef:
	if (f2643(1) != 1) goto Lc70e;
	if ((char)f2724(1) != 13) goto Lc70e;
	l170 = 0;
Lc70e:
	if (l170) goto Lc6e2;
	f02d2(l6, 0);
}
