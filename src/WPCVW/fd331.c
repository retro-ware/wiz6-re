#asm
	extrn f24e9_:near
#endasm
fd331(p4, p6, p8, p10)
{
	if (p10) goto Ld368;
	f030b(p4, 22, (p6 + 9));
#asm
	db 0ffh,076h,008h,08bh,046h,006h,0b9h,004h,000h,0d3h,0e0h,005h,0deh,055h,050h,0ffh
	db 076h,004h
	call f24e9_
	db 083h,0c4h,006h,0ebh,02dh
#endasm
Ld368:
	f030b(p4, 2, (p6 + 3));
	f24e9(p4, ((p6 << 4) + 22162), 9);
Ld395:
	;
}
