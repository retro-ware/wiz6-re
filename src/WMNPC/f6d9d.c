extern int bottom_line_win;
extern int g5144;
extern int g5264;
extern int g5268;
extern int loot_count;
extern int main_window;
f6d9d()
{
	g5144 = 0;
	g5268 = 0;
	loot_count = 0;
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	g5264 = create_window(0, 19, 40, 5, 30, -1, 0, 1);
}
