extern char g3a92[];
extern char g3ac5[];
extern int g501e;
extern int g5020;
extern int g5022;
extern int g5024;
extern int g5026;
extern int g5028;
extern int g502a;
extern int picture_win;
animate_treasure_view()
{
	int l2;
	char l12[10];
	if (g5024) goto L482e;
	g5026 = ((g5026 + 1) % 3);
	goto L4843;
L482e:
	if (g5024 != 1) goto L4843;
	g5026 = ((g5026 + 1) % 2);
L4843:
	render_maze_view();
	if (g501e == 1) {
	l2 = (((g5024 * 3) + g5026) + 1);
	l12[0] = *(char *)&l2;
	l12[(0 + 1)] = 0;
	drv_draw_text(3, (unsigned char)g3a92[(l2 << 1)], (unsigned char)g3ac5[l2], 72, 248, 0, 0, l12);
	}
	if (g5020 >= 0) {
	g5020 = animate_chest_lid(g5020);
	}
	if (g5022 >= 0) {
	g5022 = animate_chest_trap(g502a, g5028, g5022);
	}
	drv_op_c2(picture_win);
	if (g5020 == 1) {
	play_sound(5);
	}
}
