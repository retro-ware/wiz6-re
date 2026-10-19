extern char g5285[];
extern char g52b4[];
extern char g52bc[];
extern char g52c4[];
extern char g52c5;
extern char g52cc[];
extern char g52d4[];
extern char g52dc[];
extern char g52e4[];
extern char g52e5;
extern int g0042[];
extern int g004a[];
extern int g4fa6;
extern int g5282;
extern int g5292[];
extern int g5310;
extern int g545c;
extern int g545e;
extern int g5460;
extern int g5462;
extern int g5464;
extern int g5466;
extern int g5468;
extern int g546a;
extern int game_state_arg;
extern int maze_data;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
extern int picture_win;
extern int view_rows_open;
render_maze_view()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	char *l14;
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
	if (test_bit((maze_data + 1082), (((l10 << 6) + (l8 << 3)) + l6)) != 1) goto Lb277;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
	draw_view_frame_t();
	return;
	}
Lb277:
	for (rsi = 0; rsi < 4; rsi++) {
	g52cc[rsi] = 1;
	g52b4[rsi] = 1;
	g52bc[rsi] = 1;
	g52d4[rsi] = 1;
	g52dc[rsi] = 1;
	g52c4[rsi] = 1;
	g52e4[rsi] = 1;
	}
	setmem(21160, 12, 0);
	setmem(21124, 12, 0);
	setmem(21228, 12, 0);
	setmem(21136, 24, 0);
	setmem(21240, 24, 0);
	setmem(21266, 330, 0);
	g5310 = 0;
	g52b4[0] = 0;
	g52dc[0] = 0;
	g52c4[0] = 0;
	g52c5 = 0;
	g52e4[0] = 0;
	g52e5 = 0;
	l12 = l10;
	step_relative_t(&l2, &l4, &l6, &l8, &l12, 0, -1);
	g5460 = 4;
	g545c = (((party_x + party_y) + party_facing) % 2);
	g5282 = 0;
Lb37c:
	if (g5282 >= g5460) goto Lb910;
	g545e = ((((party_x + party_y) + party_facing) + g5282) % 2);
	if (!step_relative_t(&l2, &l4, &l6, &l8, &l10, 0, 1)) goto Lb425;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto Lb411;
	g5285[(g5282 * 3)] = 1;
	g5292[(g5282 * 3)] = 1;
	g5462 = 0;
	g5464 = 0;
	g5466 = 0;
	goto Lb423;
Lb411:
	g5462 = 2;
	g5464 = 2;
	g5466 = 2;
Lb423:
	goto Lb479;
Lb425:
	g5462 = get_front_wall_t(l2, l4, l6, l8, l10, 0);
	g5464 = get_left_wall_t(l2, l4, l6, l8, l10, 0);
	g5466 = get_right_wall_t(l2, l4, l6, l8, l10, 0);
Lb479:
	g5468 = get_front_wall_t(l2, l4, l6, l8, l10, -1);
	g546a = get_front_wall_t(l2, l4, l6, l8, l10, 1);
	if (g52cc[g5282] != 1) goto Lb527;
	draw_wall_column_t(g5282, g5462, 1, 72, 248, 122, 122, 0, 0, 91, 23, 23, 26, 26, 29, 32, 32, 29, 178, 178, 199, 199, 242, 257, 278, 278, 299, 299, 314, 314, 329, 150, 150, 214, 214);
Lb527:
	fafae(g5282, g5462);
	if (g52cc[g5282] != 1) goto Lb583;
	draw_side_walls_t(g5282, g5464, 7, 4, 15, 19, 83, 87, 106, 114, 193, 196, 272, 275, 293, 296);
Lb583:
	fb011(g5282, g5464);
	if (g52cc[g5282] != 1) goto Lb5df;
	draw_side_walls_t(g5282, g5466, 13, 7, 19, 15, 87, 83, 110, 118, 196, 193, 275, 272, 296, 293);
Lb5df:
	fb042(g5282, g5466);
	if (g52c4[g5282] != 1) goto Lb61b;
	draw_floor_ceiling_t(g5282, 0, 126, 146, 154, 174, 218, 238);
Lb61b:
	if (g52b4[g5282] != 1) goto Lb6bd;
	draw_wall_column_t(g5282, g5468, 0, 72, g0042[g5282], 130, 142, 3, 12, 94, 35, 62, 41, 68, 47, 80, 53, 74, 181, 190, 202, 211, 245, 260, 281, 290, 302, 311, 317, 326, 332, 158, 170, 222, 234);
Lb6bd:
	fb073(g5282, g5468);
	if (g52bc[g5282] != 1) goto Lb76d;
	draw_wall_column_t(g5282, g5468, 0, g0042[g5282], 248, 134, 138, 6, 9, 97, 38, 59, 44, 65, 50, 77, 56, 71, 184, 187, 205, 208, 248, 263, 284, 287, 305, 308, 320, 323, 335, 162, 166, 226, 230);
Lb76d:
	fb0a0(g5282, g5468);
	if (g52d4[g5282] != 1) goto Lb81d;
	draw_wall_column_t(g5282, g546a, 2, 72, g004a[g5282], 138, 134, 9, 6, 100, 59, 38, 65, 44, 71, 56, 77, 50, 187, 184, 208, 205, 251, 266, 287, 284, 308, 305, 323, 320, 338, 166, 162, 230, 226);
Lb81d:
	fb0d2(g5282, g546a);
	if (g52dc[g5282] != 1) goto Lb8cd;
	draw_wall_column_t(g5282, g546a, 2, g004a[g5282], 248, 142, 130, 12, 3, 103, 62, 35, 68, 41, 74, 53, 80, 47, 190, 181, 211, 202, 254, 269, 290, 281, 311, 302, 326, 317, 341, 170, 158, 234, 222);
Lb8cd:
	fb104(g5282, g546a);
	if (g52e4[g5282] != 1) goto Lb909;
	draw_floor_ceiling_t(g5282, 2, 146, 126, 174, 154, 238, 218);
Lb909:
	g5282++;
	goto Lb37c;
Lb910:
	for (g5282 = g5460; g5282 >= 0; g5282--) {
	rsi = g5310;
	rsi--;
	goto Lba05;
Lb921:
	l14 = ((rsi * 11) + 21266);
	g545e = (((((unsigned char)l14[10] + party_x) + party_y) + party_facing) % 2);
	if (((unsigned char)l14[10] != g5282) || ((unsigned char)l14[8] != 255)) goto Lba04;
	if (*(int *)l14 == -1) goto Lb9b5;
	if (*(int *)(l14 + 4) == -1) goto Lb9a0;
	drv_op_c6((g545e != 0 ? *(int *)(l14 + 4) : *(int *)l14), (unsigned char)l14[9], (g545e != 0 ? *(int *)l14 : -1));
	goto Lb9b5;
Lb9a0:
	drv_op_c6(*(int *)l14, (unsigned char)l14[9], -1);
Lb9b5:
	if (*(int *)(l14 + 2) == -1) goto Lba04;
	if (*(int *)(l14 + 6) == -1) goto Lb9ee;
	drv_op_c6((g545e != 0 ? *(int *)(l14 + 6) : *(int *)(l14 + 2)), (unsigned char)l14[9], (g545e != 0 ? *(int *)(l14 + 2) : -1));
	goto Lba04;
Lb9ee:
	drv_op_c6(*(int *)(l14 + 2), (unsigned char)l14[9], -1);
Lba04:
	rsi--;
Lba05:
	if (rsi >= 0) goto Lb921;
	rsi = g5310;
	rsi--;
	goto Lba6a;
Lba14:
	l14 = ((rsi * 11) + 21266);
	if (((unsigned char)l14[10] != g5282) || ((unsigned char)l14[8] == 255)) goto Lba69;
	l16[0] = l14[9];
	l16[(0 + 1)] = 0;
	drv_draw_text((unsigned char)l14[8], *(int *)l14, *(int *)(l14 + 2), *(int *)(l14 + 4), *(int *)(l14 + 6), 0, 0, l16);
Lba69:
	rsi--;
Lba6a:
	if (rsi >= 0) goto Lba14;
	}
	draw_view_frame_t();
	return;
#asm
	db 0e8h,06dh,0f7h,0ffh,036h,0bch,04fh,0e8h,013h,07ch,059h,0c3h
#endasm
}
