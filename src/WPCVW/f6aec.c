clamp_toward(p4, p6, p8)
{
	if (p8 != 1) goto L6b13;
	if (p6 > 0) {
	p6 -= p4;
	} else {
	if ((0 - p4) < p6) {
	p6 = (0 - p4);
	}
	}
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
