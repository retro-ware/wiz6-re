extern char g450c[];
extern char g450d[];
extern char pc_condition[];
fb2fd(p4)
{
	int l2;
	l2 = 1;
	if (!pc_condition[(432 * p4)]) goto Lb31c;
	l2 = 0;
Lb31c:
	if (((unsigned)g450c[(432 * p4)] <= 0) && ((unsigned)g450d[(432 * p4)] <= 0)) goto Lb32f;
	l2 = 0;
Lb32f:
	if (l2) goto Lb33d;
	play_sound(0);
Lb33d:
	return l2;
}
