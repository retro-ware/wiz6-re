extern int g51ac;
extern int g51ae;
extern int party_count;
/* Draw the party markers on the overhead map. */
draw_map_party(col, row, glyph)
char glyph;
{
	int i;
	char text[10];
	int l14;
	int l16;
	for (i = 0; i < party_count; i++) {
	l14 = ((g51ac << 3) + (col << 4));
	l16 = ((((g51ac << 3) + (col << 4)) + 16) - (((i + 1) % 2) * 6));
	text[0] = (char)((i / 2) + (unsigned char)glyph);
	text[(0 + 1)] = 0;
	drv_draw_text(4, ((g51ac << 3) + (col << 4)), ((g51ae << 3) + (row << 4)), l14, l16, 0, 0, text);
	}
}
