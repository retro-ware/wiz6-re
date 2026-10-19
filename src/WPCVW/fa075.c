extern char g450c[];
extern char g450d[];
extern char pc_condition[];
/* Return 1 when the member has no bad status and is not asleep or paralyzed. */
is_member_able(p4)
{
	int l2;
	l2 = 1;
	if (!pc_condition[(432 * p4)]) goto La094;
	l2 = 0;
La094:
	if ((unsigned)g450c[(432 * p4)] > 0) goto La0a2;
	if ((unsigned)g450d[(432 * p4)] <= 0) goto La0a7;
La0a2:
	l2 = 0;
La0a7:
	return l2;
}
