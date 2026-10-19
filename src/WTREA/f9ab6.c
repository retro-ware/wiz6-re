extern char g4589[];
extern int g43ce;
extern int g43f4[];
extern int g4fb6;
extern long g43c6;
f9ab6()
{
	int l2;
	int l4;
	char l8[4];
	l4 = 0;
	l2 = 0;
	goto L9add;
L9ac8:
	if (g4589[(432 * l2)]) goto L9ada;
	l4++;
L9ada:
	l2++;
L9add:
	if (l2 < g43ce) goto L9ac8;
	*(long *)(l8 + 0) = (g43c6 / (long)l4);
	f075b(5001, 20590);
	f0453(*(int *)(l8 + 0), *(int *)(l8 + (0 + 2)), 20722);
	f05c1(20590, 20722, 36);
	f59e9(g4fb6, 2, 20590, 0, 6);
	l2 = 0;
	goto L9b73;
L9b53:
	if (g4589[(432 * l2)]) goto L9b70;
	*(long *)((char *)g43f4 + (432 * l2)) += *(long *)(l8 + 0);
L9b70:
	l2++;
L9b73:
	if (l2 < g43ce) goto L9b53;
}
