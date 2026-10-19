extern char g36e4[];
extern char g3717[];
extern int anim_phase;
extern int g0022[];
extern int g002a[];
extern int g0032[];
extern int g0034[];
extern int g0052[];
extern int picture_win;
animate_door(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	char l16[10];
	int l18;
	int l20;
	if (p4 != 1) goto Lb3d2;
	l18 = 0;
	l20 = (0 - g0022[p8]);
	goto Lb3e7;
Lb3d2:
	l18 = g002a[p8];
	l20 = g0022[p8];
Lb3e7:
	l2 = 0;
Lb3ec:
	anim_phase = ((anim_phase + 1) % 2);
	draw_maze_view_m();
	l4 = 2;
	l6 = (p8 + 10);
	l16[0] = *(char *)&l6;
	l16[(0 + 1)] = 0;
	if (p8 > 0) goto Lb424;
	if (p6 != 1) goto Lb4d9;
Lb424:
	drv_draw_text(l4, (((*(int *)((char *)g0052 + ((p8 * 6) + (p6 << 1))) + (unsigned char)g36e4[((314 * l4) + (l6 << 1))]) + (l2 * l20)) - l18), (unsigned char)g3717[((314 * l4) + l6)], (*(int *)((char *)g0052 + ((p8 * 6) + (p6 << 1))) + *(int *)((char *)g0032 + (p8 << 2))), (*(int *)((char *)g0052 + ((p8 * 6) + (p6 << 1))) + *(int *)((char *)g0034 + (p8 << 2))), 0, 0, l16);
Lb4d9:
	drv_op_c2(picture_win);
	if (p10 <= 0) goto Lb4ee;
	play_sound(p10);
Lb4ee:
	l2++;
	if (l2 < 7) goto Lb3ec;
}
