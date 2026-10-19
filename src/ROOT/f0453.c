#asm
	extrn $lrm:near
#endasm
f0453(p4, p8)
long p4;
char *p8;
{
	long l4;
	register int rsi;
	register int rdi;
	l4 = p4;
	if (l4 >= 0L) goto L0482;
#asm
l0475:
	db 0f7h,0dah,0f7h,0d8h,083h,0dah,000h,089h,056h,006h,089h,046h,004h
#endasm
L0482:
	rsi = 0;
L0485:
	;
#asm
l0485:
	db 08bh,046h,004h,08bh,056h,006h,0b9h,00ah,000h,0bbh,000h,000h
	call $lrm
	db 005h,030h,000h,083h,0d2h,000h,08bh,0feh,046h,08bh,05eh,008h,088h,001h
#endasm
	p4 = (p4 / 10L);
#asm
	db 083h,0fah,000h,07fh,007h,075h,007h,03dh,000h,000h,076h,002h
#endasm
L04c3:
	goto L0485;
L04c5:
	if (l4 >= 0L) goto L04de;
	rdi = rsi;
	rsi++;
	*(p8 + rdi) = 45;
L04de:
	*(p8 + rsi) = 0;
	f040e(p8);
}
