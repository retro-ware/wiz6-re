extern char pc_skills[];
extern int pc_level[];
try_skill_gain(member, skill, factor)
{
	if ((unsigned)pc_skills[((432 * member) + skill)] >= 100) goto L5a94;
	if ((random((unsigned char)pc_skills[((432 * member) + skill)]) - (*(int *)((char *)pc_level + (432 * member)) * factor)) > 0) goto L5a94;
	pc_skills[((432 * member) + skill)]++;
L5a94:
	;
}
