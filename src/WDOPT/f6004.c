f6004(p4, p6, p8)
{
	if (p8 != 1) goto L602b;
	if (p6 <= 0) goto L601b;
	p6 -= p4;
	goto L6029;
L601b:
	if ((0 - p4) >= p6) goto L6029;
	p6 = (0 - p4);
L6029:
	goto L604d;
L602b:
	if (p8) goto L604d;
	if (p6 >= 0) goto L603f;
	p6 += p4;
	goto L604d;
L603f:
	if (p6 >= p4) goto L604d;
	p6 = p4;
L604d:
	return p6;
}
