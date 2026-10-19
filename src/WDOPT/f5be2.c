extern char g4326;
extern char g4330;
extern int anim_phase;
extern int g506a;
extern int g50c6[];
extern int g50f8;
extern int g50fc;
extern int g50fe[];
extern int g5130;
extern int g5132[];
extern int g5164;
extern int g5166;
extern int g5168;
extern int g516a;
extern int g516c;
extern int g516e;
extern int g5170;
extern int g5172;
extern int g5174;
extern int g5176;
extern int g5178;
extern int g517a[];
extern int g51ac;
extern int g51ae;
extern int g51b0;
extern int g51b2;
extern int g51b4;
extern int party_x;
extern int party_y;
extern int pclist_sex;
extern int picture_win;
/* Show an overhead map around the party, size by spell power, until a key. */
show_overhead_map(power)
{
	int col;
	int row;
	int win;
	int cols;
	int rows;
	int center;
	int waiting;
	cols = (power > 3 ? 5 : 3);
	rows = (power > 3 ? 5 : 3);
	center = (power > 3 ? 2 : 1);
	g51ac = (30 - (cols << 1));
	g51ae = 5;
	g5178 = ((power != 1) && (power != 4) ? 1 : -1);
	g50fc = ((power != 1) && (power != 4) ? 5 : -1);
	g516c = ((power == 1) || (power == 4) ? -1 : ((power == 2) || (power == 5) ? 5 : 6));
	g516e = ((power == 1) || (power == 4) ? -1 : ((power == 2) || (power == 5) ? 5 : 7));
	g5170 = ((power == 1) || (power == 4) ? -1 : ((power == 2) || (power == 5) ? 5 : 8));
	g5130 = ((power != 1) && (power != 4) ? 9 : -1);
	g5172 = ((power == 1) || (power == 4) ? -1 : ((power == 2) || (power == 5) ? 9 : 10));
	g5174 = ((power == 1) || (power == 4) ? -1 : ((power == 2) || (power == 5) ? 9 : 11));
	g5176 = ((power == 1) || (power == 4) ? -1 : ((power == 2) || (power == 5) ? 9 : 12));
	g51b2 = 13;
	pclist_sex = 14;
	g50f8 = 15;
	g5168 = 16;
	g5164 = ((power == 3) || (power == 6) ? 17 : 13);
	g5166 = ((power == 3) || (power == 6) ? 18 : 13);
	g51b0 = 19;
	g516a = g5168;
	g51b4 = 20;
	for (col = 0; col < 5; col++) {
	for (row = 0; row < 5; row++) {
	*(int *)((char *)g50c6 + ((col * 10) + (row << 1))) = g51b2;
	*(int *)((char *)g50fe + ((col * 10) + (row << 1))) = -1;
	*(int *)((char *)g5132 + ((col * 10) + (row << 1))) = -1;
	*(int *)((char *)g517a + ((col * 10) + (row << 1))) = -1;
	}
	}
	load_monster_pic_dopt(0, 4);
	win = create_window(g51ac, g51ae, (cols << 1), (rows << 1), 20, -1, 2, 0);
	clear_click_flag();
	flush_keys();
	waiting = 1;
L5e5c:
	anim_phase = ((anim_phase + 1) % 2);
	draw_maze_view_dopt();
	drv_op_be(win, 0);
	draw_map_border(cols, rows);
	for (row = 0; row < rows; row++) {
	for (col = 0; col < cols; col++) {
	map_cell(((party_x + col) - center), ((party_y - row) + center), col, row);
	}
	}
	for (row = 0; row < rows; row++) {
	for (col = 0; col < cols; col++) {
	set_map_corner(col, row);
	}
	}
	for (row = 0; row < rows; row++) {
	for (col = 0; col < cols; col++) {
	draw_map_floor(col, row, *(int *)((char *)g50c6 + ((col * 10) + (row << 1))));
	}
	}
	for (row = 0; row < rows; row++) {
	for (col = 0; col < cols; col++) {
	draw_map_walls(col, row, *(int *)((char *)g50fe + ((col * 10) + (row << 1))), *(int *)((char *)g5132 + ((col * 10) + (row << 1))), *(int *)((char *)g517a + ((col * 10) + (row << 1))));
	}
	}
	draw_map_party(center, center, g51b4);
	drv_op_c2(picture_win);
	if (!check_screen_click()) goto L5fba;
	waiting = 0;
L5fba:
	if ((!key_available(1)) || ((char)get_key(1) != 13)) goto L5fd7;
	waiting = 0;
L5fd7:
	if (waiting) goto L5e5c;
	destroy_window(win, 0);
	redraw_maze_view();
	g506a = 0;
	g4330 = -1;
	g4326 = 0;
}
