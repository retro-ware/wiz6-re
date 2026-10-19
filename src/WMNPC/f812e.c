f812e(p4, p6, p8)
{
	if (p8 != 1) goto L8155;
	if (p6 <= 0) goto L8145;
	p6 -= p4;
	goto L8153;
L8145:
	if ((0 - p4) >= p6) goto L8153;
	p6 = (0 - p4);
L8153:
	goto L8177;
L8155:
	if (p8) goto L8177;
	if (p6 >= 0) goto L8169;
	p6 += p4;
	goto L8177;
L8169:
	if (p6 >= p4) goto L8177;
	p6 = p4;
L8177:
	return p6;
}
