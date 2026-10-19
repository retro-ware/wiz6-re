extern int party_facing;
step_relative_m(p4, p6, p8, p10, p12, p14, p16)
char *p4;
char *p6;
{
	switch (party_facing) {
case 0:
	*(int *)p4 += p14;
	*(int *)p6 += p16;
	goto L7d6f;
case 1:
	*(int *)p4 += p16;
	*(int *)p6 -= p14;
	goto L7d6f;
case 2:
	*(int *)p4 -= p14;
	*(int *)p6 -= p16;
	goto L7d6f;
case 3:
	*(int *)p4 -= p16;
	*(int *)p6 += p14;
	goto L7d6f;
	}
L7d6f:
	move_to_maze_cell_m(p8, p10, p12, *(int *)p4, *(int *)p6);
}
