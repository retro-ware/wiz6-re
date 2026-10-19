extern char *monster_groups;
extern int party_count;
fc4e7(p4)
{
	int l2;
	int l4;
	l4 = (p4 > 0 ? (p4 - 1) : p4);
	l2 = 0;
Lc501:
	if ((unsigned)(monster_groups + (44 * l4))[34] >= 3) goto Lc521;
	if ((monster_groups + (44 * l4))[43]) goto Lc521;
	return l4;
Lc521:
	l4 = ((party_count - 1) > p4 ? (p4 + 1) : p4);
	l2++;
	if (l2 < 2) goto Lc501;
	return p4;
}
