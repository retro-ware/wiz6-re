extern int bottom_line_win;
extern int g5262;
extern int g5264;
extern int g5268;
extern int loot_count;
extern int main_window;
extern int msg_not_found;
f5c61(p4, p6)
{
	char x0[78];
	int l80;
	g5268 = 0;
	loot_count = 0;
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	g5264 = create_window(0, 19, 40, 5, 30, -1, 0, 1);
	g5262 = 4;
L5cb2:
	get_message(p4, &l80);
	if (!msg_not_found) {
	f5b21(&l80, p6);
	p4++;
	}
	if (!msg_not_found) goto L5cb2;
	f5af3(p6);
	destroy_window(g5264, 0);
	g5264 = 0;
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
}
