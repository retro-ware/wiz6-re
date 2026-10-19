f8861(p4, p6, p8)
{
	if (p8 != 1) goto L8888;
	if (p6 <= 0) goto L8878;
	p6 -= p4;
	goto L8886;
L8878:
	if ((0 - p4) >= p6) goto L8886;
	p6 = (0 - p4);
L8886:
	goto L88aa;
L8888:
	if (p8) goto L88aa;
	if (p6 >= 0) goto L889c;
	p6 += p4;
	goto L88aa;
L889c:
	if (p6 >= p4) goto L88aa;
	p6 = p4;
L88aa:
	return p6;
}
