#asm
	extrn $ldv:near
#endasm
/* Draw a 3-glyph vertical gauge for cur/max at x, y. */
draw_gauge(win, x, y, p10, p12, glyph)
{
	int level;
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
	level = 10;
L5fe4:
	if (p10) goto L5fef;
	level = 0;
L5fef:
	glyphs[0] = (char)(glyph + 9);
	glyphs[1] = (char)(glyph + 4);
	glyphs[2] = *(char *)&glyph;
	if (level > 3) goto L6018;
	glyphs[2] = (char)(glyph + level);
	goto L6052;
L6018:
	glyphs[2] = (char)(glyph + 3);
	level += -3;
	if (level > 4) goto L6039;
	glyphs[1] = (char)((glyph + level) + 4);
	goto L6052;
L6039:
	glyphs[1] = (char)(glyph + 8);
	level += -4;
	glyphs[0] = (char)((glyph + level) + 9);
L6052:
	level = 0;
L6057:
	set_cursor(win, x, (y + level));
	put_char_hi(win, (unsigned char)glyphs[level], 1);
	level++;
	if (level < 3) goto L6057;
}
