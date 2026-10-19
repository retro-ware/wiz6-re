extern int g3646;
extern int g502c;
extern int g502e;
f4950()
{
	int l2;
	l2 = 3;
	f280c();
L495e:
	if (f2643(1)) goto L49f1;
	if (!f0c42()) goto L4978;
	return;
L4978:
	if (g502c) goto L49dd;
	g3646 = ((g3646 + 1) % 2);
	f4811();
	f030b(g502e, 39, 4);
	if (l2 >= 2) goto L49bc;
	f22b7(g502e, 32, 1);
	goto L49ce;
L49bc:
	f23e3(g502e, 126, 1);
L49ce:
	l2 = ((l2 + 1) % 4);
	goto L49e0;
L49dd:
	f45b8();
L49e0:
	g502c = ((g502c + 1) % 10);
	goto L495e;
L49f1:
	if ((char)f2724(1) != 13) goto L495e;
	return;
}
