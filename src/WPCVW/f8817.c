extern int g553c;
extern int g5754;
extern int g5756;
extern int g5758;
extern int g578a[];
f8817()
{
	f030b(g5754, g5756, g5758);
	if (g578a[g553c] < 16) goto L885c;
	f251d(g5754, ((g553c * 24) + 22362), (g578a[g553c] + -15));
	goto L8882;
L885c:
	f24e9(g5754, ((g553c * 24) + 22362), g578a[g553c]);
L8882:
	g553c = ((g553c + 1) % 2);
}
