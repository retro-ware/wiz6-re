f5a1e(p4)
{
	f280c();
	p4 = (p4 * 10);
L5a34:
	if (p4 <= 0) goto L5a67;
	if (!f0c42()) goto L5a45;
	return;
L5a45:
	if (!f2643(1)) goto L5a5f;
	if ((char)f2724(1) != 13) goto L5a5f;
	return;
L5a5f:
	f55dc();
	p4--;
	goto L5a34;
L5a67:
	return;
}
