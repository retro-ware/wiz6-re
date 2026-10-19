#asm
	extrn $ldv:near
	extrn random_:near
#endasm
f8064(p4, p6, p8)
{
	char x0[2];
	int l4;
	register int rsi;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,006h,08ah,080h
	db 08ch,001h,02ah,0e4h,089h,046h,0feh,0ffh,076h,00ah
	call random_
	db 059h,08bh,0c8h,08bh,046h,0feh,03bh,0c8h,07dh,027h,08bh,05eh,008h,0f7h,0ebh,0b9h
	db 064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0fch
#endasm
L80a3:
	if (l4 <= 0) goto L80b9;
	p8 -= random(2);
	l4--;
	goto L80a3;
L80b9:
	if (p8 >= 1) goto L80c4;
	p8 = 1;
L80c4:
	return p8;
}
