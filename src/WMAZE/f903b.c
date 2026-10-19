extern char g5043[];
extern char g5072[];
extern char g507a[];
extern char g5082[];
extern char g5083;
extern char g508a[];
extern char g5092[];
extern char g509a[];
extern char g50a2[];
extern char g50a3;
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
extern int g5040;
extern int g5050[];
extern int g50ce;
extern int g521a;
extern int g521c;
extern int g521e;
extern int g5220;
extern int g5222;
extern int g5224;
extern int g5226;
extern int g5228;
f903b()
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
	if (f28af((g4faa + 1082), (((l10 << 6) + (l8 << 3)) + l6)) != 1) goto L90bf;
	switch (g363c) {
case 0:
case 4:
case 5:
	f8f79();
	return;
	}
L90bf:
	rsi = 0;
L90c2:
	g508a[rsi] = 1;
	g5072[rsi] = 1;
	g507a[rsi] = 1;
	g5092[rsi] = 1;
	g509a[rsi] = 1;
	g5082[rsi] = 1;
	g50a2[rsi] = 1;
	rsi++;
	if (rsi < 4) goto L90c2;
	setmem(20582, 12, 0);
	setmem(20546, 12, 0);
	setmem(20650, 12, 0);
	setmem(20558, 24, 0);
	setmem(20662, 24, 0);
	setmem(20688, 330, 0);
	g50ce = 0;
	g5072[0] = 0;
	g509a[0] = 0;
	g5082[0] = 0;
	g5083 = 0;
	g50a2[0] = 0;
	g50a3 = 0;
	l12 = l10;
	f7d0b(&l2, &l4, &l6, &l8, &l12, 0, -1);
	g521e = 4;
	g521a = (((g4fa4 + g4fa2) + g4f9a) % 2);
	g5040 = 0;
L91c4:
	if (g5040 >= g521e) goto L9758;
	g521c = ((((g4fa4 + g4fa2) + g4f9a) + g5040) % 2);
	if (!f7d0b(&l2, &l4, &l6, &l8, &l10, 0, 1)) goto L926d;
	if (g363c == 10) goto L9222;
	if (g363c != 12) goto L9259;
L9222:
	g5043[(g5040 * 3)] = 1;
	g5050[(g5040 * 3)] = 1;
	g5220 = 0;
	g5222 = 0;
	g5224 = 0;
	goto L926b;
L9259:
	g5220 = 2;
	g5222 = 2;
	g5224 = 2;
L926b:
	goto L92c1;
L926d:
	g5220 = f7d8c(l2, l4, l6, l8, l10, 0);
	g5222 = f8175(l2, l4, l6, l8, l10, 0);
	g5224 = f8332(l2, l4, l6, l8, l10, 0);
L92c1:
	g5226 = f7d8c(l2, l4, l6, l8, l10, -1);
	g5228 = f7d8c(l2, l4, l6, l8, l10, 1);
	if (g508a[g5040] != 1) goto L936f;
	f85d0(g5040, g5220, 1, 72, 248, 122, 122, 0, 0, 91, 23, 23, 26, 26, 29, 32, 32, 29, 178, 178, 199, 199, 242, 257, 278, 278, 299, 299, 314, 314, 329, 150, 150, 214, 214);
L936f:
	f8df6(g5040, g5220);
	if (g508a[g5040] != 1) goto L93cb;
	f8b18(g5040, g5222, 7, 4, 15, 19, 83, 87, 106, 114, 193, 196, 272, 275, 293, 296);
L93cb:
	f8e59(g5040, g5222);
	if (g508a[g5040] != 1) goto L9427;
	f8b18(g5040, g5224, 13, 7, 19, 15, 87, 83, 110, 118, 196, 193, 275, 272, 296, 293);
L9427:
	f8e8a(g5040, g5224);
	if (g5082[g5040] != 1) goto L9463;
	f8d07(g5040, 0, 126, 146, 154, 174, 218, 238);
L9463:
	if (g5072[g5040] != 1) goto L9505;
	f85d0(g5040, g5226, 0, 72, g0042[g5040], 130, 142, 3, 12, 94, 35, 62, 41, 68, 47, 80, 53, 74, 181, 190, 202, 211, 245, 260, 281, 290, 302, 311, 317, 326, 332, 158, 170, 222, 234);
L9505:
	f8ebb(g5040, g5226);
	if (g507a[g5040] != 1) goto L95b5;
	f85d0(g5040, g5226, 0, g0042[g5040], 248, 134, 138, 6, 9, 97, 38, 59, 44, 65, 50, 77, 56, 71, 184, 187, 205, 208, 248, 263, 284, 287, 305, 308, 320, 323, 335, 162, 166, 226, 230);
L95b5:
	f8ee8(g5040, g5226);
	if (g5092[g5040] != 1) goto L9665;
	f85d0(g5040, g5228, 2, 72, g004a[g5040], 138, 134, 9, 6, 100, 59, 38, 65, 44, 71, 56, 77, 50, 187, 184, 208, 205, 251, 266, 287, 284, 308, 305, 323, 320, 338, 166, 162, 230, 226);
L9665:
	f8f1a(g5040, g5228);
	if (g509a[g5040] != 1) goto L9715;
	f85d0(g5040, g5228, 2, g004a[g5040], 248, 142, 130, 12, 3, 103, 62, 35, 68, 41, 74, 53, 80, 47, 190, 181, 211, 202, 254, 269, 290, 281, 311, 302, 326, 317, 341, 170, 158, 234, 222);
L9715:
	f8f4c(g5040, g5228);
	if (g50a2[g5040] != 1) goto L9751;
	f8d07(g5040, 2, 146, 126, 174, 154, 238, 218);
L9751:
	g5040++;
	goto L91c4;
L9758:
	g5040 = g521e;
	goto L98bb;
L9761:
	rsi = g50ce;
	rsi--;
	goto L984d;
L9769:
	l14 = ((rsi * 11) + 20688);
	g521c = (((((unsigned char)l14[10] + g4fa4) + g4fa2) + g4f9a) % 2);
	if ((unsigned char)l14[10] != g5040) goto L984c;
	if ((unsigned char)l14[8] != 255) goto L984c;
	if (*(int *)l14 == -1) goto L97fd;
	if (*(int *)(l14 + 4) == -1) goto L97e8;
	f36ac((g521c != 0 ? *(int *)(l14 + 4) : *(int *)l14), (unsigned char)l14[9], (g521c != 0 ? *(int *)l14 : -1));
	goto L97fd;
L97e8:
	f36ac(*(int *)l14, (unsigned char)l14[9], -1);
L97fd:
	if (*(int *)(l14 + 2) == -1) goto L984c;
	if (*(int *)(l14 + 6) == -1) goto L9836;
	f36ac((g521c != 0 ? *(int *)(l14 + 6) : *(int *)(l14 + 2)), (unsigned char)l14[9], (g521c != 0 ? *(int *)(l14 + 2) : -1));
	goto L984c;
L9836:
	f36ac(*(int *)(l14 + 2), (unsigned char)l14[9], -1);
L984c:
	rsi--;
L984d:
	if (rsi >= 0) goto L9769;
	rsi = g50ce;
	rsi--;
	goto L98b2;
L985c:
	l14 = ((rsi * 11) + 20688);
	if ((unsigned char)l14[10] != g5040) goto L98b1;
	if ((unsigned char)l14[8] == 255) goto L98b1;
	l16[0] = l14[9];
	l16[(0 + 1)] = 0;
	f3670((unsigned char)l14[8], *(int *)l14, *(int *)(l14 + 2), *(int *)(l14 + 4), *(int *)(l14 + 6), 0, 0, l16);
L98b1:
	rsi--;
L98b2:
	if (rsi >= 0) goto L985c;
	g5040--;
L98bb:
	if (g5040 >= 0) goto L9761;
	f8f79();
	return;
}
