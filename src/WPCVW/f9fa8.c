f9fa8(p4)
{
	int l2;
	f9f7f(p4, 0, 0, 20);
	f9f7f(p4, 19, 0, 8);
	l2 = 1;
L9fda:
	f9f7f(p4, l2, 0, 7);
	l2++;
	if (l2 < 19) goto L9fda;
	l2 = 1;
L9ffe:
	f9f7f(p4, 0, l2, 5);
	l2++;
	if (l2 < 15) goto L9ffe;
	f9f7f(p4, 0, 9, 10);
	f9f7f(p4, 0, 11, 10);
	f9f7f(p4, 0, 13, 10);
	f9f7f(p4, 0, 15, 8);
}
