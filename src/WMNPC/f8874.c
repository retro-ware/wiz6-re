#asm
	extrn f884b_:near
#endasm
f8874(p4, p6)
{
	if (p6 != -1) goto L8894;
#asm
	db 0b8h,022h,000h,050h,0b8h,003h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h,004h
	call f884b_
	db 083h,0c4h,008h,0ebh,02fh
#endasm
L8894:
	f884b(p4, (((p6 / 3) * 6) + 1), (((p6 % 3) << 1) + 1), (p6 + 35));
L88c3:
	;
}
