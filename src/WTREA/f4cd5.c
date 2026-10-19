#asm
	extrn $ldv:near
#endasm
draw_vital_bar(win, x, y, p10, p12, glyph_base)
{
	int l2;
	char glyphs[3];
	char x5[1];
#asm
	db 08bh,046h,00ah,0bbh,064h,000h,0f7h,0ebh,050h,052h,08bh,046h,00ch,099h,08bh,0c8h
	db 08bh,0dah,05ah,058h
	call $ldv
	db 0b9h,00ah,000h,0bbh,000h,000h
	call $ldv
	db 040h,089h,046h,0feh,03dh,00ah,000h,07eh,005h
#endasm
	l2 = 10;
L4d09:
	if (p10) goto L4d14;
	l2 = 0;
L4d14:
	glyphs[0] = (char)(glyph_base + 9);
	glyphs[1] = (char)(glyph_base + 4);
	glyphs[2] = *(char *)&glyph_base;
	if (l2 > 3) goto L4d3d;
	glyphs[2] = (char)(glyph_base + l2);
	goto L4d77;
L4d3d:
	glyphs[2] = (char)(glyph_base + 3);
	l2 += -3;
	if (l2 > 4) goto L4d5e;
	glyphs[1] = (char)((glyph_base + l2) + 4);
	goto L4d77;
L4d5e:
	glyphs[1] = (char)(glyph_base + 8);
	l2 += -4;
	glyphs[0] = (char)((glyph_base + l2) + 9);
L4d77:
	for (l2 = 0; l2 < 3; l2++) {
	set_cursor(win, x, (y + l2));
	put_char_hi(win, (unsigned char)glyphs[l2], 1);
	}
}
