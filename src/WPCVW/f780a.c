extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g575a;
extern char g575b;
extern char g5772;
extern char g5773;
extern int g0004[];
extern int g440c[];
extern int g4410[];
extern int g4fc4;
extern int g553c;
extern int g5754;
extern int g5756;
extern int g5758;
extern int g578a;
extern int g578c;
extern int g578e;
f780a(p4, p6, p8, p10)
char *p4;
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
	char x66[4];
	int l72;
	int l74;
	int l76;
	l2 = f011a(20, 4, 20, 16, 22, -1, 0, 0);
	l4 = f011a(21, 7, 19, 8, 23, -1, 0, 0);
	f32be(l4, 32, 3, 0);
	f721a(l2, p8);
	f719f(l4, 1);
	f2b19(p6);
	l64 = 0;
	l6 = 0;
L789b:
	l74 = (((l6 / 3) * 10) + 1);
	l76 = (((l6 % 3) << 1) + 14);
	f0c16(l6, ((unsigned char)p4[2] + l74), ((unsigned char)p4[3] + l76), ((unsigned char)p4[2] + l74), ((unsigned char)p4[3] + l76));
	l6++;
	if (l6 < 6) goto L789b;
	f0c16(6, ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12), ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12));
L7923:
	f0c16(7, 255, 0, 0, 0);
	l72 = 1;
L793c:
	if (l72 != 1) goto L7ab1;
	g553c = 1;
	if (l64 != -1) goto L79cc;
	g5754 = l2;
	g5756 = 1;
	g5758 = 12;
	f033f(l2, 11, 12, 18, 12);
	f030b(l2, 11, 12);
	f083f(3956, l2, 9);
	f033f(l2, 6, 14, 8, 14);
	l10 = -1;
	f719f(l4, 1);
	goto L7a88;
L79cc:
	g5754 = p4;
	g5756 = (((l64 / 3) * 10) + 1);
	g5758 = (((l64 % 3) << 1) + 14);
	f033f(l2, 11, 12, 18, 12);
	f030b(l2, 11, 12);
	f083f((l64 + 3950), l2, g0004[l64]);
	f033f(l2, 6, 14, 8, 14);
	l10 = f76ee(p8, l64, l50);
	f7749(l4, p8, l64, 0, 0, l10, l50);
L7a88:
	g5772 = 99;
	g5773 = 0;
	g578c = 5;
	g575a = (char)(l64 + 35);
	g575b = 0;
	g578a = 17;
	l72 = 0;
L7ab1:
	l6 = f8891(21822, 13720);
	if (g4fc4 != 1) goto L7b0e;
	if (l6 != l64) goto L7ad5;
	l6 = 5;
	goto L7b06;
L7ad5:
	f7148(p4, l2, l64);
	if (l6 >= 6) goto L7af7;
	l64 = l6;
	l6 = 0;
	goto L7b06;
L7af7:
	l64 = -1;
	l6 = 5;
	l10 = -1;
L7b06:
	l72 = 1;
	goto L7c03;
L7b0e:
	switch (l6) {
case 1:
	if (l64 != -1) goto L7b35;
	f7148(p4, l2, l64);
	l64 = 4;
	l72 = 1;
	goto L7b55;
L7b35:
	if ((l64 - 3) < 0) goto L7b55;
	f7148(p4, l2, l64);
	l64 += -3;
	l72 = 1;
L7b55:
	goto L7c03;
case 2:
	if (l64 == -1) goto L7b85;
	if ((l64 % 3) <= 0) goto L7b85;
	f7148(p4, l2, l64);
	l64--;
	l72 = 1;
L7b85:
	goto L7c03;
case 3:
	if (l64 == -1) goto L7bb7;
	f7148(p4, l2, l64);
	l72 = 1;
	if ((l64 + 3) >= 6) goto L7bb2;
	l64 = (l64 + 3);
	goto L7bb7;
L7bb2:
	l64 = -1;
L7bb7:
	goto L7c03;
case 4:
	if (l64 == -1) goto L7be7;
	if (((l64 % 3) + 1) >= 3) goto L7be7;
	f7148(p4, l2, l64);
	l64++;
	l72 = 1;
L7be7:
	goto L7c03;
	}
L7c03:
	if (l6 != 5) goto L793c;
	if (!l10) goto L793c;
	if (l64 != -1) goto L7c42;
	g553c = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	return -1;
L7c42:
	f7148(p4, l2, l64);
	l58 = 0;
	l60 = 0;
	g5754 = l4;
	g5756 = 1;
	g5758 = 3;
	strcpy(22362, 20462);
	g578a = 0;
	f0c16(7, (unsigned char)l4[2], (unsigned char)l4[3], (unsigned char)l4[2], (unsigned char)l4[3]);
	f0c16(8, (unsigned char)l4[2], ((unsigned char)l4[3] + 6), (unsigned char)l4[2], ((unsigned char)l4[3] + 6));
	f0c16(9, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 3), ((unsigned char)l4[2] + 18), ((unsigned char)l4[3] + 3));
	f0c16(10, 255, 0, 0, 0);
L7d14:
	g553c = 1;
	f075b((l50[l58] + 4000), 22386);
	g578c = g0004[l64];
	f7749(l4, p8, l64, l58, 1, l10, l50);
	l66 = (unsigned char)g00e0[(l50[l58] * 6)];
	f030b(l2, 6, 14);
	if (*(int *)((char *)g4410 + ((432 * p8) + (l64 << 2))) >= l66) goto L7dc3;
	f24e9(l2, 20478, g0004[l64]);
	goto L7dde;
L7dc3:
	f05a5(l2, l66, 3, g0004[l64]);
L7dde:
	l6 = f8891(21822, 13720);
	if (g4fc4 != 1) goto L7e61;
#asm
	db 0ebh,05ch
#endasm
	l64 = l6;
	l6 = 1;
	goto L7e61;
	g553c = -1;
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
	db 0ebh,021h,0f8h,07dh,0f8h,07dh,0f8h,07dh,0f8h,07dh,0f8h,07dh,0f8h,07dh,005h,07eh
	db 02bh,07eh,032h,07eh,039h,07eh
l7e54:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,040h,07eh
#endasm
L7e61:
	switch (l6) {
case 1:
	l60 = 1;
	goto L7e95;
case 2:
	if (l58 <= 0) goto L7e76;
	l58--;
L7e76:
	goto L7e95;
case 4:
	if ((l58 + 1) >= l10) goto L7e84;
	l58++;
L7e84:
	goto L7e95;
	}
L7e95:
	if (l6 == 5) goto L7ea4;
	if (l60 != 1) goto L7d14;
L7ea4:
	if (l60 == 1) goto L7923;
	l52 = l50[l58];
	if (p10) goto L7ee8;
	g553c = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	return l52;
L7ee8:
	f719f(l4, 0);
	f3118(l4);
	f030b(l4, 1, 3);
	f083f((l52 + 4000), l4, 18);
	f31d1(l4);
	f2b19(l4);
	l54 = 1;
	l56 = ((*(int *)((char *)g440c + (432 * p8)) - (unsigned char)g00df[(l52 * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0c8h,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L7f74:
	;
#asm
l7f74:
	db 089h,046h,0c8h
#endasm
	l6 = 0;
	goto L7fb7;
L7f7e:
	f0c16(l6, (((unsigned char)l2[2] + l6) + 3), ((unsigned char)l2[3] + 12), (((unsigned char)l2[2] + l6) + 3), ((unsigned char)l2[3] + 12));
	l6++;
L7fb7:
	if (l6 < l56) goto L7f7e;
	f0c16(l56, ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12), ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12));
	f0c16((l56 + 1), 255, 0, 0, 0);
	l72 = 1;
	g5754 = l2;
L800b:
	l66 = ((unsigned char)g00e0[(l52 * 6)] * l54);
	if (l72 != 1) goto L8156;
	g553c = 1;
	l72 = 0;
	if (l54) goto L80c4;
	g5756 = 1;
	g5758 = 12;
	g5772 = 99;
	g5773 = 0;
	g578c = 5;
	g575a = 34;
	g575b = 0;
	g578a = 17;
	f033f(l2, 11, 12, 18, 12);
	f030b(l2, 11, 12);
	f083f(3956, l2, 9);
	f033f(l2, 6, 14, 8, 14);
	goto L8156;
L80c4:
	g5756 = (l54 + 2);
	g5758 = 12;
	g5772 = (char)(l54 + 23);
	g5773 = 0;
	g578c = 7;
	g575a = 32;
	g575b = 0;
	g578a = 0;
	f030b(l2, 6, 14);
	if (*(int *)((char *)g4410 + ((432 * p8) + (l64 << 2))) >= l66) goto L813b;
	f24e9(l2, 20482, g0004[l64]);
	goto L8156;
L813b:
	f05a5(l2, l66, 3, g0004[l64]);
L8156:
	l6 = f8891(21822, 13720);
	if (g4fc4 != 1) goto L81cc;
	if ((l6 + 1) != l54) goto L817b;
	l6 = 5;
	goto L81c4;
L817b:
	f030b(l2, (l54 + 2), 12);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54 = (l6 < l56 ? (l6 + 1) : 0);
	l6 = (l54 == 0 ? 5 : 0);
L81c4:
	l72 = 1;
	goto L82be;
L81cc:
	switch (l6) {
case 1:
	if (l54 <= 0) goto L8209;
	f030b(l2, (l54 + 2), 12);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54--;
	l72 = 1;
L8209:
	goto L82be;
case 3:
	if (l54) goto L8273;
	f7148(p4, l2, -1);
	f033f(l2, 11, 12, 18, 12);
	f030b(l2, 11, 12);
	f083f((l64 + 3950), l2, g0004[l64]);
	l54 = 1;
	l72 = 1;
	goto L82ac;
L8273:
	if (l54 >= l56) goto L82ac;
	f030b(l2, (l54 + 2), 12);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54++;
	l72 = 1;
L82ac:
	goto L82be;
	}
L82be:
	if (l6 != 5) goto L800b;
	if (*(int *)((char *)g4410 + ((432 * p8) + (l64 << 2))) < l66) goto L800b;
	g553c = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	if (l54) goto L8310;
	return -1;
L8310:
	if (g00e2[(l52 * 6)] != 1) goto L8346;
	g578e = f897d(p4, p6, 502, -1);
	if (g578e != -1) goto L8346;
	return -1;
L8346:
	return ((l54 << 8) + l52);
}
