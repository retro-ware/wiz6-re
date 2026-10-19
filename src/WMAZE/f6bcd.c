extern int g3342;
extern int g363a;
extern int g4fb2;
extern int g4fce;
extern int g503c;
f6bcd()
{
	char x0[4];
	int l6;
	char x6[16];
	int l24;
	char x24[4];
	int l30;
	int l36[3];
	int l38;
	l38 = f011a(0, 19, 40, 5, 20, -1, 0, 0);
	f32be(l38, 32, 3, 0);
	f09fb(g3342, 0);
	f09fb(g4fb2, 0);
	f2a63();
	g503c = 1;
	f53e5(2200);
	l6 = 0;
L6c40:
	l36[l6] = 1;
	l6++;
	if (l6 <= 5) goto L6c40;
	l30 = 0;
	l24 = -1;
	l6 = f5ad8(l38, 2201, l36, 1, 1, 20, 3, 5, 0);
	f02d2(l38, 0);
	switch (l6) {
case 0:
	f664f();
	goto L6ce6;
case 1:
	if (f664f() == -1) goto L6cb1;
	g363a = 7;
L6cb1:
	goto L6ce6;
case 2:
	g363a = 7;
	goto L6ce6;
case 3:
	goto L6ce6;
case 4:
	g363a = 24;
	g4fce = 25;
	goto L6ce6;
case 5:
	goto L6ce6;
	}
L6ce6:
	f0a42(g4fb2, 0);
}
