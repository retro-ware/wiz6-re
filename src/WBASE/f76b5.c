#asm
	extrn f0aaa_:near
	extrn f7418_:near
	extrn f7585_:near
	extrn lseek_:near
#endasm
extern char *g3342;
extern char g3590;
extern char g3591;
extern char g3593;
extern char g3594;
extern int g0846;
extern int g4fb2;
extern int g4fc4;
extern int g4fc6;
extern int g4fc8;
extern int g4fce;
extern int g4fea;
f76b5()
{
	int l2;
	int l4;
	char *l6;
	int l8;
	int l10;
	int l12;
	int l14;
	char x14[8];
	int l24;
	char x24[8];
	int l34;
	int l36;
	int l38;
	int l40;
	char x40[2];
	int l44;
	char x44[4];
	int l50;
	char x50[58];
	int l110;
	f075b(1000, 20582);
	l50 = 0;
	l6 = f011a(0, 19, 40, 5, 22, -1, 0, 0);
	f32be(l6, 32, 3, 0);
	f09fb(g3342, 0);
	f09fb(g4fb2, 0);
	f075b(2308, &l24);
	f075b(2309, &l34);
	f473a(2307);
	l36 = (unsigned char)g3342[6];
	l38 = (unsigned char)g3342[7];
	f3118(l6);
	l2 = 0;
L7769:
	f030b(l6, 1, l2);
	f083f((l2 + 2300), l6, 18);
	f7585(l6, l2, l2, (l2 < 2 ? 5 : 6));
	l40 = (l2 != 1 ? (l2 < 5 ? 7 : 19) : 9);
	l44 = (l2 != 1 ? (l2 < 5 ? 10 : 20) : 1);
	f0c16(l2, ((unsigned char)l6[2] + l40), ((unsigned char)l6[3] + l2), ((((unsigned char)l6[2] + l40) + l44) - 1), ((unsigned char)l6[3] + l2));
	l2++;
	if (l2 < 5) goto L7769;
	f030b(l6, 22, 0);
	f083f(2305, l6, 18);
	f033f(l6, 19, 1, 38, 1);
	f7585(l6, 5, 1, 7);
	f0c16(5, ((unsigned char)l6[2] + 19), ((unsigned char)l6[3] + 1), ((unsigned char)l6[2] + 38), ((unsigned char)l6[3] + 1));
	f030b(l6, 22, 2);
	f083f(2306, l6, 18);
	f033f(l6, 19, 3, 38, 3);
	f7585(l6, 6, 3, 4);
	f0c16(6, ((unsigned char)l6[2] + 19), ((unsigned char)l6[3] + 3), ((unsigned char)l6[2] + 38), ((unsigned char)l6[3] + 3));
	f033f(l6, 19, 4, 38, 4);
	f7585(l6, 7, 4, 4);
	f0c16(7, ((unsigned char)l6[2] + 19), ((unsigned char)l6[3] + 4), ((unsigned char)l6[2] + 38), ((unsigned char)l6[3] + 4));
	f0c16(8, ((unsigned char)l6[2] + 7), ((unsigned char)l6[3] + 1), ((unsigned char)l6[2] + 8), ((unsigned char)l6[3] + 1));
	f0c16(9, ((unsigned char)g3342[2] + l36), ((unsigned char)g3342[3] + l38), (((strlen(&l34) + (unsigned char)g3342[2]) + l36) - 1), ((unsigned char)g3342[3] + l38));
	f0c16(10, 255, 0, 0, 0);
	f31d1(l6);
	f2a63();
	if (g0846) goto L7a2b;
	f030b(g3342, l36, l38);
	f24e9(g3342, &l34, -5);
	goto L7a4d;
L7a2b:
	f030b(g3342, l36, l38);
	f251d(g3342, &l24, 3);
L7a4d:
	l8 = -1;
L7a52:
	if (g0846) goto L7ac2;
	if (l8 != -1) goto L7a83;
	f030b(g3342, l36, l38);
	f24e9(g3342, &l34, -5);
	goto L7abf;
L7a83:
	if (l8 >= 5) goto L7a9e;
	f7585(l6, l8, l8, -5);
	goto L7abf;
L7a9e:
	;
#asm
l7a9e:
	db 0b8h,0fbh,0ffh,050h,0b9h,003h,000h,08bh,046h,0f8h,03dh,005h,000h,075h,003h,0b9h
	db 004h,000h
#endasm
L7ab0:
	;
#asm
l7ab0:
	db 02bh,0c1h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f7585_
	db 083h,0c4h,008h
#endasm
L7abf:
	goto L7b39;
L7ac2:
	if (l8 != -1) goto L7aec;
	f030b(g3342, l36, l38);
	f251d(g3342, &l24, 3);
	goto L7b39;
L7aec:
	if (l8 >= 5) goto L7b0e;
	f7585(l6, l8, l8, (l8 < 2 ? 5 : 6));
	goto L7b39;
L7b0e:
	f7585(l6, l8, (l8 - (l8 == 5 ? 4 : 3)), (l8 == 5 ? 7 : 4));
L7b39:
	l10 = l8;
	if (g4fce != 25) goto L7b59;
	l12 = f73c0(20582, 13720);
	goto L7b6a;
L7b59:
	l12 = f469f(20582, 13720);
L7b6a:
	if (g4fc4 != 1) goto L7ba1;
	if (l12 != 8) goto L7b83;
	l8 = 1;
	l12 = 1;
	goto L7ba1;
L7b83:
	l8 = (l12 < 8 ? l12 : -1);
	l12 = (l8 == -1 ? 5 : 3);
L7ba1:
	switch (l12) {
case 2:
	if (l8 != -1) goto L7bb4;
	l8 = 7;
	goto L7bb7;
L7bb4:
	l8--;
L7bb7:
	goto L7d10;
case 4:
	if (l8 != -1) goto L7bc7;
	l8 = 0;
	goto L7bd7;
L7bc7:
	if (l8 >= 7) goto L7bd2;
	l8++;
	goto L7bd7;
L7bd2:
	l8 = -1;
L7bd7:
	goto L7d10;
case 1:
case 3:
	l50 = 1;
	l2 = (l12 == 1 ? -1 : 1);
#asm
	db 08bh,046h,0f8h,0e9h,0edh,000h
#endasm
	g3590 = (char)((((unsigned char)g3590 + l2) + 6) % 6);
	goto L7cee;
	l4 = ((unsigned char)g3591 + l2);
	if (l4 < 0) goto L7c2a;
	if (l4 > 255) goto L7c2a;
	g3591 = *(char *)&l4;
#asm
	db 0ebh,008h
#endasm
L7c2a:
	f0aaa(0);
L7c32:
	g4fc8 = (unsigned char)g3591;
	goto L7cee;
	g3593 = (char)((((unsigned char)g3593 + l2) + 3) % 3);
#asm
	db 0e9h,098h,000h
#endasm
	g3594 = (char)((((unsigned char)g3594 + l2) + 2) % 2);
#asm
	db 0e9h,080h,000h,0b8h,000h,000h,050h
	call f0aaa_
	db 059h,0ebh,076h
#endasm
	f033f(l6, 19, 1, 38, 1);
	f030b(l6, 19, 1);
#asm
	db 0b8h,000h,000h,050h,0b8h,007h,000h,050h,0b8h,013h,000h,050h,0b8h,07ch,035h,050h
	db 0ffh,076h,0fah
	call f7418_
	db 083h,0c4h,00ah,0ebh,031h,0b8h,000h,000h,050h
	call f0aaa_
	db 059h,0ebh,027h,0b8h,000h,000h,050h
	call f0aaa_
	db 059h,0ebh,01dh,0f4h,07bh,00dh,07ch,03dh,07ch,056h,07ch,06eh,07ch,078h,07ch,0bdh
	db 07ch,0c7h,07ch
l7ce1:
	db 03dh,008h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0d1h,07ch
#endasm
L7cee:
	goto L7d10;
	}
L7d10:
	if (g0846) goto L7d9b;
	if (l10 == l8) goto L7d9b;
	if (l10 != -1) goto L7d4e;
	f030b(g3342, l36, l38);
	f251d(g3342, &l24, 3);
	goto L7d9b;
L7d4e:
	if (l10 >= 5) goto L7d70;
	f7585(l6, l10, l10, (l10 < 2 ? 5 : 6));
	goto L7d9b;
L7d70:
	f7585(l6, l10, (l10 - (l10 == 5 ? 4 : 3)), (l10 == 5 ? 7 : 4));
L7d9b:
	if (l12 != 5) goto L7a52;
	if (l8 != -1) goto L7a52;
	f3640();
	if (l50 != 1) goto L7e36;
	f075b(2258, &l110);
	g4fea = open(f0cd6(20552, 0), 2);
	if (g4fea != -1) goto L7df0;
	f00d5(19);
L7df0:
	;
#asm
l7df0:
	db 0b8h,000h,000h,050h,0b8h,000h,000h,0bah,000h,000h,052h,050h,0ffh,036h,0eah,04fh
	call lseek_
	db 083h,0c4h,008h
#endasm
	l14 = write(g4fea, 13304, 414);
	if (l14 != -1) goto L7e2e;
	f5211(&l110, 0);
L7e2e:
	close(g4fea);
L7e36:
	g4fc8 = (unsigned char)g3591;
	if (!(g4fc6 & 4096)) goto L7e5f;
	if (g3594 != 1) goto L7e5f;
	if (g0846) goto L7e57;
	f36b8();
L7e57:
	g0846 = 1;
	goto L7e6f;
L7e5f:
	if (g0846 != 1) goto L7e69;
	f36c4();
L7e69:
	g0846 = 0;
L7e6f:
	f0bd1();
	f02d2(l6, 0);
	f09fb(g3342, 0);
	f0a42(g4fb2, 0);
}
