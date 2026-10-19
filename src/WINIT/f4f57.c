#asm
	extrn f3664_:near
#endasm
extern int g363a;
extern int g4fbe;
extern int g4fc6;
f4f57()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l28[10];
	int l48[10];
	int l68[10];
	int l88[10];
	int l108[10];
	int l110;
	int l112;
	int l114;
	f280c();
	f48ee(39);
	l4 = open(f0cd6(20794, 1), 0);
	if (l4 != -1) goto L4f91;
	f00d5(9);
L4f91:
	;
#asm
l4f91:
	db 0b8h,000h,000h,050h,0b8h,0aah,051h,0bah,000h,000h,052h,050h,0b8h,000h,000h,0bah
	db 000h,000h,052h,050h,0ffh,076h,0fch
	call f3664_
	db 083h,0c4h,00ch
#endasm
	close(l4);
	if (!(g4fc6 & 1)) goto L4fcd;
	f4e5b(20806, 0);
	goto L501d;
L4fcd:
	if (!(g4fc6 & 2)) goto L4fe5;
	f4e5b(20819, 0);
	goto L501d;
L4fe5:
	if (!(g4fc6 & 4)) goto L4ffd;
	f4e5b(20832, 0);
	goto L501d;
L4ffd:
	if (!(g4fc6 & 8)) goto L5015;
	f4e5b(20845, 0);
	goto L501d;
L5015:
	f00d5(12);
L501d:
	l114 = 0;
	f0aaa(4);
	if (l114) goto L503b;
	l114 += f4f12(2);
L503b:
	f0aaa(13);
	f3694(g4fbe, 0);
	f4ee0(13, 91, 52);
	f4ee0(9, 107, 82);
	f36a0(g4fbe);
	if (l114) goto L508e;
	l114 += f4f12(72);
L508e:
	l112 = 0;
	f367c(-1);
	f36a0(g4fbe);
	f0aaa(14);
	if (l114) goto L50bc;
	l114 += f4f12(10);
L50bc:
	f0aaa(6);
	f4ee0(7, 76, 67);
	f4ee0(8, 76, 99);
	f36a0(g4fbe);
	f0aaa(7);
	if (l114) goto L5109;
	l114 += f4f12(10);
L5109:
	l28[0] = 7;
	l48[0] = 76;
	l68[0] = 0;
	l88[0] = 67;
	l108[0] = 3;
	l28[1] = 8;
	l48[1] = 76;
	l68[1] = 0;
	l88[1] = 99;
	l108[1] = 35;
	l28[2] = 12;
	l48[2] = 8;
	l68[2] = 0;
	l88[2] = 13;
	l108[2] = 13;
	l28[3] = 1;
	l48[3] = 20;
	l68[3] = 4;
	l88[3] = 144;
	l108[3] = 13;
	l28[4] = 2;
	l48[4] = 20;
	l68[4] = 36;
	l88[4] = 144;
	l108[4] = 13;
	l28[5] = 3;
	l48[5] = 20;
	l68[5] = 60;
	l88[5] = 144;
	l108[5] = 13;
	l28[6] = 4;
	l48[6] = 20;
	l68[6] = 88;
	l88[6] = 144;
	l108[6] = 13;
	l28[7] = 5;
	l48[7] = 20;
	l68[7] = 120;
	l88[7] = 144;
	l108[7] = 13;
	l28[8] = 6;
	l48[8] = 14;
	l68[8] = 152;
	l88[8] = 144;
	l108[8] = 80;
	l110 = (l114 == 0 ? 1 : 0);
	l2 = 0;
	goto L52bd;
L5201:
	f367c(-1);
	l6 = 8;
	if (l68[l6] > l2) goto L5280;
	l8 = (l88[l6] - (l2 - l68[l6]));
#asm
	db 08bh,046h,0fah,03dh,003h,000h,07ch,005h,03dh,008h,000h,075h,011h
#endasm
L5242:
	;
#asm
l5242:
	db 0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,094h,03bh,046h,0f8h,07eh,003h,089h,046h
	db 0f8h
#endasm
L5253:
	if (l108[l6] > l8) goto L5280;
	f4ee0(l28[l6], l48[l6], l8);
L5280:
	l6--;
#asm
	db 07dh,089h
#endasm
	f36a0(g4fbe);
	if (!f0c42()) goto L5299;
	l110 = 0;
L5299:
	if (!f2643(1)) goto L52b7;
	l112 = (unsigned char)(f2724(1));
	l110 = 0;
L52b7:
	l2 += 2;
L52bd:
	if (!l110) goto L52d4;
	if (((l68[7] + l88[7]) - l108[7]) > l2) goto L5201;
L52d4:
	f367c(-1);
	f4ee0(7, 76, 3);
	f4ee0(8, 76, 35);
	f4ee0(6, 14, 80);
	f36a0(g4fbe);
	f02d2(g4fbe, 0);
	g363a = 2;
	if (!l110) goto L534b;
L5334:
	if (f2643(1)) goto L5349;
	if (f0c42()) goto L5349;
	goto L5334;
L5349:
	goto L5353;
L534b:
	f09a3(28);
L5353:
	f280c();
}
