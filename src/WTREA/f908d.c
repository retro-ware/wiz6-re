extern char g450c[];
extern char g450d[];
extern char pc_condition[];
is_member_able(member)
{
	int ok;
	ok = 1;
	if (!pc_condition[(432 * member)]) goto L90ac;
	ok = 0;
L90ac:
	if ((unsigned)g450c[(432 * member)] > 0) goto L90ba;
	if ((unsigned)g450d[(432 * member)] <= 0) goto L90bf;
L90ba:
	ok = 0;
L90bf:
	if (ok) goto L90cd;
	play_sound(0);
L90cd:
	return ok;
}
