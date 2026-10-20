extern int g5010;
extern int g50b4[];
extern int monster_group_count;
extern int view_pos_group[];
extern int view_rows_open;
/* Distribute the monster groups over the view positions. */
arrange_monster_positions()
{
	int n;
	int used[5];
	register int row;
	register int col;
	row = 0;
	goto L6d3e;
L6c04:
	for (n = 0; n < 5; n++) {
	*(int *)((char *)g50b4 + ((row * 10) + (n << 1))) = 0;
	used[n] = 0;
	}
	n = 0;
L6c3d:
	if (used[(col = random(5))] == 1) goto L6c3d;
	if ((used[0]) || (g5010 != 1)) goto L6c65;
	col = 0;
L6c65:
	used[col] = 1;
	if (*(int *)((char *)view_pos_group + ((row * 10) + (col << 1)))) goto L6d2f;
	switch (row) {
case 0:
	if ((col >= 3) && (monster_group_count != 1)) goto L6cb1;
	place_first_group_from(1, row, col);
	goto L6cde;
L6cb1:
	if (((col != 3) && (view_rows_open != 1)) && (monster_group_count != 2)) goto L6cd2;
	place_first_group_from(2, row, col);
	goto L6cde;
L6cd2:
	place_first_group_from(3, row, col);
L6cde:
	goto L6d2f;
case 1:
	if (monster_group_count != 1) goto L6cf5;
	place_first_group_from(1, row, col);
	goto L6d20;
L6cf5:
	if (((col != 1) && (col != 2)) && (monster_group_count != 2)) goto L6d14;
	place_first_group_from(2, row, col);
	goto L6d20;
L6d14:
	place_first_group_from(3, row, col);
L6d20:
	goto L6d2f;
	}
L6d2f:
	n++;
	if (n < 5) goto L6c3d;
	row++;
L6d3e:
	if (row <= view_rows_open) goto L6c04;
}
