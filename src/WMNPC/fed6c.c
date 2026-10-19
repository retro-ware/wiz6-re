extern int anim_phase;
extern int g4ec8[];
extern int g4f86;
extern int g4fac;
extern int party_facing;
fed6c()
{
	int l2;
	int l4;
	int l6;
	l2 = 0;
Led77:
	switch (l2) {
case 3:
	l4 = 346;
	l6 = (anim_phase + 1);
	goto Leded;
case 1:
	l4 = 349;
	l6 = (anim_phase + 1);
	goto Leded;
case 4:
	l4 = 352;
	l6 = (anim_phase + 1);
	goto Leded;
case 0:
	l4 = 361;
	l6 = (party_facing + 1);
	goto Leded;
case 2:
	l4 = 355;
	l6 = ((anim_phase * g4f86) + 1);
	goto Leded;
case 5:
	l4 = 358;
	l6 = (anim_phase + 1);
	goto Leded;
	}
Leded:
	if (*(int *)((char *)g4ec8 + (l2 << 2)) <= 0) goto Lee03;
	l4 += l6;
Lee03:
	drv_op_c6(l4, 0, -1);
	l2++;
	if (l2 < 6) goto Led77;
	drv_op_c2(g4fac);
}
