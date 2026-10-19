extern char g450c[];
extern char g450d[];
extern char g4589[];
f908d(p4)
{
	int l2;
	l2 = 1;
	if (!g4589[(432 * p4)]) goto L90ac;
	l2 = 0;
L90ac:
	if ((unsigned)g450c[(432 * p4)] > 0) goto L90ba;
	if ((unsigned)g450d[(432 * p4)] <= 0) goto L90bf;
L90ba:
	l2 = 0;
L90bf:
	if (l2) goto L90cd;
	f0aaa(0);
L90cd:
	return l2;
}
