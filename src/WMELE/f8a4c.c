extern char g511b[];
extern char g514a[];
extern char g5152[];
extern char g515b;
extern char g5162[];
extern char g516a[];
extern char g5172[];
extern char g517a[];
extern char g517b;
extern char pclist_pcindex[];
extern int g0042[];
extern int g004a[];
extern int g4fa6;
extern int g5118;
extern int g5128[];
extern int g52f2;
extern int g52f4;
extern int g52f6;
extern int g52f8;
extern int g52fa;
extern int g52fc;
extern int g52fe;
extern int g5300;
extern int game_state_arg;
extern int maze_data;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
extern int picture_win;
extern int view_glyph_count;
extern int view_rows_open;
/* Draw the 3D maze view from the party position and facing. */
draw_maze_view()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	char *entry;
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
	if (test_bit((maze_data + 1082), (((l10 << 6) + (l8 << 3)) + l6)) != 1) goto L8ad0;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
	draw_compass_icons();
	return;
	}
L8ad0:
	for (rsi = 0; rsi < 4; rsi++) {
	g5162[rsi] = 1;
	g514a[rsi] = 1;
	g5152[rsi] = 1;
	g516a[rsi] = 1;
	g5172[rsi] = 1;
	pclist_pcindex[rsi] = 1;
	g517a[rsi] = 1;
	}
	setmem(20798, 12, 0);
	setmem(20762, 12, 0);
	setmem(20866, 12, 0);
	setmem(20774, 24, 0);
	setmem(20878, 24, 0);
	setmem(20904, 330, 0);
	view_glyph_count = 0;
	g514a[0] = 0;
	g5172[0] = 0;
	pclist_pcindex[0] = 0;
	g515b = 0;
	g517a[0] = 0;
	g517b = 0;
	l12 = l10;
	step_in_facing(&l2, &l4, &l6, &l8, &l12, 0, -1);
	g52f6 = 4;
	g52f2 = (((party_x + party_y) + party_facing) % 2);
	g5118 = 0;
L8bd5:
	if (g5118 >= g52f6) goto L9169;
	g52f4 = ((((party_x + party_y) + party_facing) + g5118) % 2);
	if (!step_in_facing(&l2, &l4, &l6, &l8, &l10, 0, 1)) goto L8c7e;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L8c6a;
	g511b[(g5118 * 3)] = 1;
	g5128[(g5118 * 3)] = 1;
	g52f8 = 0;
	g52fa = 0;
	g52fc = 0;
	goto L8c7c;
L8c6a:
	g52f8 = 2;
	g52fa = 2;
	g52fc = 2;
L8c7c:
	goto L8cd2;
L8c7e:
	g52f8 = get_center_wall(l2, l4, l6, l8, l10, 0);
	g52fa = get_left_wall(l2, l4, l6, l8, l10, 0);
	g52fc = get_right_wall(l2, l4, l6, l8, l10, 0);
L8cd2:
	g52fe = get_center_wall(l2, l4, l6, l8, l10, -1);
	g5300 = get_center_wall(l2, l4, l6, l8, l10, 1);
	if (g5162[g5118] != 1) goto L8d80;
	draw_side_walls(g5118, g52f8, 1, 72, 248, 122, 122, 0, 0, 91, 23, 23, 26, 26, 29, 32, 32, 29, 178, 178, 199, 199, 242, 257, 278, 278, 299, 299, 314, 314, 329, 150, 150, 214, 214);
L8d80:
	hide_far_center(g5118, g52f8);
	if (g5162[g5118] != 1) goto L8ddc;
	draw_front_walls(g5118, g52fa, 7, 4, 15, 19, 83, 87, 106, 114, 193, 196, 272, 275, 293, 296);
L8ddc:
	hide_far_left(g5118, g52fa);
	if (g5162[g5118] != 1) goto L8e38;
	draw_front_walls(g5118, g52fc, 13, 7, 19, 15, 87, 83, 110, 118, 196, 193, 275, 272, 296, 293);
L8e38:
	hide_far_right(g5118, g52fc);
	if (pclist_pcindex[g5118] != 1) goto L8e74;
	draw_floor_ceiling(g5118, 0, 126, 146, 154, 174, 218, 238);
L8e74:
	if (g514a[g5118] != 1) goto L8f16;
	draw_side_walls(g5118, g52fe, 0, 72, g0042[g5118], 130, 142, 3, 12, 94, 35, 62, 41, 68, 47, 80, 53, 74, 181, 190, 202, 211, 245, 260, 281, 290, 302, 311, 317, 326, 332, 158, 170, 222, 234);
L8f16:
	f88cc(g5118, g52fe);
	if (g5152[g5118] != 1) goto L8fc6;
	draw_side_walls(g5118, g52fe, 0, g0042[g5118], 248, 134, 138, 6, 9, 97, 38, 59, 44, 65, 50, 77, 56, 71, 184, 187, 205, 208, 248, 263, 284, 287, 305, 308, 320, 323, 335, 162, 166, 226, 230);
L8fc6:
	f88f9(g5118, g52fe);
	if (g516a[g5118] != 1) goto L9076;
	draw_side_walls(g5118, g5300, 2, 72, g004a[g5118], 138, 134, 9, 6, 100, 59, 38, 65, 44, 71, 56, 77, 50, 187, 184, 208, 205, 251, 266, 287, 284, 308, 305, 323, 320, 338, 166, 162, 230, 226);
L9076:
	f892b(g5118, g5300);
	if (g5172[g5118] != 1) goto L9126;
	draw_side_walls(g5118, g5300, 2, g004a[g5118], 248, 142, 130, 12, 3, 103, 62, 35, 68, 41, 74, 53, 80, 47, 190, 181, 211, 202, 254, 269, 290, 281, 311, 302, 326, 317, 341, 170, 158, 234, 222);
L9126:
	f895d(g5118, g5300);
	if (g517a[g5118] != 1) goto L9162;
	draw_floor_ceiling(g5118, 2, 146, 126, 174, 154, 238, 218);
L9162:
	g5118++;
	goto L8bd5;
L9169:
	for (g5118 = g52f6; g5118 >= 0; g5118--) {
	rsi = view_glyph_count;
	rsi--;
	goto L925e;
L917a:
	entry = ((rsi * 11) + 20904);
	g52f4 = (((((unsigned char)entry[10] + party_x) + party_y) + party_facing) % 2);
	if (((unsigned char)entry[10] != g5118) || ((unsigned char)entry[8] != 255)) goto L925d;
	if (*(int *)entry == -1) goto L920e;
	if (*(int *)(entry + 4) == -1) goto L91f9;
	drv_op_c6((g52f4 != 0 ? *(int *)(entry + 4) : *(int *)entry), (unsigned char)entry[9], (g52f4 != 0 ? *(int *)entry : -1));
	goto L920e;
L91f9:
	drv_op_c6(*(int *)entry, (unsigned char)entry[9], -1);
L920e:
	if (*(int *)(entry + 2) == -1) goto L925d;
	if (*(int *)(entry + 6) == -1) goto L9247;
	drv_op_c6((g52f4 != 0 ? *(int *)(entry + 6) : *(int *)(entry + 2)), (unsigned char)entry[9], (g52f4 != 0 ? *(int *)(entry + 2) : -1));
	goto L925d;
L9247:
	drv_op_c6(*(int *)(entry + 2), (unsigned char)entry[9], -1);
L925d:
	rsi--;
L925e:
	if (rsi >= 0) goto L917a;
	rsi = view_glyph_count;
	rsi--;
	goto L92c3;
L926d:
	entry = ((rsi * 11) + 20904);
	if (((unsigned char)entry[10] != g5118) || ((unsigned char)entry[8] == 255)) goto L92c2;
	l16[0] = entry[9];
	l16[(0 + 1)] = 0;
	drv_draw_text((unsigned char)entry[8], *(int *)entry, *(int *)(entry + 2), *(int *)(entry + 4), *(int *)(entry + 6), 0, 0, l16);
L92c2:
	rsi--;
L92c3:
	if (rsi >= 0) goto L926d;
	}
	draw_compass_icons();
	return;
#asm
	db 0e8h,06dh,0f7h,0ffh,036h,0bch,04fh,0e8h,0bah,0a3h,059h,0c3h
#endasm
}
