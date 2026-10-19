f09a3(p4)
{
	p4 = (p4 * 10);
L09b6:
	if (p4 <= 0) goto L09e0;
	if (!f2643(1)) goto L09d8;
	if ((char)f2724(1) != 13) goto L09d8;
	return;
L09d8:
	f2858();
	p4--;
	goto L09b6;
L09e0:
	return;
}
