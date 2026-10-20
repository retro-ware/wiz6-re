extern int g0002;
extern int msg_not_found;
/* Show consecutive message lines starting at p6 in a text window, paging on '@'. */
show_text_pages(p4, p6)
{
	int l2;
	int l4;
	int l6;
	int l8;
	char *l10;
	l8 = create_window(0, 4, 40, 16, 31, -1, 0, 0);
	draw_text_frame(l8);
	l2 = 1;
	l4 = 1;
	l6 = 1;
L8ee4:
	get_message(p6, 21902);
	if (!msg_not_found) {
	l10 = 21902;
	if (*l10 == 33) {
	l10++;
	l2++;
	}
	if (*l10 == 64) {
	l10++;
	l2 = 13;
	}
	if (l2 == 13) {
	wait_key_or_click(p4);
	draw_text_frame(l8);
	l2 = 1;
	}
	l2++;
	l4 = (20 - ((strlen(l10) + 1) / 2));
	if (*l10 == 36) {
	l10++;
	l4 = 1;
	} else {
	if (*l10 == 94) {
	l10++;
	l4 = l6;
	}
	}
	set_cursor(l8, l4, l2);
	print_string(l8, l10, g0002);
	l6 = l4;
	p6++;
	}
	if (!msg_not_found) goto L8ee4;
	wait_key_or_click(p4);
	destroy_window(l8, 0);
}
