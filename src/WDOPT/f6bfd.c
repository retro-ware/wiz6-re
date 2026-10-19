extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g503a;
extern char g503b;
extern char g5052;
extern char g5053;
extern int g0004[];
extern int g440c[];
extern int g4410[];
extern int g4fc4;
extern int g502e;
extern int g5030;
extern int g5032;
extern int g5034;
extern int g5036;
extern int g5038;
extern int g51b6;
f6bfd(p4, p6)
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
	l2 = f011a(0, 18, 23, 7, 25, -1, 0, 0);
	l4 = f011a(22, 19, 18, 6, 26, -5, 0, 0);
	f6953(l2, p6);
	f67dc(l4, 1);
	l64 = 0;
	l6 = 0;
L6c72:
	l74 = (((l6 / 3) * 6) + 1);
	l76 = (((l6 % 3) << 1) + 1);
	f0c16(l6, ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76), ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76));
	l6++;
	if (l6 < 6) goto L6c72;
	f0c16(6, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
L6cf7:
	f0c16(7, 255, 0, 0, 0);
	l72 = 1;
	g5034 = l2;
L6d16:
	if (l72 != 1) goto L6e78;
	g502e = 1;
	if (l64 != -1) goto L6da0;
	g5032 = 13;
	g5030 = 3;
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f(3956, l2, 9);
	f033f(l2, 18, 5, 20, 5);
	l10 = -1;
	f67dc(l4, 1);
	goto L6e4f;
L6da0:
	g5032 = (((l64 / 3) * 6) + 1);
	g5030 = (((l64 % 3) << 1) + 1);
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f((l64 + 3950), l2, g0004[l64]);
	f033f(l2, 18, 5, 20, 5);
	l10 = f6ae2(p6, l64, l50);
	f6b3d(l4, p6, l64, 0, 0, l10, l50);
L6e4f:
	g5052 = 99;
	g5053 = 0;
	g5038 = 5;
	g503a = (char)(l64 + 35);
	g503b = 0;
	g5036 = 17;
	l72 = 0;
L6e78:
	l6 = f4728(20668, 13720);
	if (g4fc4 != 1) goto L6ed2;
	if (l6 != l64) goto L6e9c;
	l6 = 5;
	goto L6eca;
L6e9c:
	f6789(l2, l64);
	if (l6 >= 6) goto L6ebb;
	l64 = l6;
	l6 = 0;
	goto L6eca;
L6ebb:
	l64 = -1;
	l6 = 5;
	l10 = -1;
L6eca:
	l72 = 1;
	goto L6fb8;
L6ed2:
	switch (l6) {
case 1:
	if (l64 != -1) goto L6ef6;
	f6789(l2, l64);
	l64 = 4;
	l72 = 1;
	goto L6f13;
L6ef6:
	if ((l64 - 3) < 0) goto L6f13;
	f6789(l2, l64);
	l64 += -3;
	l72 = 1;
L6f13:
	goto L6fb8;
case 2:
	if (l64 == -1) goto L6f40;
	if ((l64 % 3) <= 0) goto L6f40;
	f6789(l2, l64);
	l64--;
	l72 = 1;
L6f40:
	goto L6fb8;
case 3:
	if (l64 == -1) goto L6f6f;
	f6789(l2, l64);
	l72 = 1;
	if ((l64 + 3) >= 6) goto L6f6a;
	l64 = (l64 + 3);
	goto L6f6f;
L6f6a:
	l64 = -1;
L6f6f:
	goto L6fb8;
case 4:
	if (l64 == -1) goto L6f9c;
	if (((l64 % 3) + 1) >= 3) goto L6f9c;
	f6789(l2, l64);
	l64++;
	l72 = 1;
L6f9c:
	goto L6fb8;
	}
L6fb8:
	if (l6 != 5) goto L6d16;
	if (!l10) goto L6d16;
	if (l64 != -1) goto L6ff7;
	g502e = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	return -1;
L6ff7:
	f6789(l2, l64);
	l58 = 0;
	l60 = 0;
	g5034 = l4;
	g5032 = 2;
	g5030 = 2;
	strcpy(20538, 20484);
	g5036 = 0;
	f0c16(7, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	f0c16(8, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	f0c16(9, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	f0c16(10, 255, 0, 0, 0);
L70c9:
	g502e = 1;
	f075b((l50[l58] + 4000), 20562);
	g5038 = g0004[l64];
	f6b3d(l4, p6, l64, l58, 1, l10, l50);
	l66 = (unsigned char)g00e0[(l50[l58] * 6)];
	f030b(l2, 18, 5);
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) >= l66) goto L7178;
	f24e9(l2, 20500, g0004[l64]);
	goto L7193;
L7178:
	f05a5(l2, l66, 3, g0004[l64]);
L7193:
	l6 = f4728(20668, 13720);
	if (g4fc4 != 1) goto L7216;
#asm
	db 0ebh,05ch
#endasm
	l64 = l6;
	l6 = 1;
	goto L7216;
	g502e = -1;
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
	db 0ebh,021h,0adh,071h,0adh,071h,0adh,071h,0adh,071h,0adh,071h,0adh,071h,0bah,071h
	db 0e0h,071h,0e7h,071h,0eeh,071h
l7209:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0f5h,071h
#endasm
L7216:
	switch (l6) {
case 1:
	l60 = 1;
	goto L724a;
case 2:
	if (l58 <= 0) goto L722b;
	l58--;
L722b:
	goto L724a;
case 4:
	if ((l58 + 1) >= l10) goto L7239;
	l58++;
L7239:
	goto L724a;
	}
L724a:
	if (l6 == 5) goto L7259;
	if (l60 != 1) goto L70c9;
L7259:
	if (l60 == 1) goto L6cf7;
	l52 = l50[l58];
	f67dc(l4, 0);
	f3118(l4);
	f030b(l4, 2, 2);
	f083f((l52 + 4000), l4, 18);
	f31d1(l4);
	f2b19(l4);
	g5034 = l2;
	l54 = 1;
	l56 = ((*(int *)((char *)g440c + (432 * p6)) - (unsigned char)g00df[(l52 * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0c8h,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L7300:
	;
#asm
l7300:
	db 089h,046h,0c8h
#endasm
	l6 = 0;
	goto L7343;
L730a:
	f0c16(l6, (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3), (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3));
	l6++;
L7343:
	if (l6 < l56) goto L730a;
	f0c16(l56, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
	f0c16((l56 + 1), 255, 0, 0, 0);
	l72 = 1;
L7395:
	l66 = ((unsigned char)g00e0[(l52 * 6)] * l54);
	if (l72 != 1) goto L74e1;
	l72 = 0;
	g502e = 1;
	if (l54) goto L744e;
	g5032 = 13;
	g5030 = 3;
	g5052 = 99;
	g5053 = 0;
	g5038 = 5;
	g503a = 34;
	g503b = 0;
	g5036 = 17;
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f(3956, l2, 9);
	f033f(l2, 18, 5, 20, 5);
	goto L74e1;
L744e:
	g5032 = (l54 + 14);
	g5030 = 3;
	g5052 = (char)(l54 + 23);
	g5053 = 0;
	g5038 = 7;
	g503a = 32;
	g503b = 0;
	g5036 = 0;
	f030b(l2, 18, 5);
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) >= l66) goto L74c6;
	f24e9(l2, 20504, g0004[l64]);
	goto L74e1;
L74c6:
	f05a5(l2, l66, 3, g0004[l64]);
L74e1:
	l6 = f4728(20668, 13720);
	if (g4fc4 != 1) goto L7558;
	if ((l6 + 1) != l54) goto L7506;
	l6 = 5;
	goto L7550;
L7506:
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54 = (l6 < l56 ? (l6 + 1) : 0);
	l6 = (l54 == 0 ? 5 : 0);
L7550:
	l72 = 1;
	goto L7649;
L7558:
	switch (l6) {
case 1:
	if (l54 <= 0) goto L7596;
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54--;
	l72 = 1;
L7596:
	goto L7649;
case 3:
	if (l54) goto L75fd;
	f6789(l2, -1);
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f((l64 + 3950), l2, g0004[l64]);
	l54 = 1;
	l72 = 1;
	goto L7637;
L75fd:
	if (l54 >= l56) goto L7637;
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54++;
	l72 = 1;
L7637:
	goto L7649;
	}
L7649:
	if (l6 != 5) goto L7395;
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) < l66) goto L7395;
	g502e = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	if (l54) goto L769b;
	return -1;
L769b:
	if (g00e2[(l52 * 6)] != 1) goto L76c8;
	f2a63();
	g51b6 = f48e0(2030);
	if (g51b6 != -1) goto L76c8;
	return -1;
L76c8:
	return ((l54 << 8) + l52);
}
