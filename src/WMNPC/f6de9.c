extern int bottom_line_win;
extern int g5264;
extern int main_window;
f6de9()
{
	destroy_window(g5264, 0);
	g5264 = 0;
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
}
