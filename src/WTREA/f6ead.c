clamp_toward_zero(p4, p6, p8)
{
	if (p8 != 1) goto L6ed4;
	if (p6 <= 0) goto L6ec4;
	p6 -= p4;
	goto L6ed2;
L6ec4:
	if ((0 - p4) >= p6) goto L6ed2;
	p6 = (0 - p4);
L6ed2:
	goto L6ef6;
L6ed4:
	if (p8) goto L6ef6;
	if (p6 >= 0) goto L6ee8;
	p6 += p4;
	goto L6ef6;
L6ee8:
	if (p6 >= p4) goto L6ef6;
	p6 = p4;
L6ef6:
	return p6;
}
