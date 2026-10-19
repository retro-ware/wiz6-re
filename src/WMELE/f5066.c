extern char g00ba[];
extern char g019d[];
extern char g433e[];
extern char g4348[];
extern int monster_groups[];
extern int view_pos_group[];
/* Move the sprites of group g one row forward in the view and redraw. */
place_group_sprites(g)
{
	int i;
	int pos;
	int row;
	int col;
	int new_row;
	int new_col;
	i = 0;
	goto L51c7;
L5075:
	pos = ((char *)monster_groups[g] + (44 * i))[42];
	if (pos == -1) goto L51c4;
	row = (pos / 10);
	col = (pos % 10);
	*(int *)((char *)view_pos_group + ((row * 10) + (col << 1))) = 0;
	g4348[((row * 5) + col)] = 0;
	g433e[((row * 5) + col)] = 0;
	((char *)monster_groups[g] + (44 * i))[42] = 255;
	new_row = (g00ba[((row * 5) + col)] / 10);
	new_col = (g00ba[((row * 5) + col)] % 10);
	if ((row != 1) || (col)) goto L514f;
	new_row = 1;
	new_col = (random(2) + 1);
	if (!*(int *)((char *)view_pos_group + ((new_row * 10) + (new_col << 1)))) goto L514f;
	new_col = ((new_col % 2) + 1);
L514f:
	if ((g00ba[((row * 5) + col)] == -1) || (*(int *)((char *)view_pos_group + ((new_row * 10) + (new_col << 1))))) goto L51c4;
	*(int *)((char *)view_pos_group + ((new_row * 10) + (new_col << 1))) = g;
	((char *)monster_groups[g] + (44 * i))[42] = (char)((new_row * 10) + new_col);
	if (new_row) goto L51c4;
	choose_monster_frames(g, new_col);
L51c4:
	i++;
L51c7:
	if ((unsigned char)g019d[monster_groups[g]] > i) goto L5075;
	redraw_view_background();
	wait_animating_view(4);
}
