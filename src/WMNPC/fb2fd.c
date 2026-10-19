extern char g450c[];
extern char g450d[];
extern char g4589[];
fb2fd(p4)
{
	int l2;
	l2 = 1;
	if (!g4589[(432 * p4)]) goto Lb31c;
	l2 = 0;
Lb31c:
	if ((unsigned)g450c[(432 * p4)] > 0) goto Lb32a;
	if ((unsigned)g450d[(432 * p4)] <= 0) goto Lb32f;
Lb32a:
	l2 = 0;
Lb32f:
	if (l2) goto Lb33d;
	f0aaa(0);
Lb33d:
	return l2;
}
