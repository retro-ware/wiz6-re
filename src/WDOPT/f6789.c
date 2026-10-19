#asm
	extrn draw_glyph_at_dopt_:near
#endasm
/* Redraw the icon of spell realm r in normal colour. */
draw_realm_icon(win, realm)
{
	if (realm != -1) goto L67a9;
#asm
	db 0b8h,022h,000h,050h,0b8h,003h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h,004h
	call draw_glyph_at_dopt_
	db 083h,0c4h,008h,0ebh,02fh
#endasm
L67a9:
	draw_glyph_at_dopt(win, (((realm / 3) * 6) + 1), (((realm % 3) << 1) + 1), (realm + 35));
L67d8:
	;
}
