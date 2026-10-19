extern char g450c[];
extern char g450d[];
extern char g4589[];
fa075(p4)
{
	int l2;
	l2 = 1;
	if (!g4589[(432 * p4)]) goto La094;
	l2 = 0;
La094:
	if ((unsigned)g450c[(432 * p4)] > 0) goto La0a2;
	if ((unsigned)g450d[(432 * p4)] <= 0) goto La0a7;
La0a2:
	l2 = 0;
La0a7:
	return l2;
}
