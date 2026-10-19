extern char g51bc[];
extern int g3342;
extern int g43ce;
extern int g4fb2;
extern int g4fb6;
extern int g501e;
extern int g5024;
extern int g5026;
extern int g50c8;
extern int g5192;
extern int g5194[];
extern int g51d0;
extern int g51d2;
f9105(p4)
char *p4;
{
	int l2;
	char x2[2];
	int l6;
	int l8;
	int l10;
	int l12;
	char x12[8];
	int l22;
	int l44[11];
	char x44[78];
	int l124;
	g5026 = 0;
	switch ((unsigned char)p4[39]) {
case 0:
	g5024 = -1;
	goto L9142;
case 1:
	g5024 = 0;
	goto L9142;
case 2:
	g5024 = 1;
	goto L9142;
	}
L9142:
	f66b1(p4);
	f31d1(g3342);
	f31d1(g4fb2);
	f0a42(g4fb2, 0);
	l10 = f011a(0, 19, 19, 5, 20, -4, 0, 0);
	f32be(l10, 32, 3, 0);
	l12 = f011a(20, 19, 20, 5, 21, -5, 0, 0);
	f32be(l12, 32, 3, 0);
	f3118(l12);
	f030b(l12, 4, 0);
	f083f(5226, l12, 18);
	f88a9(l12, 0, 1, 17);
	f88a9(l12, 19, 1, 19);
	f88a9(l12, 0, 3, 6);
	f88a9(l12, 19, 3, 8);
	l2 = 1;
L925c:
	f88a9(l12, l2, 1, 18);
	f88a9(l12, l2, 3, 7);
	l2++;
	if (l2 < 19) goto L925c;
	f88a9(l12, 0, 2, 4);
	f88a9(l12, 19, 2, 5);
	f033f(l12, 1, 2, 18, 2);
	f31d1(l12);
	g51d0 = 0;
	l2 = 0;
L92e4:
	g51bc[l2] = 0;
	g5194[l2] = 0;
	l2++;
	if (l2 < 20) goto L92e4;
	l2 = 0;
	goto L9317;
L9306:
	l44[l2] = 0;
	l2++;
L9317:
	if (l2 < g43ce) goto L9306;
	l2 = 0;
L9325:
	l44[(l2 + 6)] = 1;
	l2++;
	if (l2 <= 4) goto L9325;
	l22 = -1;
	f5097(5200, 2);
	f32be(l10, 32, 3, 0);
	f2a63();
	l8 = f5169(l10, 5201, ((char *)l44 + 12), 2, 1, 10, 3, 5, 0);
#asm
	db 0e9h,056h,002h
#endasm
	l6 = f5649(5225, 0);
	if (l6 == -1) goto L93dd;
	if (!f908d(l6)) goto L93dd;
	g501e = 1;
	f90d4(l10, l12);
	f5f49(g5192, l6);
	return 0;
L93dd:
	;
#asm
l93dd:
	db 0e9h,01bh,002h
#endasm
	l6 = f5649(5223, 0);
	if (l6 == -1) goto L9431;
	if (l44[l6]) goto L9429;
	if (!f908d(l6)) goto L9427;
	f6919(l12, l6);
	l44[l6] = 1;
L9427:
	goto L9431;
L9429:
	f0aaa(0);
L9431:
	;
#asm
l9431:
	db 0e9h,0c7h,001h
#endasm
	l6 = f5649(5220, 0);
	if (l6 == -1) goto L954e;
	if (!f908d(l6)) goto L954e;
	l2 = f6ae6(l6, p4);
	f3118(l10);
	f3118(l12);
	f3118(g3342);
	f3118(g4fb2);
	f02f0(g4fb6, 0);
	f2a63();
	if (l2 != 1) goto L94dd;
	g501e = 1;
	f075b(5229, &l124);
	f59e9(g4fb6, g50c8, &l124, 1, 7);
	f90d4(l10, l12);
	return 0;
L94dd:
	if (l2 != -1) goto L9508;
	g501e = 1;
	f90d4(l10, l12);
	f5f49(g5192, l6);
	return 0;
L9508:
	f075b(5230, &l124);
	f59e9(g4fb6, g50c8, &l124, 1, 7);
	f31d1(l10);
	f31d1(l12);
	f31d1(g3342);
	f31d1(g4fb2);
L954e:
	;
#asm
l954e:
	db 0e9h,0aah,000h
#endasm
	l6 = f5649(5224, 0);
	if (l6 == -1) goto L95d0;
	if (!f908d(l6)) goto L95d0;
	g51d2 = 0;
	f8445(l10, l12, l6);
	if (g51d2 != 1) goto L95a4;
	g501e = 1;
	f90d4(l10, l12);
	return 0;
L95a4:
	if (g51d2 != -1) goto L95d0;
	g501e = 1;
	f90d4(l10, l12);
	f5f49(g5192, l6);
	return 0;
L95d0:
	;
#asm
l95d0:
	db 0ebh,029h
#endasm
	f90d4(l10, l12);
	return -1;
#asm
	db 0e0h,093h,034h,094h,098h,093h,051h,095h,0d2h,095h
l95ee:
	db 03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0e4h,095h
l95fb:
	db 0e9h,045h,0fdh,0e9h,0d8h,0fdh
#endasm
}
