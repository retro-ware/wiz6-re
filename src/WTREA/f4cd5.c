draw_vital_bar(win, x, y, p10, p12, glyph_base)
{
	int l2;
	char glyphs[3];
	char x5[1];
	if ((l2 = ((int)((((long)p10 * 100) / (long)p12) / 10L) + 1)) <= 10) goto L4d09;
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
