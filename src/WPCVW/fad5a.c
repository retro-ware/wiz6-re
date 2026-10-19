#asm
	extrn f6317_:near
	extrn f86d1_:near
	extrn f929a_:near
	extrn f96a2_:near
	extrn f9d8a_:near
	extrn fac83_:near
#endasm
extern char g442f[];
extern char g4594[];
extern int g363a;
extern int g43ca;
extern int g43cc;
extern int g43ce;
extern int g43fc[];
extern int g4fb2;
extern int g4fce;
extern int g5752;
extern int g57fc;
fad5a(p4)
{
	int l2;
	int l4;
	int l6;
	char x6[4];
	int l12;
	char x12[2];
	int l16;
	int l36[10];
	int l38;
	register int rsi;
	g363a = g4fce;
	f075b(300, 21822);
	g5752 = f011a(20, 4, 20, 16, 26, -1, 0, 0);
	f32be(g5752, 32, 3, 0);
	f3118(g5752);
	f9fa8(g5752);
	l2 = f011a(0, 0, 40, 20, 20, -1, 0, 0);
	l4 = f011a(0, 20, 40, 4, 15, -1, 0, 0);
	f31d1(g4fb2);
	f09fb(g4fb2, 0);
	g57fc = 0;
Lae23:
	f93f8(l2, l4, p4);
	l38 = 1;
	rsi = 0;
Lae3a:
	l36[rsi] = 1;
	rsi++;
	if (rsi <= 11) goto Lae3a;
	if (g4fce != 4) goto Lae8f;
	rsi = 0;
Lae57:
	l36[rsi] = 0;
	rsi++;
	if (rsi < 11) goto Lae57;
	l36[0] = 1;
	l36[3] = 1;
	l36[8] = 1;
	l16 = 1;
	l36[1] = 1;
	l36[4] = 1;
	l38 = 0;
	goto Laecf;
Lae8f:
	if (g4fce != 13) goto Laecf;
	rsi = 0;
Lae99:
	l36[rsi] = 0;
	rsi++;
	if (rsi < 11) goto Lae99;
	l36[0] = 1;
	l36[7] = 1;
	l36[3] = 1;
	l36[8] = 1;
	l36[1] = 1;
	l36[4] = 1;
	l38 = 0;
Laecf:
	if (g43ce >= 2) goto Laee0;
	l16 = 0;
	l36[2] = 0;
Laee0:
	if (g4594[(432 * p4)]) goto Laefe;
	l36[3] = 0;
	l36[7] = 0;
	l36[6] = 0;
Laefe:
	if ((unsigned)g4594[(432 * p4)] >= 2) goto Laf0a;
	l36[5] = 0;
Laf0a:
	if (*(long *)((char *)g43fc + (432 * p4)) != 0L) goto Laf24;
	if (g4594[(432 * p4)]) goto Laf24;
	l36[2] = 0;
Laf24:
	if (fa075(p4)) goto Laf39;
	l36[1] = 0;
	l36[6] = 0;
Laf39:
	l12 = -1;
	f280c();
	l6 = rename_test_fn(l4, 301, l36, 2, 1, 6, 2, 5, f5be5(l36, 11));
#asm
	db 0e9h,089h,001h
#endasm
	fd399(l2, l4, p4);
	goto Lb111;
#asm
	db 0ffh,076h,0dah,0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call f86d1_
	db 083h,0c4h,008h,0e9h,06fh,001h,0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call f96a2_
	db 083h,0c4h,006h,0e9h,05dh,001h
#endasm
	g43ca = f5fac(l2, l4, 450, p4, 0);
	if (g43ca == -1) goto Lafe7;
	fb6c4(l4, p4, g43ca, 0);
Lafe7:
	goto Lb111;
	g43ca = f5fac(l2, l4, 402, p4, 0);
	if (g43ca == -1) goto Lb049;
	if (((unsigned char)g442f[((432 * p4) + (g43ca << 3))] & 1)) goto Lb032;
	if (((unsigned char)g442f[((432 * p4) + (g43ca << 3))] & 2)) goto Lb032;
	if (!((unsigned char)g442f[((432 * p4) + (g43ca << 3))] & 64)) goto Lb03c;
Lb032:
	f0aaa(0);
	goto Lb049;
Lb03c:
	f5d5b(p4, g43ca);
Lb049:
	goto Lb111;
	g43ca = f5fac(l2, l4, 400, p4, 0);
	if (g43ca == -1) goto Lb07b;
	f8fbf(l2, l4, p4, g43ca);
Lb07b:
	goto Lb111;
#asm
	db 0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call f9d8a_
	db 083h,0c4h,006h,0e9h,081h,000h,0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call fac83_
	db 083h,0c4h,006h,0ebh,070h,0ffh,076h,004h,0ffh,076h,0fch,0ffh,076h,0feh
	call f6317_
	db 083h,0c4h,006h,0ebh,05fh,0ffh,076h,004h,0ffh,076h,0fch
	call f929a_
	db 083h,0c4h,004h,0ebh,051h
#endasm
	g43cc = f897d(l2, l4, 500, p4);
	if (g43cc == -1) goto Lb0e6;
	p4 = g43cc;
	g57fc = 0;
#asm
	db 0ebh,006h
#endasm
Lb0e6:
	g43cc = p4;
Lb0ec:
	goto Lb111;
#asm
	db 07bh,0afh,08dh,0afh,0a2h,0afh,0b4h,0afh,0a1h,0b0h,07eh,0b0h,04ch,0b0h,0eah,0afh
	db 0b2h,0b0h,090h,0b0h,0c0h,0b0h
lb104:
	db 03dh,00bh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0eeh,0b0h
#endasm
Lb111:
	if (l6 != 11) goto Lae23;
	f02d2(g5752, 0);
	fa0ae(l4, l2);
}
