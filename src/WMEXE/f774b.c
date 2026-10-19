extern int g5116;
f774b(p4)
{
	g5116 = 1;
	f280c();
	p4 = (p4 * 10);
L7767:
	if (p4 <= 0) goto L779a;
	if (!f0c42()) goto L7778;
	return;
L7778:
	if (!f2643(1)) goto L7792;
	if ((char)f2724(1) != 13) goto L7792;
	return;
L7792:
	f765a();
	p4--;
	goto L7767;
L779a:
	return;
}
