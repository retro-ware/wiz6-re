extern char g4586[];
extern char g4589[];
extern int g3342;
extern int g363a;
extern int g43ce;
extern int g4400[];
extern int g4404[];
extern int g4fca;
f5404(p4)
{
	int l2;
	f98cb();
	f53e5(p4);
	l2 = 0;
	goto L5463;
L541b:
	if ((unsigned)g4589[(432 * l2)] >= 3) goto L5438;
	f0aaa(((unsigned char)g4586[(432 * l2)] + 8));
L5438:
	g4589[(432 * l2)] = 3;
	*(int *)((char *)g4400 + (432 * l2)) = 0;
	*(int *)((char *)g4404 + (432 * l2)) = 0;
	f4ba8(l2);
	f533b(2);
	l2++;
L5463:
	if (l2 < g43ce) goto L541b;
	f533b((g4fca << 1));
	f09fb(g3342, 1);
	g363a = 8;
}
