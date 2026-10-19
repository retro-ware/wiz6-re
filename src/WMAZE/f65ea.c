extern char g450c[];
extern char g450d[];
extern char g4589[];
f65ea(p4)
{
	int l2;
	l2 = 1;
	if (!g4589[(432 * p4)]) goto L6609;
	l2 = 0;
L6609:
	if ((unsigned)g450c[(432 * p4)] > 0) goto L6617;
	if ((unsigned)g450d[(432 * p4)] <= 0) goto L661c;
L6617:
	l2 = 0;
L661c:
	if (l2) goto L662a;
	f0aaa(0);
L662a:
	return l2;
}
