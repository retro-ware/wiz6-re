f4f12(p4)
{
	p4 = (p4 * 10);
L4f25:
	if (p4 <= 0) goto L4f52;
	if (!f2643(1)) goto L4f4a;
	if ((char)f2724(1) != 13) goto L4f4a;
	return 1;
L4f4a:
	f2858();
	p4--;
	goto L4f25;
L4f52:
	return 0;
}
