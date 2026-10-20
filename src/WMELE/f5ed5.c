/* Draw a 3-glyph vertical gauge for cur/max at x, y. */
draw_gauge_mele(win, x, y, p10, p12, glyph)
{
	int level;
	char l3;
	char l4;
	char l5;
	char x5[1];
	if ((level = ((int)((((long)p10 * 100) / (long)p12) / 10L) + 1)) > 10) {
	level = 10;
	}
	if (!p10) {
	level = 0;
	}
	l5 = (char)(glyph + 9);
	l4 = (char)(glyph + 4);
	l3 = *(char *)&glyph;
	if (level > 3) goto L5f3d;
	l3 = (char)(glyph + level);
	goto L5f77;
L5f3d:
	l3 = (char)(glyph + 3);
	level += -3;
	if (level > 4) goto L5f5e;
	l4 = (char)((glyph + level) + 4);
	goto L5f77;
L5f5e:
	l4 = (char)(glyph + 8);
	level += -4;
	l5 = (char)((glyph + level) + 9);
L5f77:
	set_cursor(win, x, y);
	put_char_hi(win, (unsigned char)l5, 1);
	set_cursor(win, x, (y + 1));
	put_char_hi(win, (unsigned char)l4, 1);
	set_cursor(win, x, (y + 2));
	put_char_hi(win, (unsigned char)l3, 1);
}
