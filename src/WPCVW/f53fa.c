extern int g0004[];
extern int g4410[];
extern int g4412[];
f53fa(p4, p6)
{
	int l2;
	l2 = 0;
L5405:
	f030b(p4, (l2 < 3 ? 3 : 13), (((l2 % 3) << 1) + 14));
	f05a5(p4, *(int *)((char *)g4410 + ((432 * p6) + (l2 << 2))), 3, g0004[l2]);
	f22b7(p4, 47, 9);
	f05a5(p4, *(int *)((char *)g4412 + ((432 * p6) + (l2 << 2))), 3, g0004[l2]);
	l2++;
	if (l2 < 6) goto L5405;
}
