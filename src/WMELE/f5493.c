extern char pc_skills[];
extern int pc_level[];
/* Possibly raise skill of member by a random check. */
maybe_raise_skill(member, skill, p8)
{
	if (((unsigned)pc_skills[((432 * member) + skill)] < 100) && ((random((unsigned char)pc_skills[((432 * member) + skill)]) - (*(int *)((char *)pc_level + (432 * member)) * p8)) <= 0)) {
	pc_skills[((432 * member) + skill)]++;
	}
}
