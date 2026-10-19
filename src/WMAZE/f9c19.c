extern int g3646;
extern int g5036;
extern int g522a;
f9c19()
{
	int l2;
	l2 = 3;
	f280c();
L9c27:
	if (f2643(1)) goto L9ccc;
	if (!f0c42()) goto L9c41;
	return;
L9c41:
	if (g5036) goto L9cb8;
	g3646 = ((g3646 + 1) % 2);
	f98cb();
	if (l2 >= 2) goto L9c85;
	f030b(g522a, 39, 4);
	f22b7(g522a, 32, 1);
	goto L9ca9;
L9c85:
	f030b(g522a, 39, 4);
	f23e3(g522a, 126, 1);
L9ca9:
	l2 = ((l2 + 1) % 4);
	goto L9cbb;
L9cb8:
	f4655();
L9cbb:
	g5036 = ((g5036 + 1) % 10);
	goto L9c27;
L9ccc:
	if ((char)f2724(1) != 13) goto L9c27;
	return;
}
