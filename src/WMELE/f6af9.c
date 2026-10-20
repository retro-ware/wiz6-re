extern char g019b[];
extern char g019d[];
extern char g3810[];
extern int g50b4[];
extern int monster_group_count;
extern int monster_groups[];
extern int view_pos_group[];
/* Put group g at view row, col if it has a free member; 0 on success. */
place_group_at(g, row, col)
{
	register int i;
	if (g <= monster_group_count) goto L6b10;
	return -1;
L6b10:
	if ((row != 1) || (g3810[((unsigned char)g019b[monster_groups[g]] * 314)])) goto L6b3a;
	return -1;
L6b3a:
	i = 0;
	goto L6bb1;
L6b3f:
	if (((char *)monster_groups[g] + (44 * i))[42] != -1) goto L6bb0;
	*(int *)((char *)g50b4 + ((row * 10) + (col << 1))) = 1;
	*(int *)((char *)view_pos_group + ((row * 10) + (col << 1))) = g;
	((char *)monster_groups[g] + (44 * i))[42] = (char)((row * 10) + col);
	if (!row) {
	choose_monster_frames(g, col);
	}
	return 0;
L6bb0:
	i++;
L6bb1:
	if ((unsigned char)g019d[monster_groups[g]] > i) goto L6b3f;
	return -1;
}
