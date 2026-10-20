extern char g507d[];
extern char g50ac[];
extern char g50b4[];
extern char g50bc[];
extern char g50bd;
extern char g50c4[];
extern char g50cc[];
extern char g50d4[];
extern char g50dc[];
extern char g50dd;
extern int g0042[];
extern int g004a[];
extern int g4fa6;
extern int g508a[];
extern int g5254;
extern int g5256;
extern int g5258;
extern int g525a;
extern int g525c;
extern int g525e;
extern int g5260;
extern int g5262;
extern int game_state_arg;
extern int maze_data;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
extern int picture_win;
extern int view_depth;
extern int view_object_count;
extern int view_rows_open;
/* Render the 3D maze view: walls of up to four cells deep, then queued objects back to front. */
draw_maze_view()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	char *obj;
	char l16[2];
	register int rsi;
	l2 = party_x;
	l4 = party_y;
	l6 = party_cell_x;
	l8 = party_cell_y;
	l10 = party_level;
	g4fa6 = 0;
	view_rows_open = 1;
	drv_op_be(picture_win, 0);
	if (test_bit((maze_data + 1082), (((l10 << 6) + (l8 << 3)) + l6)) != 1) goto La24d;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
	draw_view_frame();
	return;
	}
La24d:
	for (rsi = 0; rsi < 4; rsi++) {
	g50c4[rsi] = 1;
	g50ac[rsi] = 1;
	g50b4[rsi] = 1;
	g50cc[rsi] = 1;
	g50d4[rsi] = 1;
	g50bc[rsi] = 1;
	g50dc[rsi] = 1;
	}
	setmem(20640, 12, 0);
	setmem(20604, 12, 0);
	setmem(20708, 12, 0);
	setmem(20616, 24, 0);
	setmem(20720, 24, 0);
	setmem(20746, 330, 0);
	view_object_count = 0;
	g50ac[0] = 0;
	g50d4[0] = 0;
	g50bc[0] = 0;
	g50bd = 0;
	g50dc[0] = 0;
	g50dd = 0;
	l12 = l10;
	step_relative(&l2, &l4, &l6, &l8, &l12, 0, -1);
	g5258 = 4;
	g5254 = (((party_x + party_y) + party_facing) % 2);
	view_depth = 0;
La352:
	if (view_depth >= g5258) goto La8e6;
	g5256 = ((((party_x + party_y) + party_facing) + view_depth) % 2);
	if (step_relative(&l2, &l4, &l6, &l8, &l10, 0, 1)) {
	if ((game_state_arg == 10) || (game_state_arg == 12)) {
	g507d[(view_depth * 3)] = 1;
	g508a[(view_depth * 3)] = 1;
	g525a = 0;
	g525c = 0;
	g525e = 0;
	} else {
	g525a = 2;
	g525c = 2;
	g525e = 2;
	}
	} else {
	g525a = get_front_wall(l2, l4, l6, l8, l10, 0);
	g525c = get_left_wall(l2, l4, l6, l8, l10, 0);
	g525e = get_right_wall(l2, l4, l6, l8, l10, 0);
	}
	g5260 = get_front_wall(l2, l4, l6, l8, l10, -1);
	g5262 = get_front_wall(l2, l4, l6, l8, l10, 1);
	if (g50c4[view_depth] == 1) {
	draw_wall_column(view_depth, g525a, 1, 72, 248, 122, 122, 0, 0, 91, 23, 23, 26, 26, 29, 32, 32, 29, 178, 178, 199, 199, 242, 257, 278, 278, 299, 299, 314, 314, 329, 150, 150, 214, 214);
	}
	hide_behind_front(view_depth, g525a);
	if (g50c4[view_depth] == 1) {
	draw_side_walls(view_depth, g525c, 7, 4, 15, 19, 83, 87, 106, 114, 193, 196, 272, 275, 293, 296);
	}
	hide_behind_left(view_depth, g525c);
	if (g50c4[view_depth] == 1) {
	draw_side_walls(view_depth, g525e, 13, 7, 19, 15, 87, 83, 110, 118, 196, 193, 275, 272, 296, 293);
	}
	hide_behind_right(view_depth, g525e);
	if (g50bc[view_depth] == 1) {
	draw_floor_ceiling(view_depth, 0, 126, 146, 154, 174, 218, 238);
	}
	if (g50ac[view_depth] == 1) {
	draw_wall_column(view_depth, g5260, 0, 72, g0042[view_depth], 130, 142, 3, 12, 94, 35, 62, 41, 68, 47, 80, 53, 74, 181, 190, 202, 211, 245, 260, 281, 290, 302, 311, 317, 326, 332, 158, 170, 222, 234);
	}
	hide_left_center(view_depth, g5260);
	if (g50b4[view_depth] == 1) {
	draw_wall_column(view_depth, g5260, 0, g0042[view_depth], 248, 134, 138, 6, 9, 97, 38, 59, 44, 65, 50, 77, 56, 71, 184, 187, 205, 208, 248, 263, 284, 287, 305, 308, 320, 323, 335, 162, 166, 226, 230);
	}
	hide_left_far(view_depth, g5260);
	if (g50cc[view_depth] == 1) {
	draw_wall_column(view_depth, g5262, 2, 72, g004a[view_depth], 138, 134, 9, 6, 100, 59, 38, 65, 44, 71, 56, 77, 50, 187, 184, 208, 205, 251, 266, 287, 284, 308, 305, 323, 320, 338, 166, 162, 230, 226);
	}
	hide_right_far(view_depth, g5262);
	if (g50d4[view_depth] == 1) {
	draw_wall_column(view_depth, g5262, 2, g004a[view_depth], 248, 142, 130, 12, 3, 103, 62, 35, 68, 41, 74, 53, 80, 47, 190, 181, 211, 202, 254, 269, 290, 281, 311, 302, 326, 317, 341, 170, 158, 234, 222);
	}
	hide_right_center(view_depth, g5262);
	if (g50dc[view_depth] == 1) {
	draw_floor_ceiling(view_depth, 2, 146, 126, 174, 154, 238, 218);
	}
	view_depth++;
	goto La352;
La8e6:
	for (view_depth = g5258; view_depth >= 0; view_depth--) {
	rsi = view_object_count;
	rsi--;
	goto La9db;
La8f7:
	obj = ((rsi * 11) + 20746);
	g5256 = (((((unsigned char)obj[10] + party_x) + party_y) + party_facing) % 2);
	if (((unsigned char)obj[10] != view_depth) || ((unsigned char)obj[8] != 255)) goto La9da;
	if (*(int *)obj == -1) goto La98b;
	if (*(int *)(obj + 4) == -1) goto La976;
	drv_op_c6((g5256 != 0 ? *(int *)(obj + 4) : *(int *)obj), (unsigned char)obj[9], (g5256 != 0 ? *(int *)obj : -1));
	goto La98b;
La976:
	drv_op_c6(*(int *)obj, (unsigned char)obj[9], -1);
La98b:
	if (*(int *)(obj + 2) == -1) goto La9da;
	if (*(int *)(obj + 6) == -1) goto La9c4;
	drv_op_c6((g5256 != 0 ? *(int *)(obj + 6) : *(int *)(obj + 2)), (unsigned char)obj[9], (g5256 != 0 ? *(int *)(obj + 2) : -1));
	goto La9da;
La9c4:
	drv_op_c6(*(int *)(obj + 2), (unsigned char)obj[9], -1);
La9da:
	rsi--;
La9db:
	if (rsi >= 0) goto La8f7;
	rsi = view_object_count;
	rsi--;
	goto Laa40;
La9ea:
	obj = ((rsi * 11) + 20746);
	if (((unsigned char)obj[10] == view_depth) && ((unsigned char)obj[8] != 255)) {
	l16[0] = obj[9];
	l16[(0 + 1)] = 0;
	drv_draw_text((unsigned char)obj[8], *(int *)obj, *(int *)(obj + 2), *(int *)(obj + 4), *(int *)(obj + 6), 0, 0, l16);
	}
	rsi--;
Laa40:
	if (rsi >= 0) goto La9ea;
	}
	draw_view_frame();
	return;
}
