#asm
	extrn f5f71_:near
	extrn f76b5_:near
#endasm
extern char g4fd8[];
extern int g363a;
extern int g3646;
extern int g43cc;
extern int g43ce;
extern int g43dc[];
extern int g4fb2;
extern int g4fb8;
extern int g4fba;
extern int g4fce;
extern int g4fd2;
extern int g5060;
f709a()
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	int l10;
	char x10[10];
	int l22;
	int l40[9];
	f075b(1000, 20582);
	f4bb2(8, 4);
	g5060 = 0;
	g3646 = 0;
	f3118(g4fba);
	f3118(g4fb8);
	if (g43ce <= 0) goto L70fc;
	g43cc = 0;
	goto L70f3;
L70e7:
	f6091(g43cc);
	g43cc++;
L70f3:
	if (g43cc < g43ce) goto L70e7;
L70fc:
	f31d1(g4fba);
	f31d1(g4fb8);
	f4ee8();
	l10 = (g43ce < 6 ? 0 : 3);
	g363a = -1;
	if (g363a >= 0) goto L7341;
	f473a(1001);
	f09fb(g4fb2, 0);
	l2 = f011a(0, 19, 40, 5, 15, -1, 0, 0);
	f32be(l2, 32, 3, 0);
	l8 = 0;
L7185:
	l40[l8] = 1;
	l8++;
	if (l8 <= 8) goto L7185;
	l22 = -1;
	if (g43ce >= 1) goto L71b4;
	l40[1] = 0;
	l40[2] = 0;
L71b4:
	if (g43ce >= 2) goto L71c0;
	l40[3] = 0;
L71c0:
	l40[0] = 0;
	l4 = 0;
	goto L71de;
L71cc:
	if (g4fd8[l4] != 1) goto L71db;
	l40[0] = 1;
L71db:
	l4++;
L71de:
	if (l4 < g4fd2) goto L71cc;
	if (g43ce <= 5) goto L71f3;
	l40[0] = 0;
L71f3:
	if (g43ce <= 0) goto L71ff;
	l40[4] = 0;
L71ff:
	l10 = f705b(l40, l10);
	l8 = f47c0(l2, 1002, l40, 2, 1, 19, 4, 5, l10);
	f02d2(l2, 0);
	l10 = (g43ce < 6 ? 0 : 3);
#asm
	db 08bh,046h,0f8h,0e9h,0d6h,000h
#endasm
	f6a9e();
	if (g43ce != 6) goto L726a;
	l10 = 3;
L726a:
	;
#asm
l726a:
	db 0e9h,0d1h,000h
#endasm
	g43cc = f6c2b(1202);
	if (g43cc == -1) goto L7289;
	g363a = 17;
	g4fce = 4;
L7289:
	l10 = 1;
#asm
	db 0e9h,0adh,000h
#endasm
	g43cc = f6c2b(1203);
	if (g43cc == -1) goto L72a6;
	f6b30(g43cc);
L72a6:
	if (g43ce <= 0) goto L72b2;
	l10 = 2;
L72b2:
	;
#asm
l72b2:
	db 0e9h,089h,000h
#endasm
	f6fd4();
	g363a = 16;
#asm
	db 0e9h,07dh,000h
#endasm
	l4 = 0;
	goto L72db;
L72c8:
	g4fd8[g43dc[l4]] = 1;
	l4++;
L72db:
	if (l4 < g43ce) goto L72c8;
#asm
	db 0b8h,000h,000h,050h
	call f5f71_
	db 059h,0ebh,050h,0b8h,001h,000h,050h
	call f5f71_
	db 059h,0ebh,046h
#endasm
	g4fce = 4;
#asm
	call f76b5_
	db 0ebh,03bh
#endasm
	f6fd4();
	f6fe7();
	g363a = 1;
#asm
	db 0ebh,02dh
#endasm
	f6fd4();
	f6fe7();
	g363a = 3;
#asm
	db 0ebh,01fh,05bh,072h,06dh,072h,091h,072h,0c1h,072h,0eeh,072h,0b5h,072h,0f8h,072h
	db 003h,073h,011h,073h
l7331:
	db 03dh,009h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,01fh,073h
l733e:
	db 0e9h,0e4h,0fdh
#endasm
L7341:
	;
}
