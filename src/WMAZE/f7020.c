#asm
	extrn f3118_:near
	extrn f6cf8_:near
	extrn f6f30_:near
#endasm
extern char *g4f84;
extern char g450c[];
extern char g450d[];
extern char g4589[];
extern char g458d[];
extern int g3342;
extern int g363a;
extern int g363c;
extern int g4338;
extern int g4354;
extern int g43ce;
extern int g4404[];
extern int g4eca;
extern int g4ee8;
extern int g4f88;
extern int g4f9a;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g4faa;
extern int g4fb0;
extern int g4fce;
extern int g5032;
extern int g5034;
extern int g5036;
extern int g503c;
extern int g503e;
extern long g4f80;
f7020()
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	int l10;
	int l12;
	int l14;
	register int rsi;
	if (g4ee8 < 0) goto L7045;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,03bh,006h
	db 0e8h,04eh,07eh,003h,0a3h,0e8h,04eh
#endasm
L7045:
	if (g4fce == 23) goto L7062;
	f4735(g4f9c, g4fa0, g4f9e, 0);
L7062:
	f4e89();
	f2a63();
	g4fce = 5;
	g363a = 5;
	g503e = 1;
L707a:
	if (g5032 != 1) goto L7084;
	f98cb();
L7084:
	l10 = f28af(19976, (((g4f9c << 6) + (g4f9e << 3)) + g4fa0));
	if (l10 != 1) goto L70d9;
	*(int *)g4f84 = f467b(f46e8(g4f9c));
	g4338 = l10;
	g4354 = 0;
	g363a = 10;
	return;
L70d9:
	if (f28af(20072, (((g4f9c << 6) + (g4f9e << 3)) + g4fa0)) != 1) goto L7114;
	if (g5034 != 1) goto L7114;
	fc8eb();
	if (g363a == 5) goto L7114;
	return;
L7114:
	g4f80 += 1L;
	if ((g4f80 % 10L) == 5L) goto L713b;
	goto L71d7;
L713b:
	l4 = 0;
	goto L71cb;
L7143:
	;
#asm
l7143:
	db 0b8h,0b0h,001h,0f7h,06eh,0fch,08bh,0d8h,080h,0bfh,089h,045h,003h,072h,003h,0e9h
	db 073h,000h
#endasm
L7155:
	if (((g4f80 % 60L) / 10L) != (long)l4) goto L7187;
#asm
	db 0b8h,001h,000h,0ebh,003h
#endasm
L7187:
	;
#asm
l7187:
	db 0b8h,000h,000h
#endasm
L718a:
	;
#asm
l718a:
	db 089h,046h,0f8h
#endasm
	if (!l8) goto L71b3;
	*(int *)((char *)g4404 + (432 * l4)) -= ((unsigned char)g458d[(432 * l4)] + 1);
	if (*(int *)((char *)g4404 + (432 * l4)) >= 0) goto L71b3;
	*(int *)((char *)g4404 + (432 * l4)) = 0;
L71b3:
	f61f8(l4, 0, 0, 1, l8);
L71c8:
	l4++;
L71cb:
	if (l4 < g43ce) goto L7143;
L71d7:
	l12 = 0;
	l14 = 0;
	l4 = 0;
	goto L720e;
L71e8:
	if (g4589[(432 * l4)]) goto L71fa;
	l12++;
L71fa:
	if ((unsigned)g450c[(432 * l4)] > 0) goto L7208;
	if ((unsigned)g450d[(432 * l4)] <= 0) goto L720b;
L7208:
	l14++;
L720b:
	l4++;
L720e:
	if (l4 < g43ce) goto L71e8;
	if (l12) goto L7226;
	g363a = 8;
	return;
L7226:
	if (l14 != g43ce) goto L725f;
	if (f63f4() != 1) goto L725f;
	*(int *)g4f84 = f467b(f46e8(g4f9c));
	g4338 = 0;
	g4354 = 0;
	g363a = 10;
	return;
L725f:
	g5032 = 0;
	g5034 = 0;
	if (f09e2(1000) < 995) goto L72a0;
	*(int *)g4f84 = f467b(f46e8(g4f9c));
	g4338 = 0;
	g4354 = 0;
	g363a = 10;
	return;
L72a0:
	if (g503c != 1) goto L72b0;
	f2a63();
	g503c = 0;
L72b0:
	if (g363c == 5) goto L72c5;
	if (g363c != 12) goto L7311;
	if (g4f9c <= 8) goto L7311;
L72c5:
	if (f28af((g4faa + 1082), (((g4f9c << 6) + (g4f9e << 3)) + g4fa0)) != 1) goto L7311;
	f09fb(g3342, 1);
	f282f();
	f53e5(2023);
	g503e = 1;
	goto L735b;
L7311:
	if (g363c != 8) goto L7340;
	if (g4eca != 1) goto L7340;
	f09fb(g3342, 1);
	f282f();
	f53e5(2054);
	g503e = 1;
	goto L735b;
L7340:
	if (g503e != 1) goto L735b;
	f09fb(g3342, 1);
	g503e = 0;
L735b:
	f0c16(0, 33, 20, 34, 21);
	f0c16(1, 36, 22, 37, 23);
	f0c16(2, 32, 22, 35, 23);
	f0c16(3, 30, 22, 31, 23);
	f0c16(4, 21, 20, 27, 23);
	f0c16(5, 255, 0, 0, 0);
	l2 = f5534(20510, 13720);
#asm
	db 0e9h,0b8h,001h
#endasm
	g5036 = 0;
	f5949(0);
	f55b7(1);
	goto L75ca;
	g5036 = 0;
	if (g4f88) goto L7460;
	g4f9a = ((g4f9a + l2) % 4);
	g5032 = 1;
#asm
	db 03bh,016h,08ah,04fh,075h,017h
#endasm
	g5034 = 1;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,0a3h,0e8h
	db 04eh
#endasm
L745e:
	goto L7471;
L7460:
	f5949((l2 == 3 ? -1 : 1));
L7471:
	f55b7(1);
	goto L75ca;
	g4f88 = ((g4f88 + 1) % 2);
#asm
	db 0ffh,036h,0b0h,04fh
	call f3118_
	db 059h,083h,03eh,088h,04fh,000h,074h,003h,0e9h,07eh,000h
#endasm
L749c:
	f6f30(g4fb0, 13, 1, 5, 6, 7, 8);
	f6f30(g4fb0, 10, 3, 1, 13, 3, 14);
	f6fa3(g4fb0, 12, 3, 17);
#asm
	db 0b8h,00ch,000h,050h,0b8h,010h,000h,050h,0b8h,00ah,000h,050h,0b8h,00fh,000h,050h
	db 0b8h,003h,000h,050h,0b8h,010h,000h,050h,0ffh,036h,0b0h,04fh
	call f6f30_
	db 083h,0c4h,00eh,0ebh,07ch
#endasm
L751a:
	f6f30(g4fb0, 13, 1, 5, 6, 7, 8);
	f6f30(g4fb0, 10, 3, 1, 2, 3, 4);
	f6fa3(g4fb0, 12, 3, 25);
	f6f30(g4fb0, 16, 3, 9, 10, 11, 12);
L7596:
	f31d1(g4fb0);
	f2b19(g4fb0);
	g5032 = 1;
	goto L75ca;
#asm
	call f6cf8_
	db 0ebh,017h,005h,074h,01eh,074h,07ch,074h,01eh,074h,0aeh,075h
l75bd:
	db 03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0b3h,075h
#endasm
L75ca:
	if (g363a == 5) goto L707a;
	return;
}
