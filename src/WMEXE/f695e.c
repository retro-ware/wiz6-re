extern char g038e[];
extern char g038f[];
extern char g3746[];
extern char g375a[];
extern int g3644;
extern int g4358;
extern int g43a8[];
extern int g50fe[];
extern int g5114;
f695e(p4, p6, p8, p10, p12, p14, p16)
{
	int l18[9];
	int l20;
	int l22;
	int l24;
	int l26;
	char l38[12];
	register int rsi;
	if (p4) goto L6989;
	rsi = (44 * p6);
	if (((char *)g43a8[p4] + rsi)[31]) goto L6989;
	return;
L6989:
	f773a();
	l18[8] = (p8 >= 5 ? (p8 < 13 ? 8 : 9) : 7);
#asm
	db 08bh,046h,008h,050h,03dh,005h,000h,058h,07ch,010h,03dh,00dh,000h,07dh,005h,005h
	db 0fbh,0ffh,0ebh,006h
#endasm
L69b8:
	;
#asm
l69b8:
	db 08bh,046h,008h,005h,0f3h,0ffh
#endasm
L69be:
	;
#asm
l69be:
	db 089h,046h,0f4h
#endasm
	if (!p4) goto L69cf;
#asm
	db 08bh,046h,004h,03dh,006h,000h,075h,041h
#endasm
L69cf:
	l26 = 0;
	l18[4] = 0;
	l18[0] = 2;
	l18[1] = 1;
	l18[2] = 0;
	if ((p6 % 2)) goto L6a03;
	l24 = 0;
	l18[5] = 0;
	goto L6a0d;
L6a03:
	l24 = 1;
	l18[5] = 1;
L6a0d:
	goto L6a98;
L6a10:
	l26 = 1;
	l18[4] = -1;
	l18[0] = 0;
	l18[1] = 1;
	l18[2] = 2;
	if (p14 == -1) goto L6a3e;
	if ((p14 % 2)) goto L6a6c;
L6a3e:
	l24 = 0;
#asm
	db 08bh,046h,008h,03dh,006h,000h,074h,014h,03dh,008h,000h,074h,00fh,03dh,00ah,000h
	db 07ch,005h,03dh,00dh,000h,07eh,005h
#endasm
L6a5a:
	;
#asm
l6a5a:
	db 03dh,00fh,000h,075h,005h
#endasm
L6a5f:
	;
#asm
l6a5f:
	db 0b8h,000h,000h,0ebh,003h
#endasm
L6a64:
	;
#asm
l6a64:
	db 0b8h,001h,000h
#endasm
L6a67:
	;
#asm
l6a67:
	db 089h,046h,0f8h
#endasm
	goto L6a98;
L6a6c:
	l24 = 1;
#asm
	db 08bh,046h,008h,03dh,006h,000h,074h,014h,03dh,008h,000h,074h,00fh,03dh,00ah,000h
	db 07ch,005h,03dh,00dh,000h,07eh,005h
#endasm
L6a88:
	;
#asm
l6a88:
	db 03dh,00fh,000h,075h,005h
#endasm
L6a8d:
	;
#asm
l6a8d:
	db 0b8h,001h,000h,0ebh,003h
#endasm
L6a92:
	;
#asm
l6a92:
	db 0b8h,000h,000h
#endasm
L6a95:
	;
#asm
l6a95:
	db 089h,046h,0f8h
#endasm
L6a98:
	f0aaa(g5114);
	l18[7] = (unsigned char)g3746[((314 * l18[8]) + l18[3])];
	l18[6] = 0;
L6ab9:
	l22 = 42;
	l20 = ((unsigned char)g375a[((314 * l18[8]) + (l18[7] << 2))] + l18[l18[6]]);
	l38[0] = *(char *)&l20;
	l38[(0 + 1)] = 0;
	g4358 = -2;
	f765a();
	f6239(l22, l18[8], (unsigned char)g038e[((((p8 * 24) + (l26 * 12)) + (l24 * 6)) + (l18[6] << 1))], (unsigned char)g038f[((((p8 * 24) + (l26 * 12)) + (l24 * 6)) + (l18[6] << 1))], 72, 248, l18[5], l38);
L6b5c:
	f765a();
	if (g4358 != -2) goto L6b5c;
	l18[6]++;
	if (l18[6] < 3) goto L6ab9;
	if (p16 != 1) goto L6ba0;
	g50fe[(p10 * 5)] = l18[4];
	g3644 = 0;
	f774b(2);
L6ba0:
	return;
}
