extern char g442d[];
extern char g44f8[];
extern char g450a[];
extern char g450c[];
extern char g450d[];
extern char g4587[];
extern char g4589[];
extern int g0532[];
extern int g43d0[];
extern int g4400[];
extern int g4402[];
extern int g4404[];
extern int g4406[];
extern int g4428[];
extern int g4fb8;
extern int g4fba;
extern int rename_test_table[];
f4db6(p4)
{
	int l2;
	int l4;
	int l6;
	char x6[80];
	int l88;
	int l90;
	register int rsi;
	register int rdi;
	l88 = (!(p4 % 2) ? g4fba : g4fb8);
	l4 = 0;
	l6 = ((p4 / 2) << 2);
	f030b(l88, l4, l6);
	f251d(l88, ((432 * p4) + 17384), 3);
	rsi = strlen(((432 * p4) + 17384));
	goto L4e32;
L4e20:
	f23e3(l88, 32, 3);
	rsi++;
L4e32:
	if (rsi < 7) goto L4e20;
	l90 = ((g43d0[p4] * 9) + 72);
	rsi = 0;
L4e53:
	f030b(l88, l4, ((l6 + rsi) + 1));
	rdi = 0;
L4e69:
	f23e3(l88, (unsigned char)((((rsi * 3) + l90) + rdi)), 2);
	rdi++;
	if (rdi < 3) goto L4e69;
	rsi++;
	if (rsi < 3) goto L4e53;
	l2 = rename_test_table[(unsigned char)g4589[(432 * p4)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * p4)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * p4)] > 0) ? 2 : l2);
	f030b(l88, (l4 + 3), (l6 + 3));
	f23e3(l88, (unsigned char)((l2 + 37)), 1);
	l2 = -1;
	rsi = 0;
L4f1f:
	if ((unsigned)g450a[((432 * p4) + rsi)] <= 0) goto L4f42;
	if (g0532[rsi] <= l2) goto L4f42;
	l2 = g0532[rsi];
L4f42:
	rsi++;
	if (rsi < 10) goto L4f1f;
	if (l2 == -1) goto L4f66;
	f23e3(l88, (unsigned char)((l2 + 37)), 1);
	goto L4f77;
L4f66:
	f23e3(l88, 32, 3);
L4f77:
	f030b(l88, (l4 + 3), (l6 + 2));
	rsi = 0;
L4f90:
	f23e3(l88, (unsigned char)(((((unsigned char)g4587[(432 * p4)] << 1) + rsi) + 58)), 1);
	rsi++;
	if (rsi < 2) goto L4f90;
	f030b(l88, (l4 + 3), (l6 + 1));
	rsi = 0;
L4fd3:
	if ((unsigned char)g44f8[((432 * p4) + rsi)] == 255) goto L5024;
	if (*(int *)((char *)g4428 + ((432 * p4) + ((unsigned char)g44f8[((432 * p4) + rsi)] << 3))) <= 0) goto L5024;
	f23e3(l88, (unsigned char)(((unsigned char)g442d[((432 * p4) + ((unsigned char)g44f8[((432 * p4) + rsi)] << 3))] + 1)), 4);
	goto L5039;
L5024:
	f23e3(l88, (unsigned char)((rsi + 37)), 4);
L5039:
	rsi++;
	if (rsi < 2) goto L4fd3;
	f4cd5(l88, (l4 + 5), (l6 + 1), *(int *)((char *)g4400 + (432 * p4)), *(int *)((char *)g4402 + (432 * p4)), 86);
	f4cd5(l88, (l4 + 6), (l6 + 1), *(int *)((char *)g4404 + (432 * p4)), *(int *)((char *)g4406 + (432 * p4)), 99);
}
