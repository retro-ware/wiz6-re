#asm
	extrn f24e9_:near
#endasm
extern char *g4fae;
extern char g019d[];
extern char g019e[];
extern int g43b4;
f478f()
{
	char x0[2];
	int l4;
	register int rsi;
	f3118(g4fae);
	f32be(g4fae, 28, 3, 0);
	f030b(g4fae, 4, 0);
	f083f(3516, g4fae, 18);
	f033f(g4fae, 0, 1, 21, 1);
	g019e[g43b4] = 0;
	l4 = 0;
	goto L4827;
L4802:
	rsi = (44 * l4);
#asm
	db 08bh,01eh,0b4h,043h,080h,078h,022h,002h,073h,010h,080h,078h,011h,000h,075h,00ah
	db 080h,078h,010h,000h,075h,004h,0feh,087h,09eh,001h
#endasm
L4824:
	l4++;
L4827:
	if ((unsigned char)g019d[g43b4] > l4) goto L4802;
	f030b(g4fae, 1, 1);
	f22b7(g4fae, (unsigned char)(((unsigned char)g019d[g43b4] + 48)), 4);
	g4fae[6]++;
#asm
	db 0b8h,00ch,000h,050h,08bh,01eh,0b4h,043h,080h,0bfh,09dh,001h,001h,075h,005h,0b8h
	db 000h,000h,0ebh,003h
#endasm
L487e:
	;
#asm
l487e:
	db 0b8h,001h,000h
#endasm
L4881:
	;
#asm
l4881:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,051h,08ah,087h,09ch,001h,02ah,0e4h,0b9h,005h
	db 000h,0d3h,0e0h,059h,003h,0c8h,0a1h,0c2h,043h,003h,0c1h,050h,0ffh,036h,0aeh,04fh
	call f24e9_
	db 083h,0c4h,006h
#endasm
	f030b(g4fae, 20, 1);
	f22b7(g4fae, (unsigned char)(((unsigned char)g019e[g43b4] + 48)), 9);
	f31d1(g4fae);
}
