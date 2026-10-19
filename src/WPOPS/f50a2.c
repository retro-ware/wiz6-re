extern int blink_state;
extern int g5010;
extern int g5012;
extern int g5014;
extern int g5018[];
blink_cursor_text()
{
	set_cursor(g5014, g5012, g5010);
	if (g5018[blink_state] < 16) goto L50e7;
	print_string_hi(g5014, ((blink_state * 24) + 20508), (g5018[blink_state] + -15));
	goto L510d;
L50e7:
	print_string(g5014, ((blink_state * 24) + 20508), g5018[blink_state]);
L510d:
	blink_state = ((blink_state + 1) % 2);
}
