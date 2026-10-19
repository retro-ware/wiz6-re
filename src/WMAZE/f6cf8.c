extern char *g3342;
extern char *g4f84;
extern char g4594[];
extern int g363a;
extern int g4338;
extern int g4354;
extern int g43cc;
extern int g43ce;
extern int g4f9c;
extern int g4fb0;
extern int g4fce;
extern int g503c;
f6cf8()
{
	char x0[4];
	int l6;
	char x6[10];
	int l18;
	char x18[6];
	int l26;
	int l36[5];
	int l38;
	char x38[20];
	f3118(g4fb0);
	l38 = f011a(0, 19, 19, 5, 20, -4, 0, 0);
	f32be(l38, 32, 3, 0);
	f09fb(g3342, 0);
	f0a42(g3342, 0);
	f2a63();
	g503c = 1;
	f030b(g3342, 3, 0);
	f083f(2002, g3342, 18);
	g3342[6]++;
	l6 = 0;
L6d93:
	l36[l6] = 1;
	l6++;
	if (l6 <= 8) goto L6d93;
	if (g43ce >= 2) goto L6db8;
	l26 = 0;
L6db8:
	l18 = -1;
	l6 = f5ad8(l38, 2005, l36, 1, 1, 7, 3, 5, 0);
	f02d2(l38, 0);
	switch (l6) {
case 0:
	fccd2();
	f55b7(1);
	goto L6f16;
case 1:
	g43cc = f4f2c(2026, 1);
	if (g43cc == -1) goto L6e31;
	f55b7(1);
	g363a = 17;
	g4fce = 5;
L6e31:
	goto L6f16;
case 2:
	g43cc = f4f2c(2029, 1);
	if (g43cc == -1) goto L6e67;
	if (!f65ea(g43cc)) goto L6e67;
	f55b7(1);
	g363a = 19;
	g4fce = 5;
L6e67:
	goto L6f16;
case 3:
	g43cc = f4f2c(2031, 1);
	if (g43cc == -1) goto L6ead;
	if (!f65ea(g43cc)) goto L6ead;
	if ((unsigned)g4594[(432 * g43cc)] <= 0) goto L6ead;
	f55b7(1);
	g363a = 20;
	g4fce = 5;
L6ead:
	goto L6f16;
case 4:
	fdb1e();
	f55b7(1);
	goto L6f16;
case 5:
	f606f();
	goto L6f16;
case 6:
	if (f63f4() != 1) goto L6eee;
	*(int *)g4f84 = f467b(f46e8(g4f9c));
	g4338 = 0;
	g4354 = 0;
	g363a = 10;
L6eee:
	goto L6f16;
case 7:
	f6bcd();
	goto L6f16;
case 8:
	goto L6f16;
	}
L6f16:
	f31d1(g4fb0);
	f09fb(g3342, 0);
}
