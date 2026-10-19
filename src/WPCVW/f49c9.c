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
extern int rename_test_table[];
f49c9(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char x6[80];
	int l88;
	register int rsi;
	register int rdi;
	l4 = (((p6 % 2) * 9) + 2);
	l6 = (((p6 / 2) << 2) + 2);
	f030b(p4, l4, l6);
	f251d(p4, ((432 * p6) + 17384), 3);
	rsi = strlen(((432 * p6) + 17384));
	goto L4a43;
L4a31:
	f23e3(p4, 32, 3);
	rsi++;
L4a43:
	if (rsi < 7) goto L4a31;
	l88 = ((g43d0[p6] * 9) + 72);
	rsi = 0;
L4a64:
	f030b(p4, l4, ((l6 + rsi) + 1));
	rdi = 0;
L4a7a:
	f23e3(p4, (unsigned char)((((rsi * 3) + l88) + rdi)), 2);
	rdi++;
	if (rdi < 3) goto L4a7a;
	rsi++;
	if (rsi < 3) goto L4a64;
	l2 = rename_test_table[(unsigned char)g4589[(432 * p6)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * p6)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * p6)] > 0) ? 2 : l2);
	f030b(p4, (l4 + 3), (l6 + 3));
	f23e3(p4, (unsigned char)((l2 + 37)), 1);
	l2 = -1;
	rsi = 0;
L4b30:
	if ((unsigned)g450a[((432 * p6) + rsi)] <= 0) goto L4b53;
	if (g0532[rsi] <= l2) goto L4b53;
	l2 = g0532[rsi];
L4b53:
	rsi++;
	if (rsi < 10) goto L4b30;
	if (l2 == -1) goto L4b77;
	f23e3(p4, (unsigned char)((l2 + 37)), 1);
	goto L4b88;
L4b77:
	f23e3(p4, 32, 3);
L4b88:
	f030b(p4, (l4 + 3), (l6 + 2));
	rsi = 0;
L4ba1:
	f23e3(p4, (unsigned char)(((((unsigned char)g4587[(432 * p6)] << 1) + rsi) + 58)), 1);
	rsi++;
	if (rsi < 2) goto L4ba1;
	f030b(p4, (l4 + 3), (l6 + 1));
	rsi = 0;
L4be4:
	if ((unsigned char)g44f8[((432 * p6) + rsi)] == 255) goto L4c35;
	if (*(int *)((char *)g4428 + ((432 * p6) + ((unsigned char)g44f8[((432 * p6) + rsi)] << 3))) <= 0) goto L4c35;
	f23e3(p4, (unsigned char)(((unsigned char)g442d[((432 * p6) + ((unsigned char)g44f8[((432 * p6) + rsi)] << 3))] + 1)), 4);
	goto L4c4a;
L4c35:
	f23e3(p4, (unsigned char)((rsi + 37)), 4);
L4c4a:
	rsi++;
	if (rsi < 2) goto L4be4;
	f48e8(p4, (l4 + 5), (l6 + 1), *(int *)((char *)g4400 + (432 * p6)), *(int *)((char *)g4402 + (432 * p6)), 86);
	f48e8(p4, (l4 + 6), (l6 + 1), *(int *)((char *)g4404 + (432 * p6)), *(int *)((char *)g4406 + (432 * p6)), 99);
}
