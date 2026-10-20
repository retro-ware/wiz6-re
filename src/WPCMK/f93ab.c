extern char *prompt_win;
extern char char_portrait;
extern char roster_slot_used[];
extern char skill_points_left;
extern char spell_picks_left[];
extern int bonus_points;
extern int g56ce;
extern int sheet_win;
/* Full character creation sequence for a new name, saving it into a roster slot. */
create_character(name, slot)
{
	int i;
	int l4;
	int fd;
	char x6[34];
	int l42;
	int l44;
	int l46;
	setmem(21616, 432, 0);
	strcpy(21616, name);
	clear_name_rows();
	draw_character_sheet();
	bonus_points = -1;
	draw_stats();
	choose_race();
	choose_sex();
	bonus_points = (random(6) + 5);
	if (!random(20)) {
	bonus_points += 8;
	}
	if (!random(20)) {
	bonus_points += 8;
	}
	if (g56ce == 1) {
	bonus_points = 21;
	}
	draw_stats();
	choose_class();
	distribute_bonus_points();
	init_new_character();
	roll_karma();
	f7e92();
	char_portrait = 0;
	choose_portrait();
	give_class_items();
	draw_character_sheet();
	if ((unsigned)skill_points_left > 0) {
	skill_points_screen(prompt_win);
	}
	i = 0;
L9456:
	if ((unsigned)spell_picks_left[i] <= 0) goto L9471;
	choose_starting_spell(sheet_win, prompt_win, i);
	goto L9456;
L9471:
	i++;
	if (i < 4) goto L9456;
	fill_window(prompt_win, 32, 3, 0);
	refresh_window(prompt_win);
	l46 = 1;
	l44 = 1;
	l42 = -1;
	set_cursor(prompt_win, 6, 1);
	print_message(1103, prompt_win, 18);
	l4 = menu_select(prompt_win, 1114, &l46, ((unsigned char)prompt_win[6] + 1), 1, 4, 1, 5, 0);
	if (!l4) {
	access_roster_record(21616, slot, 1);
	roster_slot_used[slot] = 1;
	stop_sound();
	fd = open(make_data_path(21502, 0), 2);
	write(fd, 20432, 24);
	close(fd);
	}
}
