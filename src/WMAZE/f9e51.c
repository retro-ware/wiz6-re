extern int bottom_line_win;
extern int event_screen_dirty;
extern int g522a;
extern int g522c;
extern int g522e;
extern int main_window;
extern int msg_not_found;
show_message_text_m(p4, p6)
{
	char x0[78];
	int l80;
	g522e = 0;
	g522c = 0;
	event_screen_dirty = 1;
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	g522a = create_window(0, 19, 40, 5, 20, -1, 0, 1);
L9ea2:
	get_message(p4, &l80);
	if (!msg_not_found) {
	print_text_line_m(&l80, p6);
	p4++;
	}
	if (!msg_not_found) goto L9ea2;
	end_text_page_m(p6);
	destroy_window(g522a, 0);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
}
