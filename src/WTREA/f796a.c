extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g503e;
extern char g503f;
extern char g5056;
extern char g5057;
extern int g0004[];
extern int g440c[];
extern int g4410[];
extern int g4fc4;
extern int g501c;
extern int g5034;
extern int g5036;
extern int g5038;
extern int g503a;
extern int g503c;
extern int g51d4;
f796a(p4, p6)
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
	f76c0(l2, p6);
	f7549(l4, 1);
	l64 = 0;
	l6 = 0;
L79df:
	l74 = (((l6 / 3) * 6) + 1);
	l76 = (((l6 % 3) << 1) + 1);
	f0c16(l6, ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76), ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76));
	l6++;
	if (l6 < 6) goto L79df;
	f0c16(6, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
L7a64:
	f0c16(7, 255, 0, 0, 0);
	l72 = 1;
	g5038 = l2;
L7a83:
	if (l72 != 1) goto L7be5;
	g501c = 1;
	if (l64 != -1) goto L7b0d;
	g5036 = 13;
	g5034 = 3;
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f(3956, l2, 9);
	f033f(l2, 18, 5, 20, 5);
	l10 = -1;
	f7549(l4, 1);
	goto L7bbc;
L7b0d:
	g5036 = (((l64 / 3) * 6) + 1);
	g5034 = (((l64 % 3) << 1) + 1);
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f((l64 + 3950), l2, g0004[l64]);
	f033f(l2, 18, 5, 20, 5);
	l10 = f784f(p6, l64, l50);
	f78aa(l4, p6, l64, 0, 0, l10, l50);
L7bbc:
	g5056 = 99;
	g5057 = 0;
	g503c = 5;
	g503e = (char)(l64 + 35);
	g503f = 0;
	g503a = 17;
	l72 = 0;
L7be5:
	l6 = f4c2f(20670, 13720);
	if (g4fc4 != 1) goto L7c3f;
	if (l6 != l64) goto L7c09;
	l6 = 5;
	goto L7c37;
L7c09:
	f74f6(l2, l64);
	if (l6 >= 6) goto L7c28;
	l64 = l6;
	l6 = 0;
	goto L7c37;
L7c28:
	l64 = -1;
	l6 = 5;
	l10 = -1;
L7c37:
	l72 = 1;
	goto L7d25;
L7c3f:
	switch (l6) {
case 1:
	if (l64 != -1) goto L7c63;
	f74f6(l2, l64);
	l64 = 4;
	l72 = 1;
	goto L7c80;
L7c63:
	if ((l64 - 3) < 0) goto L7c80;
	f74f6(l2, l64);
	l64 += -3;
	l72 = 1;
L7c80:
	goto L7d25;
case 2:
	if (l64 == -1) goto L7cad;
	if ((l64 % 3) <= 0) goto L7cad;
	f74f6(l2, l64);
	l64--;
	l72 = 1;
L7cad:
	goto L7d25;
case 3:
	if (l64 == -1) goto L7cdc;
	f74f6(l2, l64);
	l72 = 1;
	if ((l64 + 3) >= 6) goto L7cd7;
	l64 = (l64 + 3);
	goto L7cdc;
L7cd7:
	l64 = -1;
L7cdc:
	goto L7d25;
case 4:
	if (l64 == -1) goto L7d09;
	if (((l64 % 3) + 1) >= 3) goto L7d09;
	f74f6(l2, l64);
	l64++;
	l72 = 1;
L7d09:
	goto L7d25;
	}
L7d25:
	if (l6 != 5) goto L7a83;
	if (!l10) goto L7a83;
	if (l64 != -1) goto L7d64;
	g501c = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	return -1;
L7d64:
	f74f6(l2, l64);
	l58 = 0;
	l60 = 0;
	g5038 = l4;
	g5036 = 2;
	g5034 = 2;
	strcpy(20542, 20469);
	g503a = 0;
	f0c16(7, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	f0c16(8, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	f0c16(9, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	f0c16(10, 255, 0, 0, 0);
L7e36:
	g501c = 1;
	f075b((l50[l58] + 4000), 20566);
	g503c = g0004[l64];
	f78aa(l4, p6, l64, l58, 1, l10, l50);
	l66 = (unsigned char)g00e0[(l50[l58] * 6)];
	f030b(l2, 18, 5);
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) >= l66) goto L7ee5;
	f24e9(l2, 20485, g0004[l64]);
	goto L7f00;
L7ee5:
	f05a5(l2, l66, 3, g0004[l64]);
L7f00:
	l6 = f4c2f(20670, 13720);
	if (g4fc4 != 1) goto L7f83;
#asm
	db 0ebh,05ch
#endasm
	l64 = l6;
	l6 = 1;
	goto L7f83;
	g501c = -1;
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
	db 0ebh,021h,01ah,07fh,01ah,07fh,01ah,07fh,01ah,07fh,01ah,07fh,01ah,07fh,027h,07fh
	db 04dh,07fh,054h,07fh,05bh,07fh
l7f76:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,062h,07fh
#endasm
L7f83:
	switch (l6) {
case 1:
	l60 = 1;
	goto L7fb7;
case 2:
	if (l58 <= 0) goto L7f98;
	l58--;
L7f98:
	goto L7fb7;
case 4:
	if ((l58 + 1) >= l10) goto L7fa6;
	l58++;
L7fa6:
	goto L7fb7;
	}
L7fb7:
	if (l6 == 5) goto L7fc6;
	if (l60 != 1) goto L7e36;
L7fc6:
	if (l60 == 1) goto L7a64;
	l52 = l50[l58];
	f7549(l4, 0);
	f3118(l4);
	f030b(l4, 2, 2);
	f083f((l52 + 4000), l4, 18);
	f31d1(l4);
	f2b19(l4);
	g5038 = l2;
	l54 = 1;
	l56 = ((*(int *)((char *)g440c + (432 * p6)) - (unsigned char)g00df[(l52 * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0c8h,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L806d:
	;
#asm
l806d:
	db 089h,046h,0c8h
#endasm
	l6 = 0;
	goto L80b0;
L8077:
	f0c16(l6, (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3), (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3));
	l6++;
L80b0:
	if (l6 < l56) goto L8077;
	f0c16(l56, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
	f0c16((l56 + 1), 255, 0, 0, 0);
	l72 = 1;
L8102:
	l66 = ((unsigned char)g00e0[(l52 * 6)] * l54);
	if (l72 != 1) goto L824e;
	l72 = 0;
	g501c = 1;
	if (l54) goto L81bb;
	g5036 = 13;
	g5034 = 3;
	g5056 = 99;
	g5057 = 0;
	g503c = 5;
	g503e = 34;
	g503f = 0;
	g503a = 17;
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f(3956, l2, 9);
	f033f(l2, 18, 5, 20, 5);
	goto L824e;
L81bb:
	g5036 = (l54 + 14);
	g5034 = 3;
	g5056 = (char)(l54 + 23);
	g5057 = 0;
	g503c = 7;
	g503e = 32;
	g503f = 0;
	g503a = 0;
	f030b(l2, 18, 5);
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) >= l66) goto L8233;
	f24e9(l2, 20489, g0004[l64]);
	goto L824e;
L8233:
	f05a5(l2, l66, 3, g0004[l64]);
L824e:
	l6 = f4c2f(20670, 13720);
	if (g4fc4 != 1) goto L82c5;
	if ((l6 + 1) != l54) goto L8273;
	l6 = 5;
	goto L82bd;
L8273:
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54 = (l6 < l56 ? (l6 + 1) : 0);
	l6 = (l54 == 0 ? 5 : 0);
L82bd:
	l72 = 1;
	goto L83b6;
L82c5:
	switch (l6) {
case 1:
	if (l54 <= 0) goto L8303;
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54--;
	l72 = 1;
L8303:
	goto L83b6;
case 3:
	if (l54) goto L836a;
	f74f6(l2, -1);
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f((l64 + 3950), l2, g0004[l64]);
	l54 = 1;
	l72 = 1;
	goto L83a4;
L836a:
	if (l54 >= l56) goto L83a4;
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54++;
	l72 = 1;
L83a4:
	goto L83b6;
	}
L83b6:
	if (l6 != 5) goto L8102;
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) < l66) goto L8102;
	g501c = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	if (l54) goto L8408;
	return -1;
L8408:
	if (g00e2[(l52 * 6)] != 1) goto L8438;
	g51d4 = f5649(2030, 1);
	if (g51d4 != -1) goto L8438;
	return -1;
L8438:
	return ((l54 << 8) + l52);
}
