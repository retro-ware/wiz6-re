extern char g5415[];
extern char g5444[];
extern char g544c[];
extern char g5454[];
extern char g5455;
extern char g545c[];
extern char g5464[];
extern char g546c[];
extern char g5474[];
extern char g5475;
extern int g0042[];
extern int g004a[];
extern int g363c;
extern int g433c;
extern int g4f9a;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g4fa2;
extern int g4fa4;
extern int g4fa6;
extern int g4faa;
extern int g4fbc;
extern int g5412;
extern int g5422[];
extern int g54a0;
extern int g55ec;
extern int g55ee;
extern int g55f0;
extern int g55f2;
extern int g55f4;
extern int g55f6;
extern int g55f8;
extern int g55fa;
f95f3()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	char *l14;
	char l16[2];
	register int rsi;
	l2 = g4fa4;
	l4 = g4fa2;
	l6 = g4fa0;
	l8 = g4f9e;
	l10 = g4f9c;
	g4fa6 = 0;
	g433c = 1;
	f3694(g4fbc, 0);
	if (f28af((g4faa + 1082), (((l10 << 6) + (l8 << 3)) + l6)) != 1) goto L9677;
	switch (g363c) {
case 0:
case 4:
case 5:
	f9531();
	return;
	}
L9677:
	rsi = 0;
L967a:
	g545c[rsi] = 1;
	g5444[rsi] = 1;
	g544c[rsi] = 1;
	g5464[rsi] = 1;
	g546c[rsi] = 1;
	g5454[rsi] = 1;
	g5474[rsi] = 1;
	rsi++;
	if (rsi < 4) goto L967a;
	setmem(21560, 12, 0);
	setmem(21524, 12, 0);
	setmem(21628, 12, 0);
	setmem(21536, 24, 0);
	setmem(21640, 24, 0);
	setmem(21666, 330, 0);
	g54a0 = 0;
	g5444[0] = 0;
	g546c[0] = 0;
	g5454[0] = 0;
	g5455 = 0;
	g5474[0] = 0;
	g5475 = 0;
	l12 = l10;
	f82c3(&l2, &l4, &l6, &l8, &l12, 0, -1);
	g55f0 = 4;
	g55ec = (((g4fa4 + g4fa2) + g4f9a) % 2);
	g5412 = 0;
L977c:
	if (g5412 >= g55f0) goto L9d10;
	g55ee = ((((g4fa4 + g4fa2) + g4f9a) + g5412) % 2);
	if (!f82c3(&l2, &l4, &l6, &l8, &l10, 0, 1)) goto L9825;
	if (g363c == 10) goto L97da;
	if (g363c != 12) goto L9811;
L97da:
	g5415[(g5412 * 3)] = 1;
	g5422[(g5412 * 3)] = 1;
	g55f2 = 0;
	g55f4 = 0;
	g55f6 = 0;
	goto L9823;
L9811:
	g55f2 = 2;
	g55f4 = 2;
	g55f6 = 2;
L9823:
	goto L9879;
L9825:
	g55f2 = f8344(l2, l4, l6, l8, l10, 0);
	g55f4 = f872d(l2, l4, l6, l8, l10, 0);
	g55f6 = f88ea(l2, l4, l6, l8, l10, 0);
L9879:
	g55f8 = f8344(l2, l4, l6, l8, l10, -1);
	g55fa = f8344(l2, l4, l6, l8, l10, 1);
	if (g545c[g5412] != 1) goto L9927;
	f8b88(g5412, g55f2, 1, 72, 248, 122, 122, 0, 0, 91, 23, 23, 26, 26, 29, 32, 32, 29, 178, 178, 199, 199, 242, 257, 278, 278, 299, 299, 314, 314, 329, 150, 150, 214, 214);
L9927:
	f93ae(g5412, g55f2);
	if (g545c[g5412] != 1) goto L9983;
	f90d0(g5412, g55f4, 7, 4, 15, 19, 83, 87, 106, 114, 193, 196, 272, 275, 293, 296);
L9983:
	f9411(g5412, g55f4);
	if (g545c[g5412] != 1) goto L99df;
	f90d0(g5412, g55f6, 13, 7, 19, 15, 87, 83, 110, 118, 196, 193, 275, 272, 296, 293);
L99df:
	f9442(g5412, g55f6);
	if (g5454[g5412] != 1) goto L9a1b;
	f92bf(g5412, 0, 126, 146, 154, 174, 218, 238);
L9a1b:
	if (g5444[g5412] != 1) goto L9abd;
	f8b88(g5412, g55f8, 0, 72, g0042[g5412], 130, 142, 3, 12, 94, 35, 62, 41, 68, 47, 80, 53, 74, 181, 190, 202, 211, 245, 260, 281, 290, 302, 311, 317, 326, 332, 158, 170, 222, 234);
L9abd:
	f9473(g5412, g55f8);
	if (g544c[g5412] != 1) goto L9b6d;
	f8b88(g5412, g55f8, 0, g0042[g5412], 248, 134, 138, 6, 9, 97, 38, 59, 44, 65, 50, 77, 56, 71, 184, 187, 205, 208, 248, 263, 284, 287, 305, 308, 320, 323, 335, 162, 166, 226, 230);
L9b6d:
	f94a0(g5412, g55f8);
	if (g5464[g5412] != 1) goto L9c1d;
	f8b88(g5412, g55fa, 2, 72, g004a[g5412], 138, 134, 9, 6, 100, 59, 38, 65, 44, 71, 56, 77, 50, 187, 184, 208, 205, 251, 266, 287, 284, 308, 305, 323, 320, 338, 166, 162, 230, 226);
L9c1d:
	f94d2(g5412, g55fa);
	if (g546c[g5412] != 1) goto L9ccd;
	f8b88(g5412, g55fa, 2, g004a[g5412], 248, 142, 130, 12, 3, 103, 62, 35, 68, 41, 74, 53, 80, 47, 190, 181, 211, 202, 254, 269, 290, 281, 311, 302, 326, 317, 341, 170, 158, 234, 222);
L9ccd:
	f9504(g5412, g55fa);
	if (g5474[g5412] != 1) goto L9d09;
	f92bf(g5412, 2, 146, 126, 174, 154, 238, 218);
L9d09:
	g5412++;
	goto L977c;
L9d10:
	g5412 = g55f0;
	goto L9e73;
L9d19:
	rsi = g54a0;
	rsi--;
	goto L9e05;
L9d21:
	l14 = ((rsi * 11) + 21666);
	g55ee = (((((unsigned char)l14[10] + g4fa4) + g4fa2) + g4f9a) % 2);
	if ((unsigned char)l14[10] != g5412) goto L9e04;
	if ((unsigned char)l14[8] != 255) goto L9e04;
	if (*(int *)l14 == -1) goto L9db5;
	if (*(int *)(l14 + 4) == -1) goto L9da0;
	f36ac((g55ee != 0 ? *(int *)(l14 + 4) : *(int *)l14), (unsigned char)l14[9], (g55ee != 0 ? *(int *)l14 : -1));
	goto L9db5;
L9da0:
	f36ac(*(int *)l14, (unsigned char)l14[9], -1);
L9db5:
	if (*(int *)(l14 + 2) == -1) goto L9e04;
	if (*(int *)(l14 + 6) == -1) goto L9dee;
	f36ac((g55ee != 0 ? *(int *)(l14 + 6) : *(int *)(l14 + 2)), (unsigned char)l14[9], (g55ee != 0 ? *(int *)(l14 + 2) : -1));
	goto L9e04;
L9dee:
	f36ac(*(int *)(l14 + 2), (unsigned char)l14[9], -1);
L9e04:
	rsi--;
L9e05:
	if (rsi >= 0) goto L9d21;
	rsi = g54a0;
	rsi--;
	goto L9e6a;
L9e14:
	l14 = ((rsi * 11) + 21666);
	if ((unsigned char)l14[10] != g5412) goto L9e69;
	if ((unsigned char)l14[8] == 255) goto L9e69;
	l16[0] = l14[9];
	l16[(0 + 1)] = 0;
	f3670((unsigned char)l14[8], *(int *)l14, *(int *)(l14 + 2), *(int *)(l14 + 4), *(int *)(l14 + 6), 0, 0, l16);
L9e69:
	rsi--;
L9e6a:
	if (rsi >= 0) goto L9e14;
	g5412--;
L9e73:
	if (g5412 >= 0) goto L9d19;
	f9531();
	return;
}
