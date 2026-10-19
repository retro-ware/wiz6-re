extern int g3646;
extern int g4358;
extern int g438e;
extern int g4390[];
extern int g4fbc;
f511c()
{
	int l2;
	int l4;
	char x4[2];
	switch (g4358) {
case -3:
	f36a0(g4fbc);
	g3646 = ((g3646 + 1) % 2);
	goto L51b2;
case -2:
	fa1c9();
	l2 = 0;
L5147:
	(*(char **)((char *)g4390 + (l2 << 1)))[20] = 255;
	l2++;
	if (l2 < 12) goto L5147;
	g438e = 0;
	goto L51b2;
case -1:
	l2 = 0;
L516e:
	l4 = 0;
L5173:
	f4c7d(l2, l4);
	l4++;
	if (l4 < 5) goto L5173;
	l2++;
	if (l2 < 2) goto L516e;
	goto L51b2;
default:
	f4ebc(g4358);
	goto L51b2;
	}
L51b2:
	g4358++;
	if (g4358 != 12) goto L51c4;
	g4358 = -3;
L51c4:
	;
}
