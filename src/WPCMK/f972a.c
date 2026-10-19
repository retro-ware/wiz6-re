extern char char_portrait;
extern int bonus_points;
extern int prompt_win;
extern int sheet_win;
load_and_show_character(slot)
{
	draw_creation_screen(sheet_win, prompt_win);
	access_roster_record(21616, slot, 0);
	bonus_points = -1;
	load_portrait((unsigned char)char_portrait);
	draw_portrait(sheet_win, 1, 1);
	draw_sex_race_class();
	draw_character_sheet();
	draw_stats();
}
