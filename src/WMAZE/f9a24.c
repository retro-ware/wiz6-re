extern char pc_skills[];
extern int pc_level[];
try_skill_gain(p4, p6, p8)
{
	if (((unsigned)pc_skills[((432 * p4) + p6)] >= 100) || ((random((unsigned char)pc_skills[((432 * p4) + p6)]) - (*(int *)((char *)pc_level + (432 * p4)) * p8)) > 0)) goto L9a62;
	pc_skills[((432 * p4) + p6)]++;
L9a62:
	;
}
