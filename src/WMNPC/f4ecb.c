extern int g5144;
f4ecb(p4)
char *p4;
{
	int l2;
	defer_window_draw(p4);
	for (l2 = 0; ((unsigned char)p4[1] - 1) > l2; l2++) {
	movmem(((p4 + ((l2 + 1) * ((unsigned char)*p4 << 1))) + 16), ((p4 + (((unsigned char)*p4 << 1) * l2)) + 16), ((unsigned char)*p4 << 1));
	}
	clear_window_area(p4, 0, ((unsigned char)p4[1] - 1), ((unsigned char)*p4 - 1), ((unsigned char)p4[1] - 1));
	resume_window_draw(p4);
	refresh_window(p4);
	set_cursor(p4, g5144, ((unsigned char)p4[1] - 1));
}
