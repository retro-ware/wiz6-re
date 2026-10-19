extern int g0004[];
extern int g546e;
extern int g5498[];
extern int g549a[];
f50d1()
{
	int l2;
	l2 = 0;
L50dc:
	f030b(g546e, (l2 < 3 ? 3 : 13), (((l2 % 3) << 1) + 14));
	f05a5(g546e, *(int *)((char *)g5498 + (l2 << 2)), 3, g0004[l2]);
	f22b7(g546e, 47, 9);
	f05a5(g546e, *(int *)((char *)g549a + (l2 << 2)), 3, g0004[l2]);
	l2++;
	if (l2 < 6) goto L50dc;
}
