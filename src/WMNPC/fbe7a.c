#asm
	extrn fbbfa_:near
#endasm
fbe7a(p4, p6, p8)
{
	if (p6) goto Lbe91;
#asm
	db 0ffh,076h,008h,0ffh,076h,004h
	call fbbfa_
	db 083h,0c4h,004h,0ebh,00ch
#endasm
Lbe91:
	fbcec(p4, p8);
Lbe9d:
	;
}
