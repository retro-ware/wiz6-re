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
f6339(p4, p6)
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
	l22[0] = 0;
	l2 = *(int *)((char *)g4362 + ((p4 * 10) + (p6 << 1)));
	if (!l2) goto L636f;
	if (p4 <= g433c) goto L6373;
L636f:
	return;
L6373:
	l4 = (unsigned char)g019b[g43a8[l2]];
	l8 = 72;
	l10 = 248;
	if (p4) goto L63a9;
	f5fa0(l2, p6, l22);
	goto L63bc;
L63a9:
	l22[0] = g3810[(314 * l4)];
	l22[(0 + 1)] = 0;
L63bc:
	if (l22[0]) goto L63c4;
	return;
L63c4:
	l6 = (p6 % 2);
	if (f09e2(10) != 9) goto L6433;
	g4348[((p4 * 5) + p6)] = (char)f09e2((unsigned char)g3814[(314 * l4)]);
	g433e[((p4 * 5) + p6)] = (char)f09e2((unsigned char)g3815[(314 * l4)]);
L6433:
	l24 = (unsigned char)l22[0];
	l28 = (unsigned char)g36e4[(((314 * l4) + (l6 % 2)) + (l24 << 1))];
	l26 = (unsigned char)g3759[((314 * l4) + (l24 << 2))];
	if (l26) goto L649e;
	l26 = ((unsigned char)g00b0[((p4 * 5) + p6)] - l2);
L649e:
	f6239(l26, l4, ((g37fa[(((314 * l4) + (p4 * 10)) + (p6 << 1))] + (unsigned char)g4348[((p4 * 5) + p6)]) + l28), ((g37fb[(((314 * l4) + (p4 * 10)) + (p6 << 1))] + (unsigned char)g433e[((p4 * 5) + p6)]) + (unsigned char)g3717[((314 * l4) + l24)]), l8, l10, l6, l22);
	return;
}
