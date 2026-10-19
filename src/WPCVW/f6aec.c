f6aec(p4, p6, p8)
{
	if (p8 != 1) goto L6b13;
	if (p6 <= 0) goto L6b03;
	p6 -= p4;
	goto L6b11;
L6b03:
	if ((0 - p4) >= p6) goto L6b11;
	p6 = (0 - p4);
L6b11:
	goto L6b35;
L6b13:
	if (p8) goto L6b35;
	if (p6 >= 0) goto L6b27;
	p6 += p4;
	goto L6b35;
L6b27:
	if (p6 >= p4) goto L6b35;
	p6 = p4;
L6b35:
	return p6;
}
