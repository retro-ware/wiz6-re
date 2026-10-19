extern int g3646;
extern int g4358;
extern int g438e;
extern int g4390[];
extern int g4fbc;
f55dc()
{
	int l2;
	int l4;
	switch (g4358) {
case -3:
	f36a0(g4fbc);
	g3646 = ((g3646 + 1) % 2);
	goto L567a;
case -2:
	fee2e();
	l2 = 0;
L5608:
	(*(char **)((char *)g4390 + (l2 << 1)))[20] = 255;
	l2++;
	if (l2 < 12) goto L5608;
	g438e = 0;
	goto L567a;
case -1:
	l2 = 0;
L562f:
	l4 = 0;
L5634:
	f49db(l2, l4, 0);
	l4++;
	if (l4 < 5) goto L5634;
	l2++;
	if (l2 < 2) goto L562f;
	goto L567a;
default:
	f4c09(g4358);
	goto L567a;
	}
L567a:
	g4358++;
	if (g4358 != 12) goto L568c;
	g4358 = -3;
L568c:
	;
}
