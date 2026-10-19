extern int g51ac;
extern int g51ae;
/* Draw the wall glyphs of an overhead map cell. */
draw_map_walls(col, row, p8, p10, p12)
{
	char text[10];
	int l12;
	int l14;
	l12 = ((g51ac << 3) + 1);
	l14 = 239;
	if (p8 == -1) goto L5a9f;
	text[0] = *(char *)&p8;
	text[(0 + 1)] = 0;
	drv_draw_text(4, (((g51ac << 3) + (col << 4)) + 3), ((g51ae << 3) + (row << 4)), l12, l14, 0, 0, text);
L5a9f:
	if (p10 == -1) goto L5af6;
	text[0] = *(char *)&p10;
	text[(0 + 1)] = 0;
	drv_draw_text(4, ((g51ac << 3) + (col << 4)), (((g51ae << 3) + (row << 4)) + 2), l12, l14, 0, 0, text);
L5af6:
	if (p12 == -1) goto L5b4b;
	text[0] = *(char *)&p12;
	text[(0 + 1)] = 0;
	drv_draw_text(4, ((g51ac << 3) + (col << 4)), ((g51ae << 3) + (row << 4)), l12, l14, 0, 0, text);
L5b4b:
	;
}
