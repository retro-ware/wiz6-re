extern int party_facing;
f82c3(p4, p6, p8, p10, p12, p14, p16)
char *p4;
char *p6;
{
	switch (party_facing) {
case 0:
	*(int *)p4 += p14;
	*(int *)p6 += p16;
	goto L8327;
case 1:
	*(int *)p4 += p16;
	*(int *)p6 -= p14;
	goto L8327;
case 2:
	*(int *)p4 -= p14;
	*(int *)p6 -= p16;
	goto L8327;
case 3:
	*(int *)p4 -= p16;
	*(int *)p6 += p14;
	goto L8327;
	}
L8327:
	next_sprite_slot_dopt(p8, p10, p12, *(int *)p4, *(int *)p6);
}
