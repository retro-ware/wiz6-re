extern char char_class;
extern char char_skills[];
extern char g5632;
extern char skill_points_left;
extern int g5670[];
draw_skill_page(win, win2, page, p10)
char *p10;
{
	int i;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int count;
	switch ((unsigned char)char_class) {
case 0:
	set_class_skill_masks(20477, 20488, 20496, 20502);
	goto L5ccd;
case 1:
	set_class_skill_masks(20511, 20522, 20530, 20536);
	goto L5ccd;
case 2:
	set_class_skill_masks(20545, 20556, 20564, 20570);
	goto L5ccd;
case 3:
	set_class_skill_masks(20579, 20590, 20598, 20604);
	goto L5ccd;
case 4:
	set_class_skill_masks(20613, 20624, 20632, 20638);
	goto L5ccd;
case 5:
	set_class_skill_masks(20647, 20658, 20666, 20672);
	goto L5ccd;
case 6:
	set_class_skill_masks(20681, 20692, 20700, 20706);
	goto L5ccd;
case 7:
	set_class_skill_masks(20715, 20726, 20734, 20740);
	goto L5ccd;
case 8:
	set_class_skill_masks(20749, 20760, 20768, 20774);
	goto L5ccd;
case 9:
	set_class_skill_masks(20783, 20794, 20802, 20808);
	goto L5ccd;
case 10:
	set_class_skill_masks(20817, 20828, 20836, 20842);
	goto L5ccd;
case 11:
	set_class_skill_masks(20851, 20862, 20870, 20876);
	goto L5ccd;
case 12:
	set_class_skill_masks(20885, 20896, 20904, 20910);
	goto L5ccd;
case 13:
	set_class_skill_masks(20919, 20930, 20938, 20944);
	goto L5ccd;
	}
L5ccd:
	fill_window(win, 0, 1, 0);
	set_frame_glyph(win, 0, 0, 14);
	set_frame_glyph(win, 19, 0, 10);
	set_frame_glyph(win, 0, 15, 11);
	set_frame_glyph(win, 19, 15, 8);
	i = 1;
L5d38:
	set_frame_glyph(win, i, 0, 12);
	set_frame_glyph(win, i, 2, 12);
	set_frame_glyph(win, i, 13, 12);
	set_frame_glyph(win, i, 15, 7);
	i++;
	if (i < 19) goto L5d38;
	i = 1;
L5d98:
	set_frame_glyph(win, 0, i, 13);
	set_frame_glyph(win, 19, i, 5);
	i++;
	if (i < 15) goto L5d98;
	set_frame_glyph(win, 0, 2, 33);
	set_frame_glyph(win, 0, 9, 15);
	set_frame_glyph(win, 0, 11, 15);
	set_frame_glyph(win, 0, 13, 16);
	set_frame_glyph(win, 19, 2, 10);
	set_frame_glyph(win, 19, 13, 10);
	defer_window_draw(win);
	set_cursor(win, 1, 1);
	setmem(22048, 20, 32);
	g5632 = 0;
	print_string_hi(win, 22048, 3);
	set_cursor(win, 6, 1);
	print_message((page + 600), win, 18);
	switch (page) {
case 0:
	l4 = 1;
	l6 = 1;
	l8 = 0;
	l10 = 9;
	l12 = 2;
	goto L5f30;
case 1:
	l4 = 36;
	l6 = 37;
	l8 = 10;
	l10 = 16;
	l12 = 14;
	goto L5f30;
case 2:
	l4 = 36;
	l6 = 37;
	l8 = 17;
	l10 = 21;
	l12 = 12;
	goto L5f30;
case 3:
	l4 = 33;
	l6 = 33;
	l8 = 22;
	l10 = 29;
	l12 = 11;
	goto L5f30;
	}
L5f30:
	put_glyph_at_c4(win, 2, 1, (l4 + 1));
	put_glyph_at_c4(win, 17, 1, (l6 + 1));
	count = 0;
	i = l8;
	goto L5fe2;
L5f69:
	if (g5670[i] != 1) goto L5fdf;
	set_cursor(win, 1, (count + 3));
	print_message((i + 5500), win, l12);
	set_cursor(win, 16, (count + 3));
	print_int(win, (unsigned char)char_skills[i], 3, 1);
	*(int *)(p10 + (count << 1)) = i;
	count++;
L5fdf:
	i++;
L5fe2:
	if (i <= l10) goto L5f69;
	set_cursor(win, 1, 14);
	print_message(5530, win, 9);
	set_cursor(win, 16, 14);
	print_int(win, (unsigned char)skill_points_left, 3, 1);
	resume_window_draw(win);
	refresh_window(win);
	return count;
}
