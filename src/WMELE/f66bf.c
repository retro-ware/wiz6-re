extern char g00b0[];
extern char g019b[];
extern char g36e4[];
extern char g3717[];
extern char g3759[];
extern char g37fa[];
extern char g37fb[];
extern char g3810[];
extern char g3813[];
extern char g3814[];
extern char g3815[];
extern char g433e[];
extern char g4348[];
extern int g433c;
extern int g4362[];
extern int g43a8[];
f66bf(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char l22[12];
	int l24;
	int l26;
	int l28;
	int l30;
	l22[0] = 0;
	l2 = *(int *)((char *)g4362 + ((p4 * 10) + (p6 << 1)));
	if (l2 < 1) goto L66f9;
	if (l2 > 3) goto L66f9;
	if (p4 <= g433c) goto L66fd;
L66f9:
	return;
L66fd:
	l4 = (unsigned char)g019b[g43a8[l2]];
	l8 = 72;
	l10 = 248;
	if (p4) goto L6733;
	f6326(l2, p6, l22);
	goto L6746;
L6733:
	l22[0] = g3810[(314 * l4)];
	l22[(0 + 1)] = 0;
L6746:
	if (l22[0]) goto L674e;
	return;
L674e:
	l6 = (p6 % 2);
	if (f09e2(10) != 9) goto L67bd;
	g4348[((p4 * 5) + p6)] = (char)f09e2((unsigned char)g3814[(314 * l4)]);
	g433e[((p4 * 5) + p6)] = (char)f09e2((unsigned char)g3815[(314 * l4)]);
L67bd:
	l24 = (unsigned char)l22[0];
	l28 = (unsigned char)g36e4[(((314 * l4) + (l6 % 2)) + (l24 << 1))];
	if (!g3813[(314 * l4)]) goto L6800;
	p8 = 0;
L6800:
	l26 = (unsigned char)g3759[((314 * l4) + (l24 << 2))];
	if (l26) goto L6836;
	l26 = ((unsigned char)g00b0[((p4 * 5) + p6)] - l2);
L6836:
	l30 = (((g37fa[(((314 * l4) + (p4 * 10)) + (p6 << 1))] + (unsigned char)g4348[((p4 * 5) + p6)]) + p8) + l28);
	if (l30 >= 0) goto L688e;
	l30 = 0;
	goto L6899;
L688e:
	if (l30 >= l10) goto L66f9;
L6899:
	f65bf(l26, l4, l30, ((g37fb[(((314 * l4) + (p4 * 10)) + (p6 << 1))] + (unsigned char)g433e[((p4 * 5) + p6)]) + (unsigned char)g3717[((314 * l4) + l24)]), l8, l10, l6, l22);
	return;
}
