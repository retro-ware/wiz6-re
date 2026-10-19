#asm
	extrn f513c_:near
#endasm
f7148(p4, p6, p8)
{
	if (p8 != -1) goto L7168;
#asm
	db 0b8h,022h,000h,050h,0b8h,00ch,000h,050h,0b8h,001h,000h,050h,0ffh,076h,006h
	call f513c_
	db 083h,0c4h,008h,0ebh,033h
#endasm
L7168:
	f513c(p4, (((p8 / 3) * 10) + 1), (((p8 % 3) << 1) + 14), (p8 + 35));
L719b:
	;
}
