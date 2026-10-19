extern int g4ee8;
extern int g4f9a;
extern int g4faa;
extern int g4fbc;
fb53d()
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	int l22;
	int l24;
	int l26;
	int l28;
	int l30;
	int l32;
	int l34;
	int l36;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fah,08bh,000h,0b9h,000h,001h,099h,0f7h,0f9h,089h,046h,0e0h,08bh,000h,099h
	db 0f7h,0f9h,089h,056h,0e2h,08bh,080h,020h,001h,099h,0f7h,0f9h,089h,046h,0deh,08bh
	db 080h,020h,001h,099h,0f7h,0f9h,089h,056h,0dch,0a1h,09ah,04fh,02bh,046h,0deh,005h
	db 004h,000h,0b9h,004h,000h,099h,0f7h,0f9h,089h,056h,0e4h,083h,0fah,003h,075h,005h
#endasm
	l28 = -1;
Lb599:
	rsi = g4ee8;
#asm
	db 08ah,080h,030h,006h,02ah,0e4h,089h,046h,0e6h
#endasm
	l14 = f2962(l6, 0, 3);
	l16 = f2962(l6, 3, 3);
	l12 = f2962(l6, 6, 4);
	l22 = f2962(l6, 10, 1);
	l24 = f2962(l6, 11, 1);
	l20 = f2962(l6, 12, 1);
#asm
	db 08bh,01eh,0aah,04fh,08bh,076h,0f4h,08ah,080h,0e0h,001h,02ah,0e4h,003h,046h,0f2h
	db 089h,046h,0f8h,08ah,080h,0ech,001h,02ah,0e4h,003h,046h,0f0h,089h,046h,0f6h
#endasm
	l18 = (l24 == 0 ? 1 : 2);
#asm
	db 0b9h,006h,000h,0d3h,0e6h,08bh,0c6h,08bh,04eh,0f0h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,003h,046h,0f2h,089h,046h,0fch
#endasm
	if (!l20) goto Lb6a3;
	if (l22 != 1) goto Lb6a3;
	if (l28) goto Lb6a3;
	if (l24 != 1) goto Lb6a3;
	if (g4f9a != l36) goto Lb696;
	fb3ac(0, l32, l30, l26);
	goto Lb6a3;
Lb696:
	fb500(7, l26);
Lb6a3:
	switch (l34) {
case 0:
	f28da((g4faa + 96), l4, 2, l18);
	if (l22 != 1) goto Lb6f3;
	fb2c6(l8, l10, 0, l24, 0);
	fb2c6(l8, (l10 + 1), 2, l24, 0);
Lb6f3:
	goto Lb870;
case 1:
	f28da((g4faa + 288), l4, 2, l18);
	if (l22 != 1) goto Lb743;
	fb2c6(l8, l10, 1, l24, 0);
	fb2c6((l8 + 1), l10, 3, l24, 0);
Lb743:
	goto Lb870;
case 2:
	if (l22 != 1) goto Lb779;
	fb2c6(l8, l10, 2, l24, 0);
	fb2c6(l8, (l10 - 1), 0, l24, 0);
Lb779:
	if (f7b1b(&l14, &l16, &l12, l8, (l10 - 1))) goto Lb7c7;
	l4 = (((l12 << 6) + (l16 << 3)) + l14);
	f28da((g4faa + 96), l4, 2, l18);
Lb7c7:
	goto Lb870;
case 3:
	if (l22 != 1) goto Lb800;
	fb2c6(l8, l10, 3, l24, 0);
	fb2c6((l8 - 1), l10, 1, l24, 0);
Lb800:
	if (f7b1b(&l14, &l16, &l12, (l8 - 1), l10)) goto Lb84e;
	l4 = (((l12 << 6) + (l16 << 3)) + l14);
	f28da((g4faa + 288), l4, 2, l18);
Lb84e:
	goto Lb870;
	}
Lb870:
	if (!l20) goto Lb960;
	if (l22 != 1) goto Lb94e;
	if (l28) goto Lb8bb;
	if (l24) goto Lb8bb;
	if (g4f9a != l36) goto Lb8ab;
	fb3ac(1, l32, l30, l26);
	goto Lb8b8;
Lb8ab:
	fb500(7, l26);
Lb8b8:
	goto Lb94c;
Lb8bb:
	if (l28 != 1) goto Lb8c7;
	if (!l24) goto Lb8d3;
Lb8c7:
	if (l28 != -1) goto Lb8fa;
	if (l24 != 1) goto Lb8fa;
Lb8d3:
	f903b();
	fb500(1, l26);
	f36a0(g4fbc);
	fb500(6, l26);
	goto Lb94c;
Lb8fa:
	if (l28 != 1) goto Lb906;
	if (l24 == 1) goto Lb912;
Lb906:
	if (l28 != -1) goto Lb939;
	if (l24) goto Lb939;
Lb912:
	f903b();
	fb500(6, l26);
	f36a0(g4fbc);
	fb500(1, l26);
	goto Lb94c;
Lb939:
	if (l28 != 2) goto Lb94c;
	fb500(7, l26);
Lb94c:
	goto Lb95e;
Lb94e:
	f98cb();
	if (l26 <= 0) goto Lb95e;
	f0aaa(l26);
Lb95e:
	goto Lb986;
Lb960:
	if (l22 != 1) goto Lb976;
	fb500(7, 3);
	goto Lb97e;
Lb976:
	f0aaa(4);
Lb97e:
	f533b(2);
Lb986:
	rsi = g4ee8;
#asm
	db 08bh,01eh,0a8h,04fh,080h,0b8h,0a0h,005h,000h,076h,008h
#endasm
	fa1bc(2);
Lb99d:
	;
}
