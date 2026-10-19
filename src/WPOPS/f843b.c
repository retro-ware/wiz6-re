extern int group_monster_rec[];
pick_random_row(p4)
{
	int l2;
	l2 = 0;
L8447:
	if ((((char *)group_monster_rec[p4] + l2)[128]) && (random(2) != 1)) goto L8478;
	l2 = ((l2 + 1) % 3);
	goto L8447;
L8478:
	return l2;
}
