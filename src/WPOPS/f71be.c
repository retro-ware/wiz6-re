extern char g00cc[];
extern char g00e2[];
extern char g442c[];
extern char g442e[];
extern char g4594[];
extern int g4428[];
extern int g4fc4;
f71be(p4, p6)
{
	char *l2;
	char *l4;
	int l6;
	int l8;
	int l10;
	char x10[44];
	int l56;
	char x56[26];
	int l84;
	char l264[180];
	char x264[8];
	int l274;
	int l276;
	int l278;
	int l280;
	int l282;
	register int rsi;
	l2 = f011a(0, 19, 19, 5, 12, -4, 0, 0);
	f32be(l2, 32, 3, 0);
	l4 = f011a(20, 19, 20, 5, 20, -5, 0, 0);
	f32be(l4, 32, 3, 0);
	f3118(l2);
	f030b(l2, 2, 1);
	f083f(3504, l2, 18);
	f31d1(l2);
	f6029(l4, 0);
	f2a63();
	l8 = 0;
	goto L7316;
L7281:
	f0882(1, &l84, *(int *)((char *)g4428 + ((432 * p6) + (l8 << 3))), 0);
	strcpy(((l8 << 4) + ((char *)l264 + 20)), &l84);
	if (g00cc[(unsigned char)g442c[((432 * p6) + (l8 << 3))]] != 1) goto L7304;
	*(int *)(l264 + (l8 << 1)) = (unsigned char)g442e[((432 * p6) + (l8 << 3))];
	goto L7313;
L7304:
	*(int *)(l264 + (l8 << 1)) = 0;
L7313:
	l8++;
L7316:
	if ((unsigned char)g4594[(432 * p6)] > l8) goto L7281;
	f075b(3505, &l274);
	l8 = 0;
	l10 = 0;
	f0c16(0, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	f0c16(1, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	f0c16(2, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	f0c16(3, ((unsigned char)l2[2] + 7), ((unsigned char)l2[3] + 3), ((strlen(&l274) + (unsigned char)l2[2]) + 6), ((unsigned char)l2[3] + 3));
	f0c16(4, 255, 0, 0, 0);
L741b:
	if (l10 != 1) goto L7463;
	f030b(l2, 7, 3);
	f24e9(l2, &l274, -3);
	f7017(l4, p6, l8, 0, ((char *)l264 + 20), l264);
	goto L74a3;
L7463:
	f030b(l2, 7, 3);
	f251d(l2, &l274, 3);
	f7017(l4, p6, l8, 1, ((char *)l264 + 20), l264);
L74a3:
	l6 = f51d9(17270, 13720);
	if (g4fc4 != 1) goto L74f2;
	goto L74de;
	l6 = 5;
#asm
	db 0ebh,02eh
#endasm
	l6 = 2;
#asm
	db 0ebh,027h
#endasm
	l6 = 4;
#asm
	db 0ebh,020h
#endasm
	l10 = 1;
	l6 = 5;
#asm
	db 0ebh,014h
#endasm
L74de:
	;
#asm
l74de:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
#endasm
L74f2:
	switch (l6) {
case 1:
	if (l10 == 1) goto L7502;
	l10 = 1;
L7502:
	goto L7565;
case 2:
	if (l10 != 1) goto L7511;
	l10 = 0;
	goto L751a;
L7511:
	if (l8 <= 0) goto L751a;
	l8--;
L751a:
	goto L7565;
case 3:
	if (l10 != 1) goto L7527;
	l10 = 0;
L7527:
	goto L7565;
case 4:
	if (l10 != 1) goto L7536;
	l10 = 0;
	goto L754f;
L7536:
	if ((unsigned char)g4594[(432 * p6)] <= (l8 + 1)) goto L754f;
	l8++;
L754f:
	goto L7565;
	}
L7565:
	if (l6 != 5) goto L741b;
	f02d2(l2, 0);
	f02d2(l4, 0);
	if (l10 != 1) goto L7596;
	return -1;
L7596:
	f0882(1, &l84, *(int *)((char *)g4428 + ((432 * p6) + (l8 << 3))), 0);
	if (!l56) goto L7690;
	l278 = (l56 / 256);
	l276 = (l56 % 256);
	if (g00e2[(l276 * 6)] != 1) goto L7642;
	f32be(p4, 32, 3, 0);
	f2a63();
	rsi = (44 * p6);
#asm
	db 08bh,01eh,0a8h,043h,0c6h,040h,01fh,000h
#endasm
	l282 = f5a33(3610);
	if (l282 != -1) goto L762b;
	return -1;
L762b:
	;
#asm
l762b:
	db 08ah,086h,0e6h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,020h
#endasm
	goto L7690;
L7642:
	if (g00e2[(l276 * 6)] != 2) goto L7690;
	l280 = f55cd(p4, 3604, 3, 0);
	if (l280 != -1) goto L767b;
	return -1;
L767b:
	;
#asm
l767b:
	db 08ah,086h,0e8h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,01fh
#endasm
L7690:
	return l8;
}
