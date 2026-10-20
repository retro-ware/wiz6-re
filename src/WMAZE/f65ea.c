extern char g450c[];
extern char g450d[];
extern char pc_condition[];
is_member_able(p4)
{
	int l2;
	l2 = 1;
	if (pc_condition[(432 * p4)]) {
	l2 = 0;
	}
	if (((unsigned)g450c[(432 * p4)] > 0) || ((unsigned)g450d[(432 * p4)] > 0)) {
	l2 = 0;
	}
	if (!l2) {
	play_sound(0);
	}
	return l2;
}
