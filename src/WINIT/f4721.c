#asm
	extrn f3664_:near
#endasm
extern char g3812[];
extern char g4322[];
extern char g432c[];
extern int g4fe8;
f4721(p4, p6)
{
	int l2;
	char x2[15];
	char l18;
	char l19;
	char x19[1];
	int l22;
	f3640();
	f0882(8, ((314 * p6) + 14046), p4, 0);
	strcpy(&l22, 20462);
	l19 = (char)((p4 / 10) + 48);
	l18 = (char)((p4 % 10) + 48);
	g4fe8 = open(f0cd6(&l22, 1), 0);
	if (g4fe8 != -1) goto L4793;
	f00d5(9);
L4793:
	;
#asm
l4793:
	db 0ffh,076h,006h,0b8h,03ah,001h,0f7h,06eh,006h,08bh,0d8h,0ffh,0b7h,0e4h,036h,0ffh
	db 0b7h,0e2h,036h,0b8h,000h,000h,0bah,000h,000h,052h,050h,0ffh,036h,0e8h,04fh
	call f3664_
	db 083h,0c4h,00ch
#endasm
	close(g4fe8);
	l2 = 0;
	goto L47de;
L47c7:
	g432c[(p6 + l2)] = *(char *)&p4;
	g4322[(p6 + l2)] = 1;
	l2++;
L47de:
	if ((unsigned char)g3812[(314 * p6)] >= l2) goto L47c7;
}
