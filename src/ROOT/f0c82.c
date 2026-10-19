f0c82()
{
	int l2;
	int l4;
	register int rsi;
	l2 = 0;
	l4 = 0;
L0c93:
	;
#asm
l0c93:
	db 08bh,05eh,006h,08bh,076h,0feh,080h,038h,000h,074h,02ah
#endasm
	if (l4) goto L0cc8;
#asm
	db 08ah,000h,08bh,05eh,004h,088h,000h,08bh,05eh,006h,08bh,076h,0feh,08ah,000h,03ah
	db 046h,008h,075h,005h,0b8h,001h,000h,0ebh,003h
#endasm
L0cbd:
	;
#asm
l0cbd:
	db 0b8h,000h,000h
#endasm
L0cc0:
	;
#asm
l0cc0:
	db 089h,046h,0fch
#endasm
	l2++;
	goto L0c93;
L0cc8:
	;
#asm
l0cc8:
	db 08bh,05eh,004h,08bh,076h,0feh,0c6h,000h,000h
#endasm
}
