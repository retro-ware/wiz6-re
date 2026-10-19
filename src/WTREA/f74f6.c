#asm
	extrn f74cd_:near
#endasm
f74f6(p4, p6)
{
	if (p6 != -1) goto L7516;
#asm
	db 0b8h,022h,000h,050h,0b8h,003h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h,004h
	call f74cd_
	db 083h,0c4h,008h,0ebh,02fh
#endasm
L7516:
	f74cd(p4, (((p6 / 3) * 6) + 1), (((p6 % 3) << 1) + 1), (p6 + 35));
L7545:
	;
}
