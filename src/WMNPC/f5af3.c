extern int g5264;
extern int loot_count;
extern int message_delay;
f5af3(p4)
{
	if (p4 != 1) goto L5b06;
	f5a1e(message_delay);
	goto L5b1d;
L5b06:
	f5a69();
	clear_window(g5264, 1);
	loot_count = 0;
L5b1d:
	;
}
