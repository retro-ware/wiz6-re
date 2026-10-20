extern char *prompt_win;
extern char roster_slot_used[];
delete_character(slot)
{
	char x0[34];
	int l36;
	int l38;
	int l40;
	int l42;
	int fd;
	load_and_show_character(slot);
	l40 = 1;
	l38 = 1;
	l36 = -1;
	set_cursor(prompt_win, 5, 1);
	print_message(1125, prompt_win, 18);
	l42 = menu_select(prompt_win, 1126, &l40, ((unsigned char)prompt_win[6] + 1), 1, 4, 1, 5, 1);
	if (!l42) {
	roster_slot_used[slot] = 0;
	stop_sound();
	fd = open(make_data_path(21513, 0), 2);
	write(fd, 20432, 24);
	close(fd);
	}
}
