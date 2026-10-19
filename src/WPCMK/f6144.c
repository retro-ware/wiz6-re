#asm
	extrn f507f_:near
#endasm
f6144(p4, p6, p8)
{
	if (p8 != -1) goto L6164;
#asm
	db 0b8h,022h,000h,050h,0b8h,00ch,000h,050h,0b8h,001h,000h,050h,0ffh,076h,006h
	call f507f_
	db 083h,0c4h,008h,0ebh,033h
#endasm
L6164:
	f507f(p4, (((p8 / 3) * 10) + 1), (((p8 % 3) << 1) + 14), (p8 + 35));
L6197:
	;
}
