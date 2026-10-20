extern int main_window;
f0a42(p4, p6)
{
	if (!p6) {
	defer_window_draw(p4);
	}
	set_cursor(p4, 19, 0);
	put_char_hi(p4, (unsigned char)((p4 == main_window ? (char)29 : (char)31)), 3);
	if (!p6) {
	resume_window_draw(p4);
	}
}
