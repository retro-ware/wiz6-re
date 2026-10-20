extern char g3648[];
extern char g3649[];
extern char g364a[];
extern char g3732[];
extern char g373c[];
extern char g3746[];
extern char g3750[];
extern char g375b[];
extern char g375c[];
extern char g3813[];
extern char g3816[];
extern char pic_slot_monster[];
extern int monster_groups[];
/* Pick animation frames for the members of group g shown at view position pos. */
choose_monster_frames(g, pos)
{
	int frame;
	int step;
	register int pic;
	register int i;
	pic = (unsigned char)(*(char **)((char *)monster_groups + (g << 1)))[411];
	for (i = 0; (unsigned char)g3816[(314 * pic)] > i; i++) {
	if (((((unsigned)g3813[(314 * pic)] > 0) && ((unsigned char)g3813[(314 * pic)] != 255)) && (pic_slot_monster[pic] != 46)) && (pic_slot_monster[pic] != 36)) {
	frame = ((unsigned char)g3813[(314 * pic)] / 25);
	step = ((unsigned char)g3813[(314 * pic)] % 25);
	if ((pic_slot_monster[pic] == 54) && (!i)) {
	frame = 0;
	step = 0;
	}
	} else {
	frame = (random((unsigned char)g373c[((314 * pic) + i)]) + (unsigned char)g3732[((314 * pic) + i)]);
	step = (random((unsigned char)g3750[((314 * pic) + frame)]) + (unsigned char)g3746[((314 * pic) + frame)]);
	}
	g3648[((pos * 30) + (i * 3))] = *(char *)&frame;
	g3649[((pos * 30) + (i * 3))] = *(char *)&step;
	g364a[((pos * 30) + (i * 3))] = (char)(random((unsigned char)g375c[((314 * pic) + (step << 2))]) + (unsigned char)g375b[((314 * pic) + (step << 2))]);
	}
}
