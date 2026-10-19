extern int party_facing;
step_relative_t(p4, p6, p8, p10, p12, p14, p16)
char *p4;
char *p6;
{
	switch (party_facing) {
case 0:
	*(int *)p4 += p14;
	*(int *)p6 += p16;
	goto L9f27;
case 1:
	*(int *)p4 += p16;
	*(int *)p6 -= p14;
	goto L9f27;
case 2:
	*(int *)p4 -= p14;
	*(int *)p6 -= p16;
	goto L9f27;
case 3:
	*(int *)p4 -= p16;
	*(int *)p6 += p14;
	goto L9f27;
	}
L9f27:
	move_to_view_cell(p8, p10, p12, *(int *)p4, *(int *)p6);
}
