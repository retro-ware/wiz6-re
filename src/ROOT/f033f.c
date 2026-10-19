f033f(p4, p6, p8, p10, p12)
{
	char l80[80];
	setmem(l80, 80, 32);
	l80[((p10 - p6) + 1)] = 0;
	goto L038a;
L0367:
	f030b(p4, p6, p8);
	f24e9(p4, l80, 0);
	p8++;
L038a:
	if (p8 <= p12) goto L0367;
}
