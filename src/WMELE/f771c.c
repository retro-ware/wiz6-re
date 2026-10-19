extern int party_facing;
/* Move map position x, y by forward/side offsets according to facing. */
step_in_facing(px, py, p8, p10, p12, fwd, side)
char *px;
char *py;
{
	switch (party_facing) {
case 0:
	*(int *)px += fwd;
	*(int *)py += side;
	goto L7780;
case 1:
	*(int *)px += side;
	*(int *)py -= fwd;
	goto L7780;
case 2:
	*(int *)px -= fwd;
	*(int *)py -= side;
	goto L7780;
case 3:
	*(int *)px -= side;
	*(int *)py += fwd;
	goto L7780;
	}
L7780:
	next_sprite_slot(p8, p10, p12, *(int *)px, *(int *)py);
}
