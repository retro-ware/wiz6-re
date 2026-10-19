extern char g3958[];
extern char g398b[];
/* Draw camp scene background sprite n. */
draw_camp_backdrop_char(n)
{
	char text[10];
	text[0] = *(char *)&n;
	text[(0 + 1)] = 0;
	drv_draw_text(2, (unsigned char)g3958[(n << 1)], (unsigned char)g398b[n], 72, 248, 0, 0, text);
}
