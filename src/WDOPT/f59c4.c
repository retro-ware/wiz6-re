extern int g51ac;
extern int g51ae;
/* Draw the floor glyph of an overhead map cell. */
draw_map_floor(col, row, glyph)
char glyph;
{
	char text[10];
	int l12;
	int l14;
	l12 = ((g51ac << 3) + 1);
	l14 = 239;
	text[0] = glyph;
	text[(0 + 1)] = 0;
	drv_draw_text(4, ((g51ac << 3) + (col << 4)), ((g51ae << 3) + (row << 4)), l12, l14, 0, 0, text);
}
