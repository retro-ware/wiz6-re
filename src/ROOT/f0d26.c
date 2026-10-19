extern char g3592;
extern int disk_header;
extern int main_window;
extern int msg_fd;
extern int scenario_fd;
/* Show 'INSERT DISK' window and wait until the right disk (DISK.HDR) is present; reopen data files. */
prompt_insert_disk(label, disk, close_files, reopen)
{
	int win;
	int waiting;
	char x4[73];
	char l78;
	char x78[4];
	int line;
	char x84[38];
	int name;
	char path[40];
	int fd;
	int nread;
	int col;
	int ok;
	int next_disk;
	int want;
	int orig_disk;
	stop_sound();
	orig_disk = disk;
	strcpy(&name, label);
	if (!close_files) goto L0d5a;
	close(msg_fd);
	close(scenario_fd);
L0d5a:
	if (!main_window) goto L0d6f;
	erase_window(main_window, 0);
L0d6f:
	win = create_window(0, 19, 40, 6, 31, -1, 0, 0);
	next_disk = -2;
	if (g3592 != 5) goto L0df1;
	if (disk) goto L0db0;
	next_disk = 1;
	goto L0df1;
L0db0:
	if (disk <= 2) goto L0df1;
	fd = open(1404, 0);
	if (fd != -1) goto L0ddb;
	next_disk = disk;
	disk = 2;
	goto L0df1;
L0ddb:
	close(fd);
	strcpy(&name, 13652);
L0df1:
	ok = 0;
L0df7:
	defer_window_draw(win);
	fill_window(win, 32, 3, 0);
	if (disk >= 0) goto L0e29;
	strcpy(&line, 1414);
	goto L0e59;
L0e29:
	path[0] = (char)(disk + 65);
	path[(0 + 1)] = 0;
	strcpy(&line, 1435);
	replace_char_with_string(&line, path, 94);
L0e59:
	col = (20 - ((strlen(&line) + 1) / 2));
	set_cursor(win, col, 1);
	print_string_hi(win, &line, 3);
	strcpy(&line, 1451);
	replace_char_with_string(&line, &name, 94);
	set_cursor(win, col, 2);
	print_string_hi(win, &line, 3);
	strcpy(&line, 1464);
	l78 = 21;
	set_cursor(win, (20 - ((strlen(&line) + 1) / 2)), 4);
	print_string_hi(win, &line, 3);
	resume_window_draw(win);
	refresh_all_windows();
	flush_keys();
	waiting = 1;
L0f30:
	if (!check_screen_click()) goto L0f3c;
	waiting = 0;
L0f3c:
	if (key_available(1) != 1) goto L0f5a;
	if ((char)get_key(1) != 13) goto L0f5a;
	waiting = 0;
L0f5a:
	if (waiting) goto L0f30;
	fill_window(win, 32, 3, 0);
	refresh_window(win);
	strcpy(path, &name);
	if (g3592 != 5) goto L0ff5;
	if (disk == 1) goto L0f9e;
	if (disk != 2) goto L0ff5;
L0f9e:
	switch (disk) {
case 1:
	strcat(path, 1472);
	goto L0fcf;
case 2:
	strcat(path, 1484);
	goto L0fcf;
	}
L0fcf:
	fd = open(path, 0);
	if (fd == -1) goto L0ff2;
	ok = 1;
	close(fd);
L0ff2:
	goto L1083;
L0ff5:
	strcat(path, 1494);
	fd = open(path, 0);
	if (disk >= 0) goto L1031;
	if (fd != -1) goto L102a;
	ok = 1;
	goto L102f;
L102a:
	close(fd);
L102f:
	goto L1083;
L1031:
	if (fd == -1) goto L1083;
	nread = read(fd, 12356, 700);
	want = ((g3592 == 5) && (disk > 0) ? (disk - 2) : disk);
	if (nread <= 0) goto L107b;
	if (want != disk_header) goto L107b;
	ok = 1;
L107b:
	close(fd);
L1083:
	if (!ok) goto L0df7;
	disk = next_disk;
	next_disk = -2;
	strcpy(&name, 13652);
	if (disk != -2) goto L0df1;
	flush_keys();
	destroy_window(win, 0);
	if (!reopen) goto L1120;
	msg_fd = open(make_data_path(1503, 0), 0);
	if (msg_fd != -1) goto L10ed;
	exit_game(17);
L10ed:
	scenario_fd = open(make_data_path(1511, (orig_disk == 0 ? 0 : 1)), 0);
	if (scenario_fd != -1) goto L1120;
	exit_game(18);
L1120:
	;
}
