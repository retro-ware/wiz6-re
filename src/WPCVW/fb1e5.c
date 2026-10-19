#asm
	extrn f033f_:near
#endasm
extern char g00cc[];
extern char g442c[];
extern char g442d[];
extern char g442e[];
extern char g44f8[];
extern char g44fa[];
extern char g4548[];
extern char g454a[];
extern char g4594[];
extern int g4428[];
extern int g567e[];
extern int g57fc;
fb1e5(p4, p6)
char *p4;
{
	int l2;
	int l4;
	int l6;
	int l8;
	char x8[80];
	int l90;
	char x90[72];
	int l164;
	char x164[12];
	int l178;
	int l180;
	register int rsi;
	register int rdi;
	rsi = f518e(p6);
	rdi = &l178;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh
	db 0d8h,08ah,087h,049h,045h,098h,003h,086h,04eh,0ffh,089h,086h,04ch,0ffh
#endasm
	f030b(p4, 21, 5);
	fb195(217, p4, 15);
	p4[6]++;
	f05a5(p4, (g4548[(432 * p6)] + l180), 2, 4);
	f24e9(p4, 20882, 15);
	if (l180 < 0) goto Lb2b0;
	l90 = (l180 == 0 ? 9 : 4);
	f22b7(p4, 43, l90);
	f05a5(p4, l180, 1, l90);
	goto Lb2c5;
Lb2b0:
	f05a5(p4, l180, 2, 6);
Lb2c5:
	f22b7(p4, 41, 15);
	f030b(p4, 21, 6);
	l2 = 0;
Lb2ec:
	f23e3(p4, 32, 3);
	if ((unsigned char)g44fa[((432 * p6) + l2)] == 255) goto Lb33a;
	l6 = (unsigned char)g442d[((432 * p6) + ((unsigned char)g44fa[((432 * p6) + l2)] << 3))];
	goto Lb34c;
Lb33a:
	l6 = (l2 != 0 ? (l2 + 120) : 120);
Lb34c:
	f23e3(p4, (unsigned char)((l6 + 1)), 4);
	if (l2 >= 5) goto Lb379;
	f23e3(p4, 28, 1);
	goto Lb38a;
Lb379:
	f23e3(p4, 32, 3);
Lb38a:
	l2++;
	if (l2 < 6) goto Lb2ec;
	l90 = 11;
	l2 = 0;
Lb3a2:
	l8 = (l2 != 0 ? (g454a[(432 * p6)] + l180) : 0);
	f030b(p4, ((l2 * 3) + 21), 7);
	f05a5(p4, (g454a[((432 * p6) + l2)] + l8), 3, ((l90 + 8) % 16));
	l90 = 15;
	l2++;
	if (l2 < 6) goto Lb3a2;
	l2 = 0;
	goto Lb5c8;
Lb421:
	if (g57fc) goto Lb469;
	f0882(1, &l164, *(int *)((char *)g4428 + ((432 * p6) + (l2 << 3))), 0);
	strcpy(((l2 << 4) + 21982), &l164);
Lb469:
	l6 = 32;
	l90 = 9;
	l4 = 0;
Lb478:
	if ((unsigned char)g44f8[((432 * p6) + l4)] != l2) goto Lb4ac;
	l6 = 23;
	l90 = (l4 >= 2 ? (l4 == 2 ? 3 : 7) : 6);
Lb4ac:
	l4++;
	if (l4 < 8) goto Lb478;
	f030b(p4, 21, (l2 + 9));
	f22b7(p4, (unsigned char)*(char *)&l6, 4);
	g567e[l2] = l90;
	f24e9(p4, ((l2 << 4) + 21982), g567e[l2]);
	f0396(p4, 34, 0);
	if (g00cc[(unsigned char)g442c[((432 * p6) + (l2 << 3))]] != 1) goto Lb576;
	f030b(p4, 34, (l2 + 9));
	f05a5(p4, (unsigned char)g442e[((432 * p6) + (l2 << 3))], 3, 1);
	goto Lb587;
Lb576:
	f0396(p4, 37, 0);
Lb587:
	f030b(p4, 38, (l2 + 9));
	f23e3(p4, (unsigned char)(((unsigned char)g442d[((432 * p6) + (l2 << 3))] + 1)), 4);
	l2++;
Lb5c8:
	if ((unsigned char)g4594[(432 * p6)] > l2) goto Lb421;
#asm
lb5de:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,080h,0bfh,094h,045h,00ah,073h,01fh,0b8h
	db 012h,000h,050h,0b8h,024h,000h,050h,08ah,087h,094h,045h,02ah,0e4h,005h,009h,000h
	db 050h,0b8h,015h,000h,050h,0ffh,076h,004h
	call f033f_
	db 083h,0c4h,00ah
#endasm
Lb60c:
	l2 = (unsigned char)g4594[(432 * p6)];
	goto Lb647;
Lb61f:
	f030b(p4, 38, (l2 + 9));
	f23e3(p4, 32, 3);
	l2++;
Lb647:
	if (l2 < 10) goto Lb61f;
	g57fc = 1;
}
