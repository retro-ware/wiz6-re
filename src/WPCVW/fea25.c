extern char pc_skills[];
extern int pc_level[];
raise_skill(p4, p6, p8, p10, p12)
{
	int l2;
	if ((l2 = ((random(p10) + (p6 / p8)) - (*(int *)((char *)pc_level + (432 * p4)) / 3))) < 0) goto Lea69;
	if ((unsigned)pc_skills[((432 * p4) + p12)] <= 50) goto Lea6e;
Lea69:
	l2 = 0;
Lea6e:
	pc_skills[((432 * p4) + p12)] = (char)((unsigned char)pc_skills[((432 * p4) + p12)] + l2);
	return l2;
}
