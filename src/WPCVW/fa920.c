extern char g3592;
extern char g4584[];
extern int g3044;
extern int g43d0[];
extern int g4fc4;
fa920(p4, p6)
char *p4;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[18];
	int l30;
	l8 = 0;
	l10 = g3044;
	l10 = ((g3592 == 5) && (l10 > 0) ? (l10 + 2) : l10);
	f0c82(&l30, 13632, 58);
	if (!l10) goto La977;
	l8 = 1;
	f0d26(&l30, 0, 1, 1);
La977:
	l6 = f011a(20, 4, 20, 16, 30, -1, 0, 0);
	f32be(l6, 32, 3, 0);
	f3118(l6);
	f9fa8(l6);
	f31d1(l6);
	f32be(p4, 32, 3, 0);
	f2a63();
	f030b(p4, 9, 1);
	f083f(1112, p4, 18);
	f030b(p4, 12, 2);
	f083f(1113, p4, 18);
	l4 = -1;
	f0c16(0, ((unsigned char)p4[2] + 9), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 9), ((unsigned char)p4[3] + 1));
	f0c16(1, ((unsigned char)p4[2] + 10), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 10), ((unsigned char)p4[3] + 1));
	f0c16(2, ((unsigned char)p4[2] + 18), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + 18), ((unsigned char)p4[3] + 2));
	f0c16(3, 255, 0, 0, 0);
Laac5:
	if ((unsigned char)g4584[(432 * p6)] == l4) goto Lab09;
	fa78d((unsigned char)g4584[(432 * p6)], g43d0[p6]);
	l4 = (unsigned char)g4584[(432 * p6)];
Lab09:
	fa8ab(l6, p6, 8, 6);
	l2 = f8891(21822, 13720);
	if (g4fc4 != 1) goto Lab5b;
	goto Lab4c;
	l2 = 1;
#asm
	db 0ebh,01dh
#endasm
	l2 = 3;
#asm
	db 0ebh,016h
#endasm
	l2 = 5;
#asm
	db 0ebh,00fh
#endasm
Lab4c:
	;
#asm
lab4c:
	db 03dh,000h,000h,074h,0e6h,03dh,001h,000h,074h,0e8h,03dh,002h,000h,074h,0eah
#endasm
Lab5b:
	switch (l2) {
case 1:
	g4584[(432 * p6)] = (char)(((unsigned char)g4584[(432 * p6)] + 41) % 42);
	goto Laba6;
case 3:
	g4584[(432 * p6)] = (char)(((unsigned char)g4584[(432 * p6)] + 1) % 42);
	goto Laba6;
	}
Laba6:
	if (l2 != 5) goto Laac5;
	f02d2(l6, 0);
	if (l8 != 1) goto Labd4;
	f0d26(&l30, l10, 1, 1);
Labd4:
	;
}
