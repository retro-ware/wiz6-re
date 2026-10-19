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
	register int rsi;
	i = 0;
	goto L51c7;
L5075:
	rsi = (44 * i);
	pos = ((char *)monster_groups[g] + rsi)[42];
	if (pos == -1) goto L51c4;
	row = (pos / 10);
	col = (pos % 10);
	*(int *)((char *)view_pos_group + ((row * 10) + (col << 1))) = 0;
	g4348[((row * 5) + col)] = 0;
	g433e[((row * 5) + col)] = 0;
	((char *)monster_groups[g] + rsi)[42] = 255;
	new_row = (g00ba[((row * 5) + col)] / 10);
	new_col = (g00ba[((row * 5) + col)] % 10);
	if (row != 1) goto L514f;
	if (col) goto L514f;
	new_row = 1;
	new_col = (random(2) + 1);
	if (!*(int *)((char *)view_pos_group + ((new_row * 10) + (new_col << 1)))) goto L514f;
	new_col = ((new_col % 2) + 1);
L514f:
	if (g00ba[((row * 5) + col)] == -1) goto L51c4;
	if (*(int *)((char *)view_pos_group + ((new_row * 10) + (new_col << 1)))) goto L51c4;
	*(int *)((char *)view_pos_group + ((new_row * 10) + (new_col << 1))) = g;
#asm
	db 08bh,046h,0f6h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,003h,046h,0f4h
	db 050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,058h,088h,040h,02ah
#endasm
	if (new_row) goto L51c4;
	choose_monster_frames(g, new_col);
L51c4:
	i++;
L51c7:
	if ((unsigned char)g019d[monster_groups[g]] > i) goto L5075;
	redraw_view_background();
	wait_animating_view(4);
}
