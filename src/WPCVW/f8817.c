extern int g553c;
extern int g5754;
extern int g5756;
extern int g5758;
extern int g578a[];
blink_cursor()
{
	set_cursor(g5754, g5756, g5758);
	if (g578a[g553c] >= 16) {
	print_string_hi(g5754, ((g553c * 24) + 22362), (g578a[g553c] + -15));
	} else {
	print_string(g5754, ((g553c * 24) + 22362), g578a[g553c]);
	}
	g553c = ((g553c + 1) % 2);
}
