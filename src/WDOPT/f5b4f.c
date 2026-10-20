extern char g51b0;
extern int g51ac;
extern int g51ae;
/* Draw the border of the overhead map. */
draw_map_border(cols, rows)
{
	int i;
	char text[10];
	text[0] = g51b0;
	text[(0 + 1)] = 0;
	for (i = 0; (cols << 1) > i; i++) {
	drv_draw_text(4, ((g51ac + i) << 3), ((g51ae << 3) - 1), 72, 248, 0, 0, text);
	drv_draw_text(4, ((g51ac + i) << 3), (((rows << 1) + g51ae) << 3), 72, 248, 0, 0, text);
	}
}
