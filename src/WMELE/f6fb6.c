extern char g4326[];
extern int bottom_line_win;
extern int g438a;
extern int g438c;
extern int g4fb0;
extern int group_monster_rec[];
extern int main_window;
extern int monster_groups[];
extern int party_picture_win;
extern int sprite_list[];
/* Close the combat windows and free the combat buffers. */
end_encounter()
{
	int l2;
	int l4;
	destroy_window(g438a, 0);
	destroy_window(g438c, 0);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
	resume_window_draw(g4fb0);
	erase_window(main_window, 0);
	defer_window_draw(party_picture_win);
	fill_window(party_picture_win, 26, 3, 0);
	l2 = 0;
L7021:
	set_cursor(party_picture_win, 19, l2);
	put_char_hi(party_picture_win, 27, 3);
	l2++;
	if (l2 < 5) goto L7021;
	resume_window_draw(party_picture_win);
	f0a42(bottom_line_win, 0);
	l2 = 0;
L706a:
	free(group_monster_rec[l2]);
	free(monster_groups[l2]);
	l2++;
	if (l2 < 7) goto L706a;
	l2 = 0;
L7098:
	free(sprite_list[l2]);
	l2++;
	if (l2 < 12) goto L7098;
	l4 = 0;
L70b7:
	g4326[l4] = 0;
	l4++;
	if (l4 < 3) goto L70b7;
}
