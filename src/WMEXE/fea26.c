extern char g511d[];
extern char g514c[];
extern char g5154[];
extern char g515c[];
extern char g515d;
extern char g5164[];
extern char g516c[];
extern char g5174[];
extern char g517c[];
extern char g517d;
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
extern int g511a;
extern int g512a[];
extern int g51a8;
extern int g52f4;
extern int g52f6;
extern int g52f8;
extern int g52fa;
extern int g52fc;
extern int g52fe;
extern int g5300;
extern int g5302;
fea26()
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
	if (f28af((g4faa + 1082), (((l10 << 6) + (l8 << 3)) + l6)) != 1) goto Leaaa;
	switch (g363c) {
case 0:
case 4:
case 5:
	fe964();
	return;
	}
Leaaa:
	rsi = 0;
Leaad:
	g5164[rsi] = 1;
	g514c[rsi] = 1;
	g5154[rsi] = 1;
	g516c[rsi] = 1;
	g5174[rsi] = 1;
	g515c[rsi] = 1;
	g517c[rsi] = 1;
	rsi++;
	if (rsi < 4) goto Leaad;
	setmem(20800, 12, 0);
	setmem(20764, 12, 0);
	setmem(20868, 12, 0);
	setmem(20776, 24, 0);
	setmem(20880, 24, 0);
	setmem(20906, 330, 0);
	g51a8 = 0;
	g514c[0] = 0;
	g5174[0] = 0;
	g515c[0] = 0;
	g515d = 0;
	g517c[0] = 0;
	g517d = 0;
	l12 = l10;
	fd6f6(&l2, &l4, &l6, &l8, &l12, 0, -1);
	g52f8 = 4;
	g52f4 = (((g4fa4 + g4fa2) + g4f9a) % 2);
	g511a = 0;
Lebaf:
	if (g511a >= g52f8) goto Lf143;
	g52f6 = ((((g4fa4 + g4fa2) + g4f9a) + g511a) % 2);
	if (!fd6f6(&l2, &l4, &l6, &l8, &l10, 0, 1)) goto Lec58;
	if (g363c == 10) goto Lec0d;
	if (g363c != 12) goto Lec44;
Lec0d:
	g511d[(g511a * 3)] = 1;
	g512a[(g511a * 3)] = 1;
	g52fa = 0;
	g52fc = 0;
	g52fe = 0;
	goto Lec56;
Lec44:
	g52fa = 2;
	g52fc = 2;
	g52fe = 2;
Lec56:
	goto Lecac;
Lec58:
	g52fa = fd777(l2, l4, l6, l8, l10, 0);
	g52fc = fdb60(l2, l4, l6, l8, l10, 0);
	g52fe = fdd1d(l2, l4, l6, l8, l10, 0);
Lecac:
	g5300 = fd777(l2, l4, l6, l8, l10, -1);
	g5302 = fd777(l2, l4, l6, l8, l10, 1);
	if (g5164[g511a] != 1) goto Led5a;
	fdfbb(g511a, g52fa, 1, 72, 248, 122, 122, 0, 0, 91, 23, 23, 26, 26, 29, 32, 32, 29, 178, 178, 199, 199, 242, 257, 278, 278, 299, 299, 314, 314, 329, 150, 150, 214, 214);
Led5a:
	fe7e1(g511a, g52fa);
	if (g5164[g511a] != 1) goto Ledb6;
	fe503(g511a, g52fc, 7, 4, 15, 19, 83, 87, 106, 114, 193, 196, 272, 275, 293, 296);
Ledb6:
	fe844(g511a, g52fc);
	if (g5164[g511a] != 1) goto Lee12;
	fe503(g511a, g52fe, 13, 7, 19, 15, 87, 83, 110, 118, 196, 193, 275, 272, 296, 293);
Lee12:
	fe875(g511a, g52fe);
	if (g515c[g511a] != 1) goto Lee4e;
	fe6f2(g511a, 0, 126, 146, 154, 174, 218, 238);
Lee4e:
	if (g514c[g511a] != 1) goto Leef0;
	fdfbb(g511a, g5300, 0, 72, g0042[g511a], 130, 142, 3, 12, 94, 35, 62, 41, 68, 47, 80, 53, 74, 181, 190, 202, 211, 245, 260, 281, 290, 302, 311, 317, 326, 332, 158, 170, 222, 234);
Leef0:
	fe8a6(g511a, g5300);
	if (g5154[g511a] != 1) goto Lefa0;
	fdfbb(g511a, g5300, 0, g0042[g511a], 248, 134, 138, 6, 9, 97, 38, 59, 44, 65, 50, 77, 56, 71, 184, 187, 205, 208, 248, 263, 284, 287, 305, 308, 320, 323, 335, 162, 166, 226, 230);
Lefa0:
	fe8d3(g511a, g5300);
	if (g516c[g511a] != 1) goto Lf050;
	fdfbb(g511a, g5302, 2, 72, g004a[g511a], 138, 134, 9, 6, 100, 59, 38, 65, 44, 71, 56, 77, 50, 187, 184, 208, 205, 251, 266, 287, 284, 308, 305, 323, 320, 338, 166, 162, 230, 226);
Lf050:
	fe905(g511a, g5302);
	if (g5174[g511a] != 1) goto Lf100;
	fdfbb(g511a, g5302, 2, g004a[g511a], 248, 142, 130, 12, 3, 103, 62, 35, 68, 41, 74, 53, 80, 47, 190, 181, 211, 202, 254, 269, 290, 281, 311, 302, 326, 317, 341, 170, 158, 234, 222);
Lf100:
	fe937(g511a, g5302);
	if (g517c[g511a] != 1) goto Lf13c;
	fe6f2(g511a, 2, 146, 126, 174, 154, 238, 218);
Lf13c:
	g511a++;
	goto Lebaf;
Lf143:
	g511a = g52f8;
	goto Lf2a6;
Lf14c:
	rsi = g51a8;
	rsi--;
	goto Lf238;
Lf154:
	l14 = ((rsi * 11) + 20906);
	g52f6 = (((((unsigned char)l14[10] + g4fa4) + g4fa2) + g4f9a) % 2);
	if ((unsigned char)l14[10] != g511a) goto Lf237;
	if ((unsigned char)l14[8] != 255) goto Lf237;
	if (*(int *)l14 == -1) goto Lf1e8;
	if (*(int *)(l14 + 4) == -1) goto Lf1d3;
	f36ac((g52f6 != 0 ? *(int *)(l14 + 4) : *(int *)l14), (unsigned char)l14[9], (g52f6 != 0 ? *(int *)l14 : -1));
	goto Lf1e8;
Lf1d3:
	f36ac(*(int *)l14, (unsigned char)l14[9], -1);
Lf1e8:
	if (*(int *)(l14 + 2) == -1) goto Lf237;
	if (*(int *)(l14 + 6) == -1) goto Lf221;
	f36ac((g52f6 != 0 ? *(int *)(l14 + 6) : *(int *)(l14 + 2)), (unsigned char)l14[9], (g52f6 != 0 ? *(int *)(l14 + 2) : -1));
	goto Lf237;
Lf221:
	f36ac(*(int *)(l14 + 2), (unsigned char)l14[9], -1);
Lf237:
	rsi--;
Lf238:
	if (rsi >= 0) goto Lf154;
	rsi = g51a8;
	rsi--;
	goto Lf29d;
Lf247:
	l14 = ((rsi * 11) + 20906);
	if ((unsigned char)l14[10] != g511a) goto Lf29c;
	if ((unsigned char)l14[8] == 255) goto Lf29c;
	l16[0] = l14[9];
	l16[(0 + 1)] = 0;
	f3670((unsigned char)l14[8], *(int *)l14, *(int *)(l14 + 2), *(int *)(l14 + 4), *(int *)(l14 + 6), 0, 0, l16);
Lf29c:
	rsi--;
Lf29d:
	if (rsi >= 0) goto Lf247;
	g511a--;
Lf2a6:
	if (g511a >= 0) goto Lf14c;
	fe964();
	return;
#asm
	db 0e8h,06dh,0f7h,0ffh,036h,0bch,04fh,0e8h,0e0h,043h,059h,0c3h
#endasm
}
