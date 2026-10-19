extern int g3646;
extern int g506a;
f47ce(p4)
{
	f280c();
	p4 = (p4 * 5);
L47e2:
	if (p4 <= 0) goto L483d;
	if (!f0c42()) goto L47f3;
	return;
L47f3:
	if (!f2643(1)) goto L480d;
	if ((char)f2724(1) != 13) goto L480d;
	return;
L480d:
	if (g506a) goto L4827;
	g3646 = ((g3646 + 1) % 2);
	f9e83();
	goto L482a;
L4827:
	f4688();
L482a:
	g506a = ((g506a + 1) % 10);
	p4--;
	goto L47e2;
L483d:
	return;
}
