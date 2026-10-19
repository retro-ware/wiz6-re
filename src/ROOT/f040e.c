f040e(p4)
char *p4;
{
	int l2;
	register int rsi;
	register int rdi;
	rdi = 0;
	l2 = (strlen(p4) - 1);
	goto L0448;
L0426:
	rsi = *(p4 + rdi);
	*(p4 + rdi) = *(p4 + l2);
	*(p4 + l2) = rsi;
	l2--;
	rdi++;
L0448:
	if (rdi < l2) goto L0426;
}
