extern int g58d6;
fbb9a(p4)
{
	int l2;
	int l4;
	register int rsi;
	g58d6 = 0;
	l2 = 0;
	goto Lbbe9;
Lbbae:
	;
#asm
lbbae:
	db 08bh,05eh,004h,08bh,076h,0feh,08ah,000h,02ah,0e4h,089h,046h,0fch,03dh,03fh,000h
	db 075h,00bh
#endasm
	g58d6 = 1;
#asm
	db 0c6h,000h,020h
#endasm
	goto Lbbe6;
Lbbcb:
	if (((l4 != 33) && (l4 != 46)) && (l4 != 44)) goto Lbbe6;
#asm
lbbdd:
	db 08bh,05eh,004h,08bh,076h,0feh,0c6h,000h,020h
#endasm
Lbbe6:
	l2++;
Lbbe9:
	if (strlen(p4) > l2) goto Lbbae;
}
