extern int g3342;
extern int g363a;
extern int g363c;
extern int g4ee8;
extern int g4f8c;
extern int g4f98;
extern int g4f9a;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g4fca;
extern int g4fce;
f7868(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[94];
	int l106;
	setmem(&l106, 96, 0);
	g4fce = 23;
	g363a = 5;
	f09fb(g3342, 0);
	l6 = 0;
	f2881(&l106, (((g4f9c << 6) + (g4f9e << 3)) + g4fa0), 1);
	l2 = g4f9a;
	if (g363c != g4f98) goto L78e3;
	l2 = ((g4f8c + 2) % 4);
L78e3:
	l4 = (((g4f9a + 3) % 4) == l2 ? 3 : 1);
L7901:
	if (g4f9a == l2) goto L792f;
	g4f9a = ((g4f9a + l4) % 4);
	f98cb();
	if (l6) goto L7925;
	l6 = f7859();
L7925:
	f533b(2);
	goto L7901;
L792f:
	l8 = -1;
L7934:
	l10 = 0;
	f5651();
	if (l8 == -1) goto L79ba;
	if (f09e2(4)) goto L79ba;
	g4f9a = ((g4f9a + l8) % 4);
	if (f77a8(&l106)) goto L7983;
	if (l6) goto L7979;
	l6 = f7859();
L7979:
	f77ea();
	l10 = 1;
	goto L79ba;
L7983:
	g4f9a = ((g4f9a + 2) % 4);
	if (f77a8(&l106)) goto L79b4;
	if (l6) goto L79aa;
	l6 = f7859();
L79aa:
	f77ea();
	l10 = 1;
	goto L79ba;
L79b4:
	g4f9a = g4f8c;
L79ba:
	if (l10) goto L7a3b;
	if (f77a8(&l106) != 1) goto L7a3b;
	g4f9a = (((!f09e2(2) ? 1 : 3) + g4f9a) % 4);
	if (f77a8(&l106)) goto L7a03;
	f77ea();
	goto L7a3b;
L7a03:
	g4f9a = ((g4f9a + 2) % 4);
	if (f77a8(&l106)) goto L7a23;
	f77ea();
	goto L7a3b;
L7a23:
	g4f9a = g4f8c;
	f09fb(g3342, 1);
	return;
L7a3b:
	f2881(&l106, (((g4f9c << 6) + (g4f9e << 3)) + g4fa0), 1);
	f98cb();
	if (l6) goto L7a71;
	l6 = f7859();
L7a71:
	f533b(2);
	l8 = (f09e2(2) ? 1 : 3);
	p4--;
#asm
	db 083h,07eh,004h,000h,07eh,01eh
#endasm
	if (f7bd2(g4fa0, g4f9e, g4f9c, g4ee8) == -1) goto L7934;
L7ab7:
	f55b7(2);
	f533b((g4fca / 4));
	f09fb(g3342, 1);
	return;
}
