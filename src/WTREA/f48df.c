extern int g3646;
extern int g502c;
f48df(p4)
{
	f280c();
	p4 = (p4 * 5);
L48f3:
	if (p4 <= 0) goto L494e;
	if (!f0c42()) goto L4904;
	return;
L4904:
	if (!f2643(1)) goto L491e;
	if ((char)f2724(1) != 13) goto L491e;
	return;
L491e:
	if (g502c) goto L4938;
	g3646 = ((g3646 + 1) % 2);
	f4811();
	goto L493b;
L4938:
	f45b8();
L493b:
	g502c = ((g502c + 1) % 10);
	p4--;
	goto L48f3;
L494e:
	return;
}
