extern int bottom_line_win;
extern int return_cmd;
close_sheet(p4, p6)
{
	destroy_window(p4, 0);
	destroy_window(p6, 0);
	switch (return_cmd) {
case 5:
	f0a42(bottom_line_win, 0);
	break;
case 4:
	erase_window(bottom_line_win, 0);
	break;
case 13:
	f0a42(bottom_line_win, 0);
	defer_window_draw(bottom_line_win);
	break;
	}
}
