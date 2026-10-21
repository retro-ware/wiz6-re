extern char g453a[];
extern char g4597[];
extern int pc_level[];
fcc36(p4, p6, p8)
char *p6;
char *p8;
{
	int l2;
	int l4;
	l2 = 0;
Lcc42:
	g453a[((432 * p4) + l2)] = 0;
	if (*(int *)((char *)pc_level + (432 * p4)) < (unsigned char)g4597[(432 * p4)]) {
	l4 = ((unsigned)g4597[(432 * p4)] <= 16 ? ((unsigned char)g4597[(432 * p4)] - 1) : 16);
	} else {
	l4 = (*(int *)((char *)pc_level + (432 * p4)) <= 16 ? (*(int *)((char *)pc_level + (432 * p4)) - 1) : 16);
	}
	add_skill_bonus(p4, l2, ((((p8[l2] + -48) * l4) + (p6[l2] * 4)) + -260));
	l2++;
	if (l2 < 14) goto Lcc42;
}
