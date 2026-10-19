extern int g5010;
extern int g5012;
extern int g5014;
extern int g5016;
extern int g5018[];
f50a2()
{
	f030b(g5014, g5012, g5010);
	if (g5018[g5016] < 16) goto L50e7;
	f251d(g5014, ((g5016 * 24) + 20508), (g5018[g5016] + -15));
	goto L510d;
L50e7:
	f24e9(g5014, ((g5016 * 24) + 20508), g5018[g5016]);
L510d:
	g5016 = ((g5016 + 1) % 2);
}
