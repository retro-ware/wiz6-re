extern char g450c[];
extern char g450d[];
extern char pc_condition[];
is_member_able(member)
{
	int ok;
	ok = 1;
	if (pc_condition[(432 * member)]) {
	ok = 0;
	}
	if (((unsigned)g450c[(432 * member)] > 0) || ((unsigned)g450d[(432 * member)] > 0)) {
	ok = 0;
	}
	if (!ok) {
	play_sound(0);
	}
	return ok;
}
