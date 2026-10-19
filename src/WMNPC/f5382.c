extern int g43ce;
extern int g43fc[];
extern int g43fe[];
f5382(p4)
{
	char l4[4];
	int l6;
	*(int *)(l4 + (0 + 2)) = 0;
	*(int *)(l4 + 0) = 0;
	l6 = 0;
	goto L53be;
L5399:
	*(long *)(l4 + 0) += *(long *)((char *)g43fc + (432 * l6));
	*(int *)((char *)g43fe + (432 * l6)) = 0;
	*(int *)((char *)g43fc + (432 * l6)) = 0;
	l6++;
L53be:
	if (l6 < g43ce) goto L5399;
	*(long *)((char *)g43fc + (432 * p4)) = *(long *)(l4 + 0);
}
