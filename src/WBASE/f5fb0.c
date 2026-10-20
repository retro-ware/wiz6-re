/* Draw a 3-glyph vertical gauge for cur/max at x, y. */
draw_gauge(win, x, y, p10, p12, glyph)
{
	int level;
	char glyphs[3];
	char x5[1];
	if ((level = ((int)((((long)p10 * 100) / (long)p12) / 10L) + 1)) > 10) {
	level = 10;
	}
	if (!p10) {
	level = 0;
	}
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
	for (level = 0; level < 3; level++) {
	set_cursor(win, x, (y + level));
	put_char_hi(win, (unsigned char)glyphs[level], 1);
	}
}
