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
f7353(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char x6[80];
	int l88;
	int l90;
	register int rsi;
	register int rdi;
	f5f19(p4);
	l88 = (!(p4 % 2) ? g4fba : g4fb8);
	l4 = 0;
	l6 = ((p4 / 2) << 2);
	f030b(l88, l4, l6);
	if (p6) goto L73ba;
	f251d(l88, ((432 * p4) + 17384), 3);
	goto L73d1;
L73ba:
	f24e9(l88, ((432 * p4) + 17384), -4);
L73d1:
	rsi = strlen(((432 * p4) + 17384));
	goto L73f5;
L73e3:
	f23e3(l88, 32, 3);
	rsi++;
L73f5:
	if (rsi < 7) goto L73e3;
	l90 = ((g43d0[p4] * 9) + 72);
	rsi = 0;
L7416:
	f030b(l88, l4, ((l6 + rsi) + 1));
	rdi = 0;
L742c:
	f23e3(l88, (unsigned char)((((rsi * 3) + l90) + rdi)), 2);
	rdi++;
	if (rdi < 3) goto L742c;
	rsi++;
	if (rsi < 3) goto L7416;
	l2 = rename_test_table[(unsigned char)g4589[(432 * p4)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * p4)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * p4)] > 0) ? 2 : l2);
	f030b(l88, (l4 + 3), (l6 + 3));
	f23e3(l88, (unsigned char)((l2 + 37)), 1);
	l2 = -1;
	rsi = 0;
L74e2:
	if ((unsigned)g450a[((432 * p4) + rsi)] <= 0) goto L7505;
	if (g0532[rsi] <= l2) goto L7505;
	l2 = g0532[rsi];
L7505:
	rsi++;
	if (rsi < 10) goto L74e2;
	if (l2 == -1) goto L7529;
	f23e3(l88, (unsigned char)((l2 + 37)), 1);
	goto L753a;
L7529:
	f23e3(l88, 32, 3);
L753a:
	f030b(l88, (l4 + 3), (l6 + 2));
	rsi = 0;
L7553:
	f23e3(l88, (unsigned char)(((((unsigned char)g4587[(432 * p4)] << 1) + rsi) + 58)), 1);
	rsi++;
	if (rsi < 2) goto L7553;
	f030b(l88, (l4 + 3), (l6 + 1));
	rsi = 0;
L7596:
	if ((unsigned char)g44f8[((432 * p4) + rsi)] == 255) goto L75e7;
	if (*(int *)((char *)g4428 + ((432 * p4) + ((unsigned char)g44f8[((432 * p4) + rsi)] << 3))) <= 0) goto L75e7;
	f23e3(l88, (unsigned char)(((unsigned char)g442d[((432 * p4) + ((unsigned char)g44f8[((432 * p4) + rsi)] << 3))] + 1)), 4);
	goto L75fc;
L75e7:
	f23e3(l88, (unsigned char)((rsi + 37)), 4);
L75fc:
	rsi++;
	if (rsi < 2) goto L7596;
	f7272(l88, (l4 + 5), (l6 + 1), *(int *)((char *)g4400 + (432 * p4)), *(int *)((char *)g4402 + (432 * p4)), 86);
	f7272(l88, (l4 + 6), (l6 + 1), *(int *)((char *)g4404 + (432 * p4)), *(int *)((char *)g4406 + (432 * p4)), 99);
}
