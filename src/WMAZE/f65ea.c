extern char g450c[];
extern char g450d[];
extern char pc_condition[];
is_member_able(p4)
{
	int l2;
	l2 = 1;
	if (!pc_condition[(432 * p4)]) goto L6609;
	l2 = 0;
L6609:
	if (((unsigned)g450c[(432 * p4)] <= 0) && ((unsigned)g450d[(432 * p4)] <= 0)) goto L661c;
	l2 = 0;
L661c:
	if (l2) goto L662a;
	play_sound(0);
L662a:
	return l2;
}
