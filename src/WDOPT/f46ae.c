extern int g502e;
extern int g5030;
extern int g5032;
extern int g5034;
extern int g5036[];
/* Toggle the blinking highlighted text at the menu cursor. */
blink_cursor_text()
{
	set_cursor(g5034, g5032, g5030);
	if (g5036[g502e] >= 16) {
	print_string_hi(g5034, ((g502e * 24) + 20538), (g5036[g502e] + -15));
	} else {
	print_string(g5034, ((g502e * 24) + 20538), g5036[g502e]);
	}
	g502e = ((g502e + 1) % 2);
}
