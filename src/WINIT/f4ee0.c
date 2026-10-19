/* Draw one character ch of the big font at x, y. */
draw_big_char(ch, x, y)
char ch;
{
	char text[10];
	text[0] = ch;
	text[(0 + 1)] = 0;
	drv_draw_text(0, x, y, 0, 319, 0, 0, text);
}
