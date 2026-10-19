extern char g3bcc[];
extern char g3bff[];
/* Draw camp scene sprite n offset by dx with clip range lo..hi. */
draw_camp_sprite(n, dx, lo, hi)
{
	char text[10];
	text[0] = *(char *)&n;
	text[(0 + 1)] = 0;
	drv_draw_text(4, ((unsigned char)g3bcc[(n << 1)] + dx), (unsigned char)g3bff[n], lo, hi, 0, 0, text);
}
