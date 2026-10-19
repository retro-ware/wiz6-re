extern char g507d[];
extern char g50ac[];
extern char g50b4[];
extern char g50bc[];
extern char g50bd;
extern char g50c4[];
extern char g50cc[];
extern char g50d4[];
extern char g50dc[];
extern char g50dd;
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
extern int g507a;
extern int g508a[];
extern int g5108;
extern int g5254;
extern int g5256;
extern int g5258;
extern int g525a;
extern int g525c;
extern int g525e;
extern int g5260;
extern int g5262;
fa1c9()
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
	if (f28af((g4faa + 1082), (((l10 << 6) + (l8 << 3)) + l6)) != 1) goto La24d;
	switch (g363c) {
case 0:
case 4:
case 5:
	fa107();
	return;
	}
La24d:
	rsi = 0;
La250:
	g50c4[rsi] = 1;
	g50ac[rsi] = 1;
	g50b4[rsi] = 1;
	g50cc[rsi] = 1;
	g50d4[rsi] = 1;
	g50bc[rsi] = 1;
	g50dc[rsi] = 1;
	rsi++;
	if (rsi < 4) goto La250;
	setmem(20640, 12, 0);
	setmem(20604, 12, 0);
	setmem(20708, 12, 0);
	setmem(20616, 24, 0);
	setmem(20720, 24, 0);
	setmem(20746, 330, 0);
	g5108 = 0;
	g50ac[0] = 0;
	g50d4[0] = 0;
	g50bc[0] = 0;
	g50bd = 0;
	g50dc[0] = 0;
	g50dd = 0;
	l12 = l10;
	f8e99(&l2, &l4, &l6, &l8, &l12, 0, -1);
	g5258 = 4;
	g5254 = (((g4fa4 + g4fa2) + g4f9a) % 2);
	g507a = 0;
La352:
	if (g507a >= g5258) goto La8e6;
	g5256 = ((((g4fa4 + g4fa2) + g4f9a) + g507a) % 2);
	if (!f8e99(&l2, &l4, &l6, &l8, &l10, 0, 1)) goto La3fb;
	if (g363c == 10) goto La3b0;
	if (g363c != 12) goto La3e7;
La3b0:
	g507d[(g507a * 3)] = 1;
	g508a[(g507a * 3)] = 1;
	g525a = 0;
	g525c = 0;
	g525e = 0;
	goto La3f9;
La3e7:
	g525a = 2;
	g525c = 2;
	g525e = 2;
La3f9:
	goto La44f;
La3fb:
	g525a = f8f1a(l2, l4, l6, l8, l10, 0);
	g525c = f9303(l2, l4, l6, l8, l10, 0);
	g525e = f94c0(l2, l4, l6, l8, l10, 0);
La44f:
	g5260 = f8f1a(l2, l4, l6, l8, l10, -1);
	g5262 = f8f1a(l2, l4, l6, l8, l10, 1);
	if (g50c4[g507a] != 1) goto La4fd;
	f975e(g507a, g525a, 1, 72, 248, 122, 122, 0, 0, 91, 23, 23, 26, 26, 29, 32, 32, 29, 178, 178, 199, 199, 242, 257, 278, 278, 299, 299, 314, 314, 329, 150, 150, 214, 214);
La4fd:
	f9f84(g507a, g525a);
	if (g50c4[g507a] != 1) goto La559;
	f9ca6(g507a, g525c, 7, 4, 15, 19, 83, 87, 106, 114, 193, 196, 272, 275, 293, 296);
La559:
	f9fe7(g507a, g525c);
	if (g50c4[g507a] != 1) goto La5b5;
	f9ca6(g507a, g525e, 13, 7, 19, 15, 87, 83, 110, 118, 196, 193, 275, 272, 296, 293);
La5b5:
	fa018(g507a, g525e);
	if (g50bc[g507a] != 1) goto La5f1;
	f9e95(g507a, 0, 126, 146, 154, 174, 218, 238);
La5f1:
	if (g50ac[g507a] != 1) goto La693;
	f975e(g507a, g5260, 0, 72, g0042[g507a], 130, 142, 3, 12, 94, 35, 62, 41, 68, 47, 80, 53, 74, 181, 190, 202, 211, 245, 260, 281, 290, 302, 311, 317, 326, 332, 158, 170, 222, 234);
La693:
	fa049(g507a, g5260);
	if (g50b4[g507a] != 1) goto La743;
	f975e(g507a, g5260, 0, g0042[g507a], 248, 134, 138, 6, 9, 97, 38, 59, 44, 65, 50, 77, 56, 71, 184, 187, 205, 208, 248, 263, 284, 287, 305, 308, 320, 323, 335, 162, 166, 226, 230);
La743:
	fa076(g507a, g5260);
	if (g50cc[g507a] != 1) goto La7f3;
	f975e(g507a, g5262, 2, 72, g004a[g507a], 138, 134, 9, 6, 100, 59, 38, 65, 44, 71, 56, 77, 50, 187, 184, 208, 205, 251, 266, 287, 284, 308, 305, 323, 320, 338, 166, 162, 230, 226);
La7f3:
	fa0a8(g507a, g5262);
	if (g50d4[g507a] != 1) goto La8a3;
	f975e(g507a, g5262, 2, g004a[g507a], 248, 142, 130, 12, 3, 103, 62, 35, 68, 41, 74, 53, 80, 47, 190, 181, 211, 202, 254, 269, 290, 281, 311, 302, 326, 317, 341, 170, 158, 234, 222);
La8a3:
	fa0da(g507a, g5262);
	if (g50dc[g507a] != 1) goto La8df;
	f9e95(g507a, 2, 146, 126, 174, 154, 238, 218);
La8df:
	g507a++;
	goto La352;
La8e6:
	g507a = g5258;
	goto Laa49;
La8ef:
	rsi = g5108;
	rsi--;
	goto La9db;
La8f7:
	l14 = ((rsi * 11) + 20746);
	g5256 = (((((unsigned char)l14[10] + g4fa4) + g4fa2) + g4f9a) % 2);
	if ((unsigned char)l14[10] != g507a) goto La9da;
	if ((unsigned char)l14[8] != 255) goto La9da;
	if (*(int *)l14 == -1) goto La98b;
	if (*(int *)(l14 + 4) == -1) goto La976;
	f36ac((g5256 != 0 ? *(int *)(l14 + 4) : *(int *)l14), (unsigned char)l14[9], (g5256 != 0 ? *(int *)l14 : -1));
	goto La98b;
La976:
	f36ac(*(int *)l14, (unsigned char)l14[9], -1);
La98b:
	if (*(int *)(l14 + 2) == -1) goto La9da;
	if (*(int *)(l14 + 6) == -1) goto La9c4;
	f36ac((g5256 != 0 ? *(int *)(l14 + 6) : *(int *)(l14 + 2)), (unsigned char)l14[9], (g5256 != 0 ? *(int *)(l14 + 2) : -1));
	goto La9da;
La9c4:
	f36ac(*(int *)(l14 + 2), (unsigned char)l14[9], -1);
La9da:
	rsi--;
La9db:
	if (rsi >= 0) goto La8f7;
	rsi = g5108;
	rsi--;
	goto Laa40;
La9ea:
	l14 = ((rsi * 11) + 20746);
	if ((unsigned char)l14[10] != g507a) goto Laa3f;
	if ((unsigned char)l14[8] == 255) goto Laa3f;
	l16[0] = l14[9];
	l16[(0 + 1)] = 0;
	f3670((unsigned char)l14[8], *(int *)l14, *(int *)(l14 + 2), *(int *)(l14 + 4), *(int *)(l14 + 6), 0, 0, l16);
Laa3f:
	rsi--;
Laa40:
	if (rsi >= 0) goto La9ea;
	g507a--;
Laa49:
	if (g507a >= 0) goto La8ef;
	fa107();
	return;
#asm
	db 0e8h,06dh,0f7h,0ffh,036h,0bch,04fh,0e8h,03dh,08ch,059h,0c3h
#endasm
}
