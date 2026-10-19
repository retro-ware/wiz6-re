extern int party_facing;
step_relative(x, y, p8, p10, p12, fwd, side)
char *x;
char *y;
{
	switch (party_facing) {
case 0:
	*(int *)x += fwd;
	*(int *)y += side;
	goto L8efd;
case 1:
	*(int *)x += side;
	*(int *)y -= fwd;
	goto L8efd;
case 2:
	*(int *)x -= fwd;
	*(int *)y -= side;
	goto L8efd;
case 3:
	*(int *)x -= side;
	*(int *)y += fwd;
	goto L8efd;
	}
L8efd:
	move_to_maze_cell(p8, p10, p12, *(int *)x, *(int *)y);
}
