#asm
	extrn put_combat_glyph_at_:near
#endasm
unhighlight_combat_realm(p4, p6)
{
	if (p6 != -1) goto L5ff6;
#asm
	db 0b8h,022h,000h,050h,0b8h,003h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h,004h
	call put_combat_glyph_at_
	db 083h,0c4h,008h,0ebh,02fh
#endasm
L5ff6:
	put_combat_glyph_at(p4, (((p6 / 3) * 6) + 1), (((p6 % 3) << 1) + 1), (p6 + 35));
L6025:
	;
}
