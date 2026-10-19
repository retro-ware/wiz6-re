extern char g019b[];
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
	pic = (unsigned char)g019b[monster_groups[g]];
	i = 0;
	goto L504c;
L4f23:
	if ((unsigned)g3813[(314 * pic)] <= 0) goto L4f6d;
	if ((unsigned char)g3813[(314 * pic)] == 255) goto L4f6d;
	if (pic_slot_monster[pic] == 46) goto L4f6d;
	if (pic_slot_monster[pic] == 36) goto L4f6d;
	frame = ((unsigned char)g3813[(314 * pic)] / 25);
	step = ((unsigned char)g3813[(314 * pic)] % 25);
	if (pic_slot_monster[pic] != 54) goto L4f6b;
	if (i) goto L4f6b;
	frame = 0;
	step = 0;
L4f6b:
	goto L4fc4;
L4f6d:
	frame = (random((unsigned char)g373c[((314 * pic) + i)]) + (unsigned char)g3732[((314 * pic) + i)]);
	step = (random((unsigned char)g3750[((314 * pic) + frame)]) + (unsigned char)g3746[((314 * pic) + frame)]);
L4fc4:
	g3648[((pos * 30) + (i * 3))] = *(char *)&frame;
	g3649[((pos * 30) + (i * 3))] = *(char *)&step;
	g364a[((pos * 30) + (i * 3))] = (char)(random((unsigned char)g375c[((314 * pic) + (step << 2))]) + (unsigned char)g375b[((314 * pic) + (step << 2))]);
	i++;
L504c:
	if ((unsigned char)g3816[(314 * pic)] > i) goto L4f23;
}
