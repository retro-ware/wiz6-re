#asm
	extrn $ldv:near
	extrn f09e2_:near
	extrn f28af_:near
	extrn f723e_:near
	extrn f7254_:near
	extrn f774b_:near
	extrn fb03c_:near
	extrn fb934_:near
#endasm
extern char *g43b6;
extern char g019d[];
extern char g433e[];
extern char g4348[];
extern char g44f8[];
extern char g4514[];
extern char g4515[];
extern char g4518[];
extern char g4519[];
extern char g4586[];
extern char g4587[];
extern char g4591[];
extern char g4592[];
extern char g4593[];
extern char g505c;
extern int g363a;
extern int g3644;
extern int g435c;
extern int g435e;
extern int g4362[];
extern int g43a8[];
extern int g43cc;
extern int g4fb6;
extern int g4fc8;
extern int g4fce;
extern int g50fc;
extern int g50fe[];
extern int g5114;
extern int g5118;
fc66e()
{
	char *l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[2];
	int l14;
	int l16;
	register int rsi;
	g43b6[220] = 0;
	g5114 = 6;
	g50fc = 0;
	g5118 = 0;
#asm
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0c8h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,087h,0a8h,043h,003h,0c1h,089h,046h,0feh,08bh,0d8h,080h,07fh,022h,002h,073h
	db 00ch,080h,07fh,011h,000h,077h,006h,080h,07fh,010h,000h,076h,005h
#endasm
	return;
Lc6c2:
	f02f0(g4fb6, 1);
	l4 = 0;
	l6 = 0;
	l8 = 0;
	if (l4) goto Lc709;
	if ((unsigned)l2[15] <= 0) goto Lc709;
	if (f09e2(100) <= 80) goto Lc709;
	if (l2[30] == 7) goto Lc709;
	l4 = 3209;
Lc709:
	if (l4) goto Lc74a;
	if ((unsigned)l2[21] <= 0) goto Lc74a;
	if (f09e2(100) <= 40) goto Lc74a;
	l4 = (f09e2(3) + 3205);
	if (f09e2(100) <= 80) goto Lc74a;
	l4 = 3208;
	l6 = 1;
Lc74a:
	if (l4) goto Lc770;
	if ((unsigned)l2[20] <= 0) goto Lc770;
	l4 = 3210;
	if (f09e2(100) <= 25) goto Lc770;
	l6 = 1;
Lc770:
	if (l4) goto Lc796;
	if ((unsigned)l2[18] <= 0) goto Lc796;
	if (f09e2(100) <= 80) goto Lc796;
	l4 = 3204;
	l6 = 0;
Lc796:
	if (l4) goto Lc7bc;
	if ((unsigned)l2[22] <= 0) goto Lc7bc;
	if (f09e2(100) <= 75) goto Lc7bc;
	l4 = 3203;
	l6 = 0;
Lc7bc:
	;
#asm
lc7bc:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0dch,000h,02ah
	db 0e4h,0a9h,004h,000h,074h,057h
#endasm
	rsi = ((unsigned char)l2[32] * 44);
	if ((unsigned)((char *)g43a8[(unsigned char)l2[31]] + rsi)[20] <= 0) goto Lc829;
	l4 = 3218;
#asm
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09ah,001h,02ah
	db 0e4h,03dh,097h,000h,075h,015h
#endasm
	l2[43] = 3;
	l2[36] = 1;
	l8 = 2;
	goto Lc829;
Lc824:
	l8 = 1;
Lc829:
	if (l4 <= 0) goto Lcb02;
	f774b(2);
	f6ba3(20492, g435e, g435c);
	f075b(l4, 20652);
	g505c = 0;
	f6d32(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, 0);
	if (l8 <= 0) goto Lc9a0;
	rsi = (44 * g435c);
#asm
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,078h,02ah,0ffh,074h
	db 072h,08ah,040h,02ah,098h,0b9h,00ah,000h,099h,0f7h,0f9h,089h,046h,0f2h,08ah,040h
	db 02ah,098h,099h,0f7h,0f9h,089h,056h,0f0h
#endasm
	g3644 = 0;
	*(int *)((char *)g50fe + ((l14 * 10) + (l16 << 1))) = 1;
	f773a();
	*(int *)((char *)g4362 + ((l14 * 10) + (l16 << 1))) = 0;
	g4348[((l14 * 5) + l16)] = 0;
	g433e[((l14 * 5) + l16)] = 0;
Lc91b:
	rsi = (44 * g435c);
	((char *)g43a8[g435e] + rsi)[42] = 255;
	if (l8 != 1) goto Lc96a;
	rsi = (44 * g435c);
	((char *)g43a8[g435e] + rsi)[34] = 3;
	rsi = (44 * g435c);
	*(int *)(((char *)g43a8[g435e] + rsi) + 2) = 0;
Lc96a:
	l14 = 0;
Lc96f:
	;
#asm
lc96f:
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,003h,046h,0f2h,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,018h,000h
#endasm
	l14++;
	if (l14 < 4) goto Lc96f;
	f774b(g4fc8);
	return;
Lc9a0:
	f774b((g4fc8 / 2));
	if (l6) goto Lc9bd;
	l2[16]++;
	return;
Lc9bd:
	l2[30] = 0;
	l2[33] = 0;
	*(int *)(l2 + 12) = -1;
	*(int *)(l2 + 10) = 255;
	if (g435e) goto Lca10;
	l4 = 7;
	if (f28af(((432 * g435c) + 17639), l4) != 1) goto Lca09;
	*(int *)(l2 + 10) = l4;
Lca09:
	l4--;
#asm
	db 07dh,0d9h
#endasm
	goto Lca40;
Lca10:
	l4 = 7;
#asm
lca15:
	db 0ffh,076h,0fch,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h,043h,005h,053h
	db 000h,050h
	call f28af_
	db 083h,0c4h,004h,03dh,001h,000h,075h,009h
#endasm
	*(int *)(l2 + 10) = l4;
Lca3b:
	l4--;
#asm
	db 07dh,0d5h
#endasm
Lca40:
	if (*(int *)(l2 + 10) != 255) goto Lca4f;
	*(int *)(l2 + 10) = 8;
Lca4f:
	l2[28] = 0;
	l2[31] = *(char *)&g435e;
	l2[32] = (char)f09e2((unsigned char)g019d[g43a8[g435e]]);
	f02f0(g4fb6, 1);
	f774b(2);
	f6ba3(20492, g435e, g435c);
	f075b(3211, 20652);
	g505c = 0;
	f6d32(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, 0);
	f0aaa(0);
	f774b((g4fc8 / 2));
	f02f0(g4fb6, 1);
Lcb02:
	rsi = ((unsigned char)l2[32] * 44);
	if ((unsigned)((char *)g43a8[(unsigned char)l2[31]] + rsi)[34] >= 3) goto Lcb2a;
	if (!((char *)g43a8[(unsigned char)l2[31]] + rsi)[43]) goto Lcb60;
Lcb2a:
	if (l2[31]) goto Lcb45;
	l2[32] = (char)fc4e7((unsigned char)l2[32]);
	goto Lcb60;
Lcb45:
	l2[32] = (char)fc546((unsigned char)l2[31], (unsigned char)l2[32]);
Lcb60:
	if (l6 != 1) goto Lcb7a;
	if ((unsigned char)l2[32] != g435c) goto Lcb7a;
	l2[16]++;
	return;
Lcb7a:
	if (g435e) goto Lcc9f;
	g43b6[134] = g4514[(432 * g435c)];
	g43b6[135] = g4515[(432 * g435c)];
	g43b6[136] = g4518[(432 * g435c)];
	g43b6[137] = g4519[(432 * g435c)];
	movmem(((432 * g435c) + 17722), (g43b6 + 148), 14);
	movmem(((432 * g435c) + 17736), (g43b6 + 190), 8);
	g43b6[190] = (char)((g43b6[190] + g43b6[191]) + g43b6[192]);
	g43b6[211] = g4593[(432 * g435c)];
	g43b6[213] = g4592[(432 * g435c)];
	g43b6[212] = g4591[(432 * g435c)];
	g43b6[214] = g4586[(432 * g435c)];
	g43b6[208] = g4587[(432 * g435c)];
	goto Lce09;
Lcc9f:
	if (l2[31]) goto Lce09;
	g43b6[134] = g4514[((unsigned char)l2[32] * 432)];
	g43b6[135] = g4515[((unsigned char)l2[32] * 432)];
	g43b6[136] = g4518[((unsigned char)l2[32] * 432)];
	g43b6[137] = g4519[((unsigned char)l2[32] * 432)];
	movmem((((unsigned char)l2[32] * 432) + 17722), (g43b6 + 148), 14);
	movmem((((unsigned char)l2[32] * 432) + 17736), (g43b6 + 190), 8);
	l4 = 0;
Lcd51:
	if (l4 == 1) goto Lcd83;
	if (l4 == 2) goto Lcd83;
	rsi = l4;
	(g43b6 + rsi)[190] = (char)(((g43b6 + rsi)[190] + g43b6[191]) + g43b6[192]);
Lcd83:
	l4++;
	if (l4 < 8) goto Lcd51;
	g43b6[211] = g4593[((unsigned char)l2[32] * 432)];
	g43b6[213] = g4592[((unsigned char)l2[32] * 432)];
	g43b6[212] = g4591[((unsigned char)l2[32] * 432)];
	g43b6[214] = g4586[((unsigned char)l2[32] * 432)];
	g43b6[208] = g4587[((unsigned char)l2[32] * 432)];
Lce09:
	;
#asm
lce09:
	db 08bh,05eh,0feh,08ah,047h,01eh,02ah,0e4h,0e9h,043h,002h
#endasm
	rsi = ((unsigned char)l2[32] * 44);
	if ((unsigned)((char *)g43a8[(unsigned char)l2[31]] + rsi)[34] >= 3) goto Lcee7;
	if (((char *)g43a8[(unsigned char)l2[31]] + rsi)[43]) goto Lcee7;
	rsi = ((unsigned char)l2[33] % 2);
	l10 = (unsigned char)(l2 + rsi)[28];
	if (g435e) goto Lce81;
	if ((unsigned char)g44f8[((432 * g435c) + l10)] != 255) goto Lce81;
	l10 = 0;
Lce81:
	;
#asm
lce81:
	db 08bh,05eh,0feh,08ah,047h,021h,02ah,0e4h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h
	db 0d1h,0e0h,08bh,0f0h,08bh,040h,00ah,089h,046h,0f4h,051h
	call f774b_
	db 059h,0ffh,076h,0f4h,0ffh,076h,0f6h,0ffh,076h,0feh
	call f723e_
	db 083h,0c4h,006h,08bh,046h,0f4h,03dh,003h,000h,074h,005h,03dh,006h,000h,075h,017h
#endasm
Lcebc:
	f7254(l2, (f09e2(4) + 3));
	goto Lcee7;
Lced3:
	f7254(l2, (f09e2(3) + 2));
Lcee7:
	goto Ld064;
	f774b(2);
#asm
	db 0ffh,076h,0feh
	call fb03c_
	db 059h,050h,0ffh,076h,0feh
	call f7254_
	db 083h,0c4h,004h,0e9h,05eh,001h
#endasm
	f774b(2);
#asm
	db 0ffh,076h,0feh
	call fb934_
	db 059h,050h,0ffh,076h,0feh
	call f7254_
	db 083h,0c4h,004h,0e9h,042h,001h
#endasm
	if (*(int *)(l2 + 10) != 3) goto Lcf5e;
#asm
	db 08bh,047h,008h,0bbh,005h,000h,0f7h,0ebh,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0fch,050h
	call f09e2_
	db 059h,08bh,05eh,0feh,08bh,04fh,006h,003h,0c1h,040h,089h,047h,006h,08bh,047h,006h
	db 03bh,047h,008h,07eh,006h,08bh,047h,008h,089h,047h,006h
#endasm
Lcf5e:
	goto Ld064;
	f774b(2);
	fc012();
	f7254(l2, (f09e2(4) + 3));
	f773a();
	f02f0(g4fb6, 0);
	g363a = 17;
	g4fce = 13;
	g43cc = g435c;
	return;
	f774b(2);
	fb44d(l2);
#asm
	db 0b8h,003h,000h,050h
	call f09e2_
	db 059h,040h,050h,0ffh,076h,0feh
	call f7254_
	db 083h,0c4h,004h,0e9h,098h,000h
#endasm
	f774b(2);
	fc3ee(g435c, *(int *)(l2 + 10));
#asm
	db 0b8h,004h,000h,050h
	call f09e2_
	db 059h,040h,040h,040h,050h,0ffh,076h,0feh
	call f7254_
	db 083h,0c4h,004h,0ebh,069h
#endasm
	f774b(2);
	fc064(l2);
#asm
	db 0b8h,003h,000h,050h
	call f09e2_
	db 059h,040h,050h,0ffh,076h,0feh
	call f7254_
	db 083h,0c4h,004h,0ebh,045h
#endasm
	f774b(2);
	fc1e4(l2);
#asm
	db 0b8h,005h,000h,050h
	call f09e2_
	db 059h,005h,005h,000h,050h,0ffh,076h,0feh
	call f7254_
	db 083h,0c4h,004h,0ebh,01fh,014h,0ceh,022h,0cfh,061h,0cfh,0eah,0ceh,0a7h,0cfh,0cch
	db 0cfh,0fbh,0cfh,01fh,0d0h,006h,0cfh
ld057:
	db 03dh,009h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,045h,0d0h
#endasm
Ld064:
	if (g435e) goto Ld079;
	f7353(g435c, 0);
Ld079:
	return;
}
