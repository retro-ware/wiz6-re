extern char *monster_groups;
extern int party_count;
fc4e7(p4)
{
	int l2;
	int l4;
	l4 = (p4 > 0 ? (p4 - 1) : p4);
	for (l2 = 0; l2 < 2; l2++) {
	if (((unsigned)(monster_groups + (44 * l4))[34] >= 3) || ((monster_groups + (44 * l4))[43])) goto Lc521;
	return l4;
Lc521:
	l4 = ((party_count - 1) > p4 ? (p4 + 1) : p4);
	}
	return p4;
}
