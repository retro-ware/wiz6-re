f45a6(p4)
{
	f280c();
	p4 = (p4 * 10);
L45bc:
	if (p4 <= 0) goto L45ef;
	if (!f0c42()) goto L45cd;
	return;
L45cd:
	if (!f2643(1)) goto L45e7;
	if ((char)f2724(1) != 13) goto L45e7;
	return;
L45e7:
	f6d4d();
	p4--;
	goto L45bc;
L45ef:
	return;
}
