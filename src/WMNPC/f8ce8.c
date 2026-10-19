extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g5232;
extern char g5233;
extern char g524a;
extern char g524b;
extern int g0004[];
extern int g440c[];
extern int g4410[];
extern int g4fc4;
extern int g5226;
extern int g5228;
extern int g522a;
extern int g522c;
extern int g522e;
extern int g5230;
extern int g5322;
f8ce8(p4, p6)
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
	f8a3e(l2, p6);
	f88c7(l4, 1);
	l64 = 0;
	l6 = 0;
L8d5d:
	l74 = (((l6 / 3) * 6) + 1);
	l76 = (((l6 % 3) << 1) + 1);
	f0c16(l6, ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76), ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76));
	l6++;
	if (l6 < 6) goto L8d5d;
	f0c16(6, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
L8de2:
	f0c16(7, 255, 0, 0, 0);
	l72 = 1;
	g522a = l2;
L8e01:
	if (l72 != 1) goto L8f63;
	g522c = 1;
	if (l64 != -1) goto L8e8b;
	g5228 = 13;
	g5226 = 3;
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f(3956, l2, 9);
	f033f(l2, 18, 5, 20, 5);
	l10 = -1;
	f88c7(l4, 1);
	goto L8f3a;
L8e8b:
	g5228 = (((l64 / 3) * 6) + 1);
	g5226 = (((l64 % 3) << 1) + 1);
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f((l64 + 3950), l2, g0004[l64]);
	f033f(l2, 18, 5, 20, 5);
	l10 = f8bcd(p6, l64, l50);
	f8c28(l4, p6, l64, 0, 0, l10, l50);
L8f3a:
	g524a = 99;
	g524b = 0;
	g5230 = 5;
	g5232 = (char)(l64 + 35);
	g5233 = 0;
	g522e = 17;
	l72 = 0;
L8f63:
	l6 = f5994(21098, 13720);
	if (g4fc4 != 1) goto L8fbd;
	if (l6 != l64) goto L8f87;
	l6 = 5;
	goto L8fb5;
L8f87:
	f8874(l2, l64);
	if (l6 >= 6) goto L8fa6;
	l64 = l6;
	l6 = 0;
	goto L8fb5;
L8fa6:
	l64 = -1;
	l6 = 5;
	l10 = -1;
L8fb5:
	l72 = 1;
	goto L90a3;
L8fbd:
	switch (l6) {
case 1:
	if (l64 != -1) goto L8fe1;
	f8874(l2, l64);
	l64 = 4;
	l72 = 1;
	goto L8ffe;
L8fe1:
	if ((l64 - 3) < 0) goto L8ffe;
	f8874(l2, l64);
	l64 += -3;
	l72 = 1;
L8ffe:
	goto L90a3;
case 2:
	if (l64 == -1) goto L902b;
	if ((l64 % 3) <= 0) goto L902b;
	f8874(l2, l64);
	l64--;
	l72 = 1;
L902b:
	goto L90a3;
case 3:
	if (l64 == -1) goto L905a;
	f8874(l2, l64);
	l72 = 1;
	if ((l64 + 3) >= 6) goto L9055;
	l64 = (l64 + 3);
	goto L905a;
L9055:
	l64 = -1;
L905a:
	goto L90a3;
case 4:
	if (l64 == -1) goto L9087;
	if (((l64 % 3) + 1) >= 3) goto L9087;
	f8874(l2, l64);
	l64++;
	l72 = 1;
L9087:
	goto L90a3;
	}
L90a3:
	if (l6 != 5) goto L8e01;
	if (!l10) goto L8e01;
	if (l64 != -1) goto L90e2;
	g522c = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	return -1;
L90e2:
	f8874(l2, l64);
	l58 = 0;
	l60 = 0;
	g522a = l4;
	g5228 = 2;
	g5226 = 2;
	strcpy(21042, 20491);
	g522e = 0;
	f0c16(7, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	f0c16(8, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	f0c16(9, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	f0c16(10, 255, 0, 0, 0);
L91b4:
	g522c = 1;
	f075b((l50[l58] + 4000), 21066);
	g5230 = g0004[l64];
	f8c28(l4, p6, l64, l58, 1, l10, l50);
	l66 = (unsigned char)g00e0[(l50[l58] * 6)];
	f030b(l2, 18, 5);
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) >= l66) goto L9263;
	f24e9(l2, 20507, g0004[l64]);
	goto L927e;
L9263:
	f05a5(l2, l66, 3, g0004[l64]);
L927e:
	l6 = f5994(21098, 13720);
	if (g4fc4 != 1) goto L9301;
#asm
	db 0ebh,05ch
#endasm
	l64 = l6;
	l6 = 1;
	goto L9301;
	g522c = -1;
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
	db 0ebh,021h,098h,092h,098h,092h,098h,092h,098h,092h,098h,092h,098h,092h,0a5h,092h
	db 0cbh,092h,0d2h,092h,0d9h,092h
l92f4:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0e0h,092h
#endasm
L9301:
	switch (l6) {
case 1:
	l60 = 1;
	goto L9335;
case 2:
	if (l58 <= 0) goto L9316;
	l58--;
L9316:
	goto L9335;
case 4:
	if ((l58 + 1) >= l10) goto L9324;
	l58++;
L9324:
	goto L9335;
	}
L9335:
	if (l6 == 5) goto L9344;
	if (l60 != 1) goto L91b4;
L9344:
	if (l60 == 1) goto L8de2;
	l52 = l50[l58];
	f88c7(l4, 0);
	f3118(l4);
	f030b(l4, 2, 2);
	f083f((l52 + 4000), l4, 18);
	f31d1(l4);
	f2b19(l4);
	g522a = l2;
	l54 = 1;
	l56 = ((*(int *)((char *)g440c + (432 * p6)) - (unsigned char)g00df[(l52 * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0c8h,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L93eb:
	;
#asm
l93eb:
	db 089h,046h,0c8h
#endasm
	l6 = 0;
	goto L942e;
L93f5:
	f0c16(l6, (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3), (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3));
	l6++;
L942e:
	if (l6 < l56) goto L93f5;
	f0c16(l56, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
	f0c16((l56 + 1), 255, 0, 0, 0);
	l72 = 1;
L9480:
	l66 = ((unsigned char)g00e0[(l52 * 6)] * l54);
	if (l72 != 1) goto L95cc;
	l72 = 0;
	g522c = 1;
	if (l54) goto L9539;
	g5228 = 13;
	g5226 = 3;
	g524a = 99;
	g524b = 0;
	g5230 = 5;
	g5232 = 34;
	g5233 = 0;
	g522e = 17;
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f(3956, l2, 9);
	f033f(l2, 18, 5, 20, 5);
	goto L95cc;
L9539:
	g5228 = (l54 + 14);
	g5226 = 3;
	g524a = (char)(l54 + 23);
	g524b = 0;
	g5230 = 7;
	g5232 = 32;
	g5233 = 0;
	g522e = 0;
	f030b(l2, 18, 5);
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) >= l66) goto L95b1;
	f24e9(l2, 20511, g0004[l64]);
	goto L95cc;
L95b1:
	f05a5(l2, l66, 3, g0004[l64]);
L95cc:
	l6 = f5994(21098, 13720);
	if (g4fc4 != 1) goto L9643;
	if ((l6 + 1) != l54) goto L95f1;
	l6 = 5;
	goto L963b;
L95f1:
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54 = (l6 < l56 ? (l6 + 1) : 0);
	l6 = (l54 == 0 ? 5 : 0);
L963b:
	l72 = 1;
	goto L9734;
L9643:
	switch (l6) {
case 1:
	if (l54 <= 0) goto L9681;
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54--;
	l72 = 1;
L9681:
	goto L9734;
case 3:
	if (l54) goto L96e8;
	f8874(l2, -1);
	f033f(l2, 13, 1, 20, 1);
	f030b(l2, 13, 1);
	f083f((l64 + 3950), l2, g0004[l64]);
	l54 = 1;
	l72 = 1;
	goto L9722;
L96e8:
	if (l54 >= l56) goto L9722;
	f030b(l2, (l54 + 14), 3);
	f22b7(l2, (unsigned char)((l54 + 23)), 5);
	l54++;
	l72 = 1;
L9722:
	goto L9734;
	}
L9734:
	if (l6 != 5) goto L9480;
	if (*(int *)((char *)g4410 + ((432 * p6) + (l64 << 2))) < l66) goto L9480;
	g522c = -1;
	f02d2(l2, 0);
	f02d2(l4, 0);
	if (l54) goto L9786;
	return -1;
L9786:
	if (g00e2[(l52 * 6)] != 1) goto L97b9;
	f2a63();
	g5322 = f62ee(2030, 1);
	if (g5322 != -1) goto L97b9;
	return -1;
L97b9:
	return ((l54 << 8) + l52);
}
