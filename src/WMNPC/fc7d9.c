#asm
	extrn f4f73_:near
#endasm
extern char *g5264;
extern int message_delay;
fc7d9(p4, p6)
char *p4;
{
	int l2;
	char x2[80];
	int l84;
	char *l86;
	int l88;
	int l90;
	register int rsi;
	l2 = 1;
Lc7e5:
	if (!l2) goto Lc890;
	switch ((unsigned char)*p4) {
case 64:
	l88 = (unsigned char)g5264[6];
	l90 = (unsigned char)g5264[7];
	f5a69();
	set_cursor(g5264, 39, 4);
	put_char(g5264, 32, 0);
	set_cursor(g5264, l88, l90);
	f4f73(g5264);
	f4f73(g5264);
	p4++;
	goto Lc88d;
case 37:
	f5a1e(message_delay);
	p4++;
	goto Lc88d;
case 33:
	f4f73(g5264);
	p4++;
	goto Lc88d;
default:
	l2 = 0;
	goto Lc88d;
	}
Lc88d:
	goto Lc7e5;
Lc890:
	strcpy(&l84, p4);
	l86 = &l84;
Lc8a3:
	if (strlen(l86) <= 0) goto Lc956;
	l2 = char_index(l86, 32);
#asm
	db 050h,03dh,000h,000h,058h,07dh,007h
#endasm
	strlen(l86);
Lc8d0:
	;
#asm
lc8d0:
	db 089h,046h,0fch,08bh,01eh,064h,052h,08ah,047h,006h,02ah,0e4h,08bh,0c8h,08bh,046h
	db 0fch,003h,0c8h,08bh,0c1h,040h,050h,08ah,007h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h
	db 07eh,005h,053h
	call f4f73_
	db 059h
#endasm
Lc8f7:
	if (g5264[6]) goto Lc904;
	g5264[6]++;
Lc904:
	if (l2 < 0) goto Lc936;
#asm
	db 08bh,05eh,0aah,08bh,076h,0feh,0c6h,000h,000h
#endasm
	print_string(g5264, l86, p6);
	g5264[6]++;
	l86 += l2;
	l86 += 1;
	goto Lc953;
Lc936:
	print_string(g5264, l86, p6);
	g5264[6]++;
	*l86 = 0;
Lc953:
	goto Lc8a3;
Lc956:
	;
}
