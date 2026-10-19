extern int g3646;
extern int g5036;
extern int g5038;
f533b(p4)
{
	f280c();
	p4 = (p4 * 5);
L534f:
	if (p4 <= 0) goto L53b6;
	if (!f0c42()) goto L5366;
	g5038 = 1;
	return;
L5366:
	if (!f2643(1)) goto L5386;
	if ((char)f2724(1) != 13) goto L5386;
	g5038 = 1;
	return;
L5386:
	if (g5036) goto L53a0;
	g3646 = ((g3646 + 1) % 2);
	f98cb();
	goto L53a3;
L53a0:
	f4655();
L53a3:
	g5036 = ((g5036 + 1) % 10);
	p4--;
	goto L534f;
L53b6:
	return;
}
