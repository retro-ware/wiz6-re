#asm
	extrn f09e2_:near
	extrn f48df_:near
	extrn f5c0f_:near
	extrn f5dbb_:near
	extrn f5edf_:near
#endasm
extern char g4514[];
extern char g4517[];
extern char g451b[];
extern char g453c[];
extern char g4545[];
extern char g4589[];
extern char g50f2;
extern char g5142;
extern int g363c;
extern int g43ce;
extern int g4400[];
extern int g4402[];
extern int g4fb6;
extern int g4fca;
extern int g50c8;
f5f49(p4, p6)
{
	char x0[78];
	int l80;
	int l82;
	f02f0(g4fb6, 0);
	f2a63();
	if (p4) goto L5f92;
	f075b(5228, &l80);
	f59e9(g4fb6, g50c8, &l80, 1, 7);
	return;
L5f92:
	;
#asm
l5f92:
	db 08bh,046h,004h,0e9h,009h,007h
#endasm
	f5edf(0, 15);
	l82 = 0;
	goto L5fc2;
L5fad:
	f5cc3(l82, (g363c + 1), 8);
	l82++;
L5fc2:
	if (l82 < g43ce) goto L5fad;
#asm
	db 0e9h,0e0h,006h
#endasm
	f5edf(0, 16);
	l82 = 0;
	goto L6004;
L5fe3:
	f5dbb(l82, 5253, 10, 3, 10, 10, 50);
	l82++;
L6004:
	if (l82 < g43ce) goto L5fe3;
#asm
	db 0e9h,09eh,006h,0b8h,0ffh,0ffh,050h,0b8h,000h,000h,050h
	call f5edf_
	db 083h,0c4h,004h,0e9h,08dh,006h
#endasm
	f5edf(p6, 6);
	f5cc3(p6, 1, 6);
#asm
	db 0b8h,032h,000h,050h,0b8h,00ah,000h,050h,0a1h,03ch,036h,040h,040h,050h,0b8h,005h
	db 000h,050h,0b8h,000h,000h,050h,0b8h,087h,014h,050h,0ffh,076h,006h
	call f5dbb_
	db 083h,0c4h,00eh,0e9h,049h,006h
#endasm
	f5edf(0, 2);
	l82 = 0;
	goto L6167;
L607b:
	if (f09e2(100) <= (unsigned char)g453c[(432 * l82)]) goto L6164;
#asm
l609c:
	db 0b8h,006h,000h,050h
	call f09e2_
	db 059h,0e9h,0b0h,000h
#endasm
	f5cc3(l82, (g363c + 1), 8);
	goto L6164;
#asm
	db 0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h,004h,000h,050h,0b8h,002h,000h
	db 050h,0b8h,086h,014h,050h,0ffh,076h,0aeh
	call f5dbb_
	db 083h,0c4h,00eh,0e9h,087h,000h,0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h
	db 002h,000h,050h,0b8h,009h,000h,050h,0b8h,084h,014h,050h,0ffh,076h,0aeh
	call f5dbb_
	db 083h,0c4h,00eh,0ebh,067h,0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h,003h
	db 000h,050h,0b8h,004h,000h,050h,0b8h,085h,014h,050h,0ffh,076h,0aeh
	call f5dbb_
	db 083h,0c4h,00eh,0ebh,047h,0b8h,003h,000h,050h,0b8h,00bh,000h,050h,0b8h,08ch,014h
	db 050h,0ffh,076h,0aeh
	call f5c0f_
	db 083h,0c4h,008h,0ebh,030h,0b8h,002h,000h,050h,0b8h,00bh,000h,050h,0b8h,08fh,014h
	db 050h,0ffh,076h,0aeh
	call f5c0f_
	db 083h,0c4h,008h,0ebh,019h,0a7h,060h,0bch,060h,0ddh,060h,0fdh,060h,01dh,061h,034h
	db 061h
l6157:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,04bh,061h
#endasm
L6164:
	l82++;
L6167:
	if (l82 < g43ce) goto L607b;
#asm
l6173:
	db 0e9h,038h,005h
#endasm
	f5edf(0, 16);
	l82 = 0;
	goto L62b0;
L618c:
	f5dbb(l82, 5265, 11, 9, 10, 10, 50);
	if (f09e2(100) <= ((unsigned char)g4545[(432 * l82)] + 75)) goto L622d;
	if ((unsigned)g4514[(432 * l82)] <= 3) goto L622d;
	if ((unsigned)g4589[(432 * l82)] >= 3) goto L622d;
	g4514[(432 * l82)]--;
	f075b(5266, &l80);
	f075b(5267, 20722);
	g5142 = 0;
	f5af6(l82, &l80, 20722, 20802, 1, 5, 5, 0);
	f48df(g4fca);
	goto L62ad;
L622d:
	if (f09e2(100) <= ((unsigned char)g4545[(432 * l82)] + 75)) goto L62ad;
	if ((unsigned)g4517[(432 * l82)] <= 3) goto L62ad;
	if ((unsigned)g4589[(432 * l82)] >= 3) goto L62ad;
	g4517[(432 * l82)]--;
	f075b(5266, &l80);
	f075b(5268, 20722);
	g5142 = 0;
	f5af6(l82, &l80, 20722, 20802, 1, 5, 5, 0);
	f48df(g4fca);
L62ad:
	l82++;
L62b0:
	if (l82 < g43ce) goto L618c;
#asm
l62bc:
	db 0e9h,0efh,003h,0b8h,010h,000h,050h,0b8h,000h,000h,050h
	call f5edf_
	db 083h,0c4h,004h,0e9h,0deh,003h
#endasm
	f5edf(0, 2);
	l82 = 0;
	goto L639a;
L62e6:
	if (f09e2(100) <= ((unsigned char)g4545[(432 * l82)] + 50)) goto L6397;
	if ((unsigned)g4589[(432 * l82)] >= 3) goto L6397;
	*(int *)((char *)g4402 + (432 * l82)) -= (f09e2(4) + 1);
	if (*(int *)((char *)g4402 + (432 * l82)) >= 1) goto L633a;
	*(int *)((char *)g4402 + (432 * l82)) = 1;
L633a:
	if (*(int *)((char *)g4400 + (432 * l82)) <= *(int *)((char *)g4402 + (432 * l82))) goto L634c;
	*(int *)((char *)g4400 + (432 * l82)) = *(int *)((char *)g4402 + (432 * l82));
L634c:
	f075b(5266, &l80);
	f075b(5269, 20722);
	g5142 = 0;
	f5af6(l82, &l80, 20722, 20802, 1, 5, 5, 0);
	f48df(g4fca);
L6397:
	l82++;
L639a:
	if (l82 < g43ce) goto L62e6;
#asm
l63a6:
	db 0e9h,005h,003h,0b8h,0ffh,0ffh,050h,0b8h,000h,000h,050h
	call f5edf_
	db 083h,0c4h,004h,0e9h,0f4h,002h
#endasm
	f5edf(0, 16);
	l82 = 0;
	goto L63e7;
L63cf:
	f5c0f(l82, 5263, 11, 2);
	l82++;
L63e7:
	if (l82 < g43ce) goto L63cf;
#asm
	db 0e9h,0bbh,002h,0b8h,004h,000h,050h,0b8h,000h,000h,050h
	call f5edf_
	db 083h,0c4h,004h,0e9h,0aah,002h
#endasm
	l82 = f09e2(g43ce);
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,080h,0bfh,089h,045h,003h,073h,0e6h
#endasm
	f5edf(l82, 4);
	f075b(5270, &l80);
	f02f0(g4fb6, 1);
	f0b7e(g4fb6, &l80, g50c8, 5);
	f0aaa(0);
	f48df(g4fca);
	f075b(5271, &l80);
	g50f2 = 0;
	g5142 = 0;
	f5af6(l82, &l80, 20722, 20802, 1, 6, 0, 0);
	f48df(g4fca);
	f5cc3(l82, (g363c + 1), 8);
	if ((unsigned)g4589[(432 * l82)] >= 3) goto L657e;
	if (f09e2(21) <= (unsigned char)g451b[(432 * l82)]) goto L657e;
	f075b(5272, &l80);
	g50f2 = 0;
	g5142 = 0;
	f5af6(l82, &l80, 20722, 20802, 1, 6, 0, 0);
	f48df(g4fca);
	f5cc3(l82, ((g363c << 1) + 2), 8);
	if (f09e2(21) <= (unsigned char)g451b[(432 * l82)]) goto L657e;
	f5c0f(l82, 5273, 11, 3);
L657e:
	f075b(5274, &l80);
	f02f0(g4fb6, 1);
	f0b7e(g4fb6, &l80, g50c8, 5);
	f0aaa(0);
#asm
	db 0ffh,036h,0cah,04fh
	call f48df_
	db 059h,0e9h,0ebh,000h
#endasm
	f5edf(0, 3);
	l82 = 0;
	goto L660b;
L65d8:
	f5cc3(l82, (g363c + 1), 8);
	f5dbb(l82, 5275, 5, 8, 10, 10, 50);
	l82++;
L660b:
	if (l82 < g43ce) goto L65d8;
#asm
	db 0e9h,097h,000h
#endasm
	f5edf(0, 0);
	l82 = 0;
	goto L663e;
L6629:
	f5cc3(l82, (g363c + 1), 10);
	l82++;
L663e:
	if (l82 < g43ce) goto L6629;
#asm
	db 0ebh,065h
#endasm
	f5edf(0, 4);
	l82 = 0;
	goto L6676;
L665e:
	f5c0f(l82, 5260, 11, 3);
	l82++;
L6676:
	if (l82 < g43ce) goto L665e;
#asm
	db 0ebh,02dh,0aeh,066h,098h,05fh,0ceh,05fh,010h,060h,021h,060h,065h,060h,076h,061h
	db 0bfh,062h,0d0h,062h,0a9h,063h,0bah,063h,0f3h,063h,004h,064h,0c3h,065h,017h,066h
	db 049h,066h
l66a1:
	db 03dh,010h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,081h,066h
#endasm
L66ae:
	return;
}
