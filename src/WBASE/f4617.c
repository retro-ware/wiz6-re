extern int g3646;
extern int g4fbc;
extern int g5060;
extern int g5062;
extern int g5064;
f4617(p4)
{
	f280c();
	p4 = (p4 * 5);
L462b:
	if (p4 <= 0) goto L469d;
	if (!f0c42()) goto L463c;
	return;
L463c:
	if (!f2643(1)) goto L4656;
	if ((char)f2724(1) != 13) goto L4656;
	return;
L4656:
	if (g5060) goto L4684;
	g3646 = ((g3646 + 1) % 2);
	f4d1b(g3646, g5064, g5062);
	f36a0(g4fbc);
	goto L468a;
L4684:
	f2858();
	f2858();
L468a:
	g5060 = ((g5060 + 1) % 10);
	p4--;
	goto L462b;
L469d:
	return;
}
