extern char g00b0[];
extern char g019b[];
extern char g36e4[];
extern char g3717[];
extern char g3759[];
extern char g37fa[];
extern char g37fb[];
extern char g3810[];
extern char g3814[];
extern char g3815[];
extern char g433e[];
extern char g4348[];
extern int g433c;
extern int g4362[];
extern int g43a8[];
f4c7d(p4, p6)
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
	if (!l2) goto L4cb3;
	if (p4 <= g433c) goto L4cb7;
L4cb3:
	return;
L4cb7:
	l4 = (unsigned char)g019b[g43a8[l2]];
	l8 = 72;
	l10 = 248;
	if (p4) goto L4ced;
	f48e4(l2, p6, l22);
	goto L4d00;
L4ced:
	l22[0] = g3810[(314 * l4)];
	l22[(0 + 1)] = 0;
L4d00:
	if (l22[0]) goto L4d08;
	return;
L4d08:
	l6 = (p6 % 2);
	if (f09e2(10) != 9) goto L4d77;
	g4348[((p4 * 5) + p6)] = (char)f09e2((unsigned char)g3814[(314 * l4)]);
	g433e[((p4 * 5) + p6)] = (char)f09e2((unsigned char)g3815[(314 * l4)]);
L4d77:
	l24 = (unsigned char)l22[0];
	l28 = (unsigned char)g36e4[(((314 * l4) + (l6 % 2)) + (l24 << 1))];
	l26 = (unsigned char)g3759[((314 * l4) + (l24 << 2))];
	if (l26) goto L4de2;
	l26 = ((unsigned char)g00b0[((p4 * 5) + p6)] - l2);
L4de2:
	l30 = ((g37fa[(((314 * l4) + (p4 * 10)) + (p6 << 1))] + (unsigned char)g4348[((p4 * 5) + p6)]) + l28);
	if (l30 >= 0) goto L4e37;
	l30 = 0;
	goto L4e42;
L4e37:
	if (l30 >= l10) goto L4cb3;
L4e42:
	f4b7d(l26, l4, l30, ((g37fb[(((314 * l4) + (p4 * 10)) + (p6 << 1))] + (unsigned char)g433e[((p4 * 5) + p6)]) + (unsigned char)g3717[((314 * l4) + l24)]), l8, l10, l6, l22);
	return;
}
