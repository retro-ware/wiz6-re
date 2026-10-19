extern char g4326;
extern char g4330;
extern int g3646;
extern int g4fa2;
extern int g4fa4;
extern int g4fbc;
extern int g506a;
extern int g50c6[];
extern int g50f8;
extern int g50fa;
extern int g50fc;
extern int g50fe[];
extern int g5132[];
extern int g5168;
extern int g516a;
extern int g5178;
extern int g517a[];
extern int g51ac;
extern int g51ae;
extern int g51b0;
extern int g51b2;
extern int g51b4;
f5be2(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	l8 = (p4 > 3 ? 5 : 3);
	l10 = (p4 > 3 ? 5 : 3);
	l12 = (p4 > 3 ? 2 : 1);
	g51ac = (30 - (l8 << 1));
	g51ae = 5;
	g5178 = ((p4 != 1) && (p4 != 4) ? 1 : -1);
	g50fc = ((p4 != 1) && (p4 != 4) ? 5 : -1);
#asm
	db 08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5c63:
	;
#asm
l5c63:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5c68:
	;
#asm
l5c68:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5c75:
	;
#asm
l5c75:
	db 0b8h,005h,000h,0ebh,003h
#endasm
L5c7a:
	;
#asm
l5c7a:
	db 0b8h,006h,000h
#endasm
L5c7d:
	;
#asm
l5c7d:
	db 0a3h,06ch,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5c8d:
	;
#asm
l5c8d:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5c92:
	;
#asm
l5c92:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5c9f:
	;
#asm
l5c9f:
	db 0b8h,005h,000h,0ebh,003h
#endasm
L5ca4:
	;
#asm
l5ca4:
	db 0b8h,007h,000h
#endasm
L5ca7:
	;
#asm
l5ca7:
	db 0a3h,06eh,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5cb7:
	;
#asm
l5cb7:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5cbc:
	;
#asm
l5cbc:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5cc9:
	;
#asm
l5cc9:
	db 0b8h,005h,000h,0ebh,003h
#endasm
L5cce:
	;
#asm
l5cce:
	db 0b8h,008h,000h
#endasm
L5cd1:
	;
#asm
l5cd1:
	db 0a3h,070h,051h,08bh,046h,004h,03dh,001h,000h,074h,00ah,03dh,004h,000h,074h,005h
	db 0b8h,009h,000h,0ebh,003h
#endasm
L5ce6:
	;
#asm
l5ce6:
	db 0b8h,0ffh,0ffh
#endasm
L5ce9:
	;
#asm
l5ce9:
	db 0a3h,030h,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5cf9:
	;
#asm
l5cf9:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5cfe:
	;
#asm
l5cfe:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5d0b:
	;
#asm
l5d0b:
	db 0b8h,009h,000h,0ebh,003h
#endasm
L5d10:
	;
#asm
l5d10:
	db 0b8h,00ah,000h
#endasm
L5d13:
	;
#asm
l5d13:
	db 0a3h,072h,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5d23:
	;
#asm
l5d23:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5d28:
	;
#asm
l5d28:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5d35:
	;
#asm
l5d35:
	db 0b8h,009h,000h,0ebh,003h
#endasm
L5d3a:
	;
#asm
l5d3a:
	db 0b8h,00bh,000h
#endasm
L5d3d:
	;
#asm
l5d3d:
	db 0a3h,074h,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5d4d:
	;
#asm
l5d4d:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5d52:
	;
#asm
l5d52:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5d5f:
	;
#asm
l5d5f:
	db 0b8h,009h,000h,0ebh,003h
#endasm
L5d64:
	;
#asm
l5d64:
	db 0b8h,00ch,000h
#endasm
L5d67:
	;
#asm
l5d67:
	db 0a3h,076h,051h
#endasm
	g51b2 = 13;
	g50fa = 14;
	g50f8 = 15;
	g5168 = 16;
#asm
	db 08bh,046h,004h,03dh,003h,000h,074h,005h,03dh,006h,000h,075h,005h
#endasm
L5d8f:
	;
#asm
l5d8f:
	db 0b8h,011h,000h,0ebh,003h
#endasm
L5d94:
	;
#asm
l5d94:
	db 0b8h,00dh,000h
#endasm
L5d97:
	;
#asm
l5d97:
	db 0a3h,064h,051h
#endasm
	if (p4 == 3) goto L5da6;
#asm
	db 083h,07eh,004h,006h,075h,005h
#endasm
L5da6:
	;
#asm
l5da6:
	db 0b8h,012h,000h,0ebh,003h
l5dab:
	db 0b8h,00dh,000h
l5dae:
	db 0a3h,066h,051h
#endasm
	g51b0 = 19;
	g516a = g5168;
	g51b4 = 20;
	l2 = 0;
L5dc8:
	l4 = 0;
L5dcd:
	*(int *)((char *)g50c6 + ((l2 * 10) + (l4 << 1))) = g51b2;
	*(int *)((char *)g50fe + ((l2 * 10) + (l4 << 1))) = -1;
	*(int *)((char *)g5132 + ((l2 * 10) + (l4 << 1))) = -1;
	*(int *)((char *)g517a + ((l2 * 10) + (l4 << 1))) = -1;
	l4++;
	if (l4 < 5) goto L5dcd;
	l2++;
	if (l2 < 5) goto L5dc8;
	f5273(0, 4);
	l6 = f011a(g51ac, g51ae, (l8 << 1), (l10 << 1), 20, -1, 2, 0);
	f0bd1();
	f280c();
	l14 = 1;
L5e5c:
	g3646 = ((g3646 + 1) % 2);
	f95f3();
	f3694(l6, 0);
	f5b4f(l8, l10);
	l4 = 0;
	goto L5ec2;
L5e8d:
	l2 = 0;
	goto L5eb7;
L5e94:
	f546a(((g4fa4 + l2) - l12), ((g4fa2 - l4) + l12), l2, l4);
	l2++;
L5eb7:
	if (l2 < l8) goto L5e94;
	l4++;
L5ec2:
	if (l4 < l10) goto L5e8d;
	l4 = 0;
	goto L5ef2;
L5ed1:
	l2 = 0;
	goto L5ee7;
L5ed8:
	f581d(l2, l4);
	l2++;
L5ee7:
	if (l2 < l8) goto L5ed8;
	l4++;
L5ef2:
	if (l4 < l10) goto L5ed1;
	l4 = 0;
	goto L5f3c;
L5f01:
	l2 = 0;
	goto L5f31;
L5f08:
	f59c4(l2, l4, *(int *)((char *)g50c6 + ((l2 * 10) + (l4 << 1))));
	l2++;
L5f31:
	if (l2 < l8) goto L5f08;
	l4++;
L5f3c:
	if (l4 < l10) goto L5f01;
	l4 = 0;
	goto L5f8e;
L5f4b:
	l2 = 0;
	goto L5f83;
L5f52:
	f5a2f(l2, l4, *(int *)((char *)g50fe + ((l2 * 10) + (l4 << 1))), *(int *)((char *)g5132 + ((l2 * 10) + (l4 << 1))), *(int *)((char *)g517a + ((l2 * 10) + (l4 << 1))));
	l2++;
L5f83:
	if (l2 < l8) goto L5f52;
	l4++;
L5f8e:
	if (l4 < l10) goto L5f4b;
	f58f8(l12, l12, g51b4);
	f36a0(g4fbc);
	if (!f0c42()) goto L5fba;
	l14 = 0;
L5fba:
	if (!f2643(1)) goto L5fd7;
	if ((char)f2724(1) != 13) goto L5fd7;
	l14 = 0;
L5fd7:
	if (l14) goto L5e5c;
	f02d2(l6, 0);
	f9e83();
	g506a = 0;
	g4330 = 255;
	g4326 = 0;
}
