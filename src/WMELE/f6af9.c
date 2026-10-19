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
	register int rdi;
	if (g <= monster_group_count) goto L6b10;
	return -1;
L6b10:
	if (row != 1) goto L6b3a;
	if (g3810[((unsigned char)g019b[monster_groups[g]] * 314)]) goto L6b3a;
	return -1;
L6b3a:
	i = 0;
	goto L6bb1;
L6b3f:
	rdi = (44 * i);
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,079h,02ah,0ffh,075h
	db 059h
#endasm
	*(int *)((char *)g50b4 + ((row * 10) + (col << 1))) = 1;
	*(int *)((char *)view_pos_group + ((row * 10) + (col << 1))) = g;
	((char *)monster_groups[g] + rdi)[42] = (char)((row * 10) + col);
	if (row) goto L6baa;
	choose_monster_frames(g, col);
L6baa:
	return 0;
L6bb0:
	i++;
L6bb1:
	if ((unsigned char)g019d[monster_groups[g]] > i) goto L6b3f;
	return -1;
}
