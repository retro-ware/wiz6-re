extern char pc_skills[];
extern int pc_level[];
/* Maybe raise skill p6 of member p4 after use (harder with higher level). */
try_raise_skill(member, skill, factor)
{
	if (((unsigned)pc_skills[((432 * member) + skill)] >= 100) || ((random((unsigned char)pc_skills[((432 * member) + skill)]) - (*(int *)((char *)pc_level + (432 * member)) * factor)) > 0)) goto L7812;
	pc_skills[((432 * member) + skill)]++;
L7812:
	;
}
