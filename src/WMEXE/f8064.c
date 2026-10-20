extern int monster_groups[];
f8064(p4, p6, p8, p10)
{
	int l2;
	int l4;
	l2 = (unsigned char)((char *)monster_groups[p4] + p6)[396];
	if (random(p10) >= l2) goto L80b9;
	l4 = (int)(((long)l2 * p8) / 100L);
L80a3:
	if (l4 <= 0) goto L80b9;
	p8 -= random(2);
	l4--;
	goto L80a3;
L80b9:
	if (p8 < 1) {
	p8 = 1;
	}
	return p8;
}
