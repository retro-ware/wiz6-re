extern int g4358;
extern int g5262;
extern int g5264;
f5a69()
{
	int l2;
	l2 = 3;
	f280c();
L5a77:
	if (f2643(1)) goto L5ae5;
	if (!f0c42()) goto L5a8e;
	return;
L5a8e:
	f55dc();
	if (g4358 != -2) goto L5ae3;
	f030b(g5264, 39, g5262);
	if (l2 >= 2) goto L5ac4;
	f22b7(g5264, 32, 1);
	goto L5ad6;
L5ac4:
	f23e3(g5264, 126, 1);
L5ad6:
	l2 = ((l2 + 1) % 4);
L5ae3:
	goto L5a77;
L5ae5:
	if ((char)f2724(1) != 13) goto L5a77;
	return;
}
