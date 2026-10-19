#asm
	extrn f6760_:near
#endasm
f6789(p4, p6)
{
	if (p6 != -1) goto L67a9;
#asm
	db 0b8h,022h,000h,050h,0b8h,003h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h,004h
	call f6760_
	db 083h,0c4h,008h,0ebh,02fh
#endasm
L67a9:
	f6760(p4, (((p6 / 3) * 6) + 1), (((p6 % 3) << 1) + 1), (p6 + 35));
L67d8:
	;
}
