extern int g3646;
extern int g4358;
extern int g438e;
extern int g4390[];
extern int g4fbc;
f6d4d()
{
	int l2;
	int l4;
	switch (g4358) {
case -3:
	f36a0(g4fbc);
	g3646 = ((g3646 + 1) % 2);
	goto L6deb;
case -2:
	f8a4c();
	l2 = 0;
L6d79:
	(*(char **)((char *)g4390 + (l2 << 1)))[20] = 255;
	l2++;
	if (l2 < 12) goto L6d79;
	g438e = 0;
	goto L6deb;
case -1:
	l2 = 0;
L6da0:
	l4 = 0;
L6da5:
	f66bf(l2, l4, 0);
	l4++;
	if (l4 < 5) goto L6da5;
	l2++;
	if (l2 < 2) goto L6da0;
	goto L6deb;
default:
	f6913(g4358);
	goto L6deb;
	}
L6deb:
	g4358++;
	if (g4358 != 12) goto L6dfd;
	g4358 = -3;
L6dfd:
	;
}
