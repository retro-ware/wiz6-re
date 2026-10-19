f4572(p4, p6, p8)
{
	long l4;
	l4 = (100L - (((long)p6 * 100) / (long)p8));
	if (l4 > 50L) goto L45b8;
	return 0;
L45b8:
	if (l4 > 66L) goto L45d6;
	return (p4 == 0 ? 5 : 0);
L45d6:
	if (l4 > 75L) goto L45f4;
	return (p4 == 0 ? 10 : 1);
L45f4:
	if (l4 > 90L) goto L4612;
	return (p4 == 0 ? 20 : 2);
L4612:
	return (p4 == 0 ? 40 : 4);
}
