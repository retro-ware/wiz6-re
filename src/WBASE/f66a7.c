extern char roster_slot_used[];
extern int bottom_line_win;
extern int main_window;
extern int menu_clicked;
extern int mouse_present;
extern int pclist_class[];
extern int pclist_pcindex[];
extern int pclist_race[];
extern int pclist_sex[];
extern int roster_slot_count;
/* Let the player pick an available PCFILE character; return its list index or -1. */
choose_pcfile_char()
{
	char *title_win;
	char *list_win;
	int i;
	int count;
	int top;
	int on_cancel;
	char x12[16];
	char l29;
	char l30;
	char l31;
	char x31[411];
	int rec;
	int n;
	char x446[78];
	int title;
	char x526[8];
	int cancel_text;
	count = 0;
	i = 0;
	goto L671b;
L66ba:
	if (roster_slot_used[i] == 1) {
	pcfile_record_io(&rec, i, 0);
	strcpy(((count << 3) + 20602), &rec);
	pclist_sex[count] = (unsigned char)l30;
	pclist_race[count] = (unsigned char)l31;
	pclist_class[count] = (unsigned char)l29;
	pclist_pcindex[count] = i;
	count++;
	}
	i++;
L671b:
	if (i < roster_slot_count) goto L66ba;
	if (count) goto L6731;
	return -1;
L6731:
	n = count;
	title_win = create_window(0, 19, 19, 5, 10, -4, 0, 0);
	fill_window(title_win, 32, 3, 0);
	list_win = create_window(20, 19, 20, 5, 20, -5, 0, 0);
	fill_window(list_win, 32, 3, 0);
	get_message(1201, &title);
	show_title_text(&title, (10 - ((strlen(&title) + 1) / 2)));
	f0a42(bottom_line_win, 0);
	defer_window_draw(title_win);
	set_cursor(title_win, 6, 1);
	print_message(1206, title_win, 18);
	resume_window_draw(title_win);
	draw_list_frame(list_win, 0);
	refresh_all_windows();
	get_message(1207, &cancel_text);
	top = 0;
	on_cancel = 0;
	set_click_region(0, ((unsigned char)list_win[2] + 2), ((unsigned char)list_win[3] + 2), ((unsigned char)list_win[2] + 18), ((unsigned char)list_win[3] + 2));
	set_click_region(1, ((unsigned char)list_win[2] + 1), (unsigned char)list_win[3], ((unsigned char)list_win[2] + 1), (unsigned char)list_win[3]);
	set_click_region(2, ((unsigned char)list_win[2] + 1), ((unsigned char)list_win[3] + 4), ((unsigned char)list_win[2] + 1), ((unsigned char)list_win[3] + 4));
	set_click_region(3, ((unsigned char)title_win[2] + 7), ((unsigned char)title_win[3] + 3), ((strlen(&cancel_text) + (unsigned char)title_win[2]) + 6), ((unsigned char)title_win[3] + 3));
	set_click_region(4, 255, 0, 0, 0);
L691a:
	if ((mouse_present) || (on_cancel != 1)) goto L6960;
	set_cursor(title_win, 7, 3);
	print_string(title_win, &cancel_text, -5);
	draw_pcfile_list(list_win, top, 0, n);
	goto L6997;
L6960:
	set_cursor(title_win, 7, 3);
	print_string_hi(title_win, &cancel_text, 3);
	draw_pcfile_list(list_win, top, 1, n);
L6997:
	i = get_menu_choice_animated(20582, 13720);
	if (menu_clicked != 1) goto L69e6;
	switch (i) {
case 0:
	i = 5;
	goto L69e6;
case 1:
	i = 2;
	goto L69e6;
case 2:
	i = 4;
	goto L69e6;
case 3:
	on_cancel = 1;
	i = 5;
	goto L69e6;
	}
L69e6:
	switch (i) {
case 1:
	if (on_cancel != 1) {
	on_cancel = 1;
	}
	goto L6a4d;
case 2:
	if (on_cancel == 1) {
	on_cancel = 0;
	} else {
	if (top > 0) {
	top--;
	}
	}
	goto L6a4d;
case 3:
	if (on_cancel == 1) {
	on_cancel = 0;
	}
	goto L6a4d;
case 4:
	if (on_cancel == 1) {
	on_cancel = 0;
	} else {
	if ((top + 1) < n) {
	top++;
	}
	}
	goto L6a4d;
	}
L6a4d:
	if (i != 5) goto L691a;
	destroy_window(title_win, 0);
	destroy_window(list_win, 0);
	erase_window(main_window, 0);
	f0a42(bottom_line_win, 0);
	if (on_cancel) goto L6a98;
	return top;
L6a98:
	return -1;
}
