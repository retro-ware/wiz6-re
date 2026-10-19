extern char g450c[];
extern char g450d[];
extern char g450e[];
extern char g450f[];
extern char g4510[];
extern char g4512[];
extern char g4513[];
extern char g4514[];
extern char g4585[];
extern char g4586[];
extern char g4587[];
extern char g4588[];
extern char g4589[];
extern int g053a;
extern int g053c;
extern int g0544;
extern int g43d0[];
extern int g43f0[];
extern int g43f4[];
extern int g43f6[];
extern int g43f8[];
extern int g43fa[];
extern int g43fc[];
extern int g43fe[];
extern int g4400[];
extern int g4402[];
extern int g4404[];
extern int g4406[];
extern int g4408[];
extern int g440a[];
extern int g440c[];
extern int g440e[];
extern int rename_test_table[];
f54ab(p4, p6)
char *p4;
{
	int l2;
	int l4;
	char x4[78];
	int l84;
	int l86;
	char x86[2];
	int l90;
	char x90[12];
	register int rsi;
	register int rdi;
	l86 = ((g43d0[p6] * 9) + 72);
	rsi = 0;
L54cf:
	f030b(p4, 1, (rsi + 1));
	rdi = 0;
L54e3:
	f23e3(p4, (unsigned char)((((rsi * 3) + l86) + rdi)), 2);
	rdi++;
	if (rdi < 3) goto L54e3;
	rsi++;
	if (rsi < 3) goto L54cf;
	f50ba(p4, 4, 1, ((432 * p6) + 17384), 5);
	f030b(p4, 13, 1);
	f075b(((unsigned char)g4586[(432 * p6)] + 140), &l84);
	f22b7(p4, (unsigned char)*(char *)&l84, 1);
	f22b7(p4, 45, 1);
	f5115(((unsigned char)g4585[(432 * p6)] + 100), p4, 1);
	f030b(p4, 4, 2);
	f22b7(p4, 30, 5);
	f05a5(p4, (int)(*(long *)((char *)g43f0 + (432 * p6)) / 365L), 3, 14);
	p4[6]++;
	if (f28af(((432 * p6) + 17792), 0) == 1) goto L5639;
	if (f28af(((432 * p6) + 17792), 1) == 1) goto L5639;
	if (f28af(((432 * p6) + 17792), 2) != 1) goto L564a;
L5639:
	f22b7(p4, 10, 5);
L564a:
	f50df(((unsigned char)g4587[(432 * p6)] + 120), p4, 13, 2, 1);
	f030b(p4, 4, 3);
	f22b7(p4, 31, 5);
	f05a5(p4, *(int *)((char *)g440e + (432 * p6)), 3, 12);
	f50df(200, p4, 13, 3, 8);
	p4[6]++;
	f05a5(p4, *(int *)((char *)g440c + (432 * p6)), 3, 9);
	f50df(201, p4, 25, 1, 11);
	f075b(((((unsigned char)g4587[(432 * p6)] * 10) + (unsigned char)g4588[(432 * p6)]) + 800), 21902);
	f030b(p4, (39 - strlen(21902)), 1);
	f24e9(p4, 21902, 3);
	f50df(202, p4, 25, 2, 14);
	p4[6]++;
	f0507(p4, *(int *)((char *)g43f4 + (432 * p6)), *(int *)((char *)g43f6 + (432 * p6)), 10, 6);
	f50df(203, p4, 25, 3, 14);
	p4[6]++;
	f0507(p4, *(int *)((char *)g43f8 + (432 * p6)), *(int *)((char *)g43fa + (432 * p6)), 10, 6);
	rsi = 0;
L57e8:
	f50df((rsi + 204), p4, 1, (rsi + 5), 5);
	p4[6]++;
	f05a5(p4, (unsigned char)g4514[((432 * p6) + rsi)], 2, 1);
	rsi++;
	if (rsi < 8) goto L57e8;
	f50df(212, p4, 10, 5, 4);
	p4[6]++;
	f05a5(p4, *(int *)((char *)g4400 + (432 * p6)), 4, 6);
	f22b7(p4, 47, 8);
	f030b(p4, 14, 6);
	f05a5(p4, *(int *)((char *)g4402 + (432 * p6)), 4, 6);
	f50df(213, p4, 10, 8, 4);
	p4[6] += 2;
	l4 = ((*(int *)((char *)g4404 + (432 * p6)) * 100) / *(int *)((char *)g4406 + (432 * p6)));
	if (l4 >= 1) goto L58fc;
	if (*(int *)((char *)g4404 + (432 * p6)) <= 0) goto L58fc;
	l4 = 1;
L58fc:
	f05a5(p4, l4, 3, 6);
	f22b7(p4, 37, 4);
	f50df(214, p4, 10, 9, 4);
	p4[6]++;
	l4 = (unsigned char)p4[6];
	l2 = rename_test_table[(unsigned char)g4589[(432 * p6)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * p6)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * p6)] > 0) ? 2 : l2);
	if (!l2) goto L59bf;
	f23e3(p4, (unsigned char)((l2 + 47)), 1);
L59bf:
	if ((unsigned)g4513[(432 * p6)] <= 0) goto L59e4;
	f23e3(p4, (unsigned char)((g0544 + 47)), 1);
L59e4:
	if ((unsigned)g450e[(432 * p6)] <= 0) goto L5a09;
	f23e3(p4, (unsigned char)((g053a + 47)), 1);
L5a09:
	if ((unsigned)g450f[(432 * p6)] > 0) goto L5a26;
	if ((unsigned)g4510[(432 * p6)] > 0) goto L5a26;
	if ((unsigned)g4512[(432 * p6)] <= 0) goto L5a3c;
L5a26:
	f23e3(p4, (unsigned char)((g053c + 47)), 1);
L5a3c:
	if ((unsigned char)p4[6] != l4) goto L5a5d;
	f23e3(p4, (unsigned char)((rename_test_table[0] + 47)), 1);
L5a5d:
	f50df(215, p4, 10, 11, 13);
	p4[6]++;
	f0507(p4, *(int *)((char *)g43fc + (432 * p6)), *(int *)((char *)g43fe + (432 * p6)), 7, 5);
	f5370(p6);
	f518e(p6);
#asm
	db 056h,057h,08bh,0f0h,08dh,07eh,09ah,08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h
	db 05fh,05eh,08ah,046h,0a4h,050h,0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,058h,088h
	db 087h,08dh,045h
#endasm
	l4 = l90;
	f50df(216, p4, 10, 12, (l4 == 9 ? 8 : l4));
	f05a5(p4, (*(int *)((char *)g4408 + (432 * p6)) / 10), 3, l4);
	f22b7(p4, 47, (l4 == 9 ? 8 : l4));
	f05a5(p4, (*(int *)((char *)g440a + (432 * p6)) / 10), 3, l4);
	f513c(p4, 1, 14, 35);
	f513c(p4, 1, 16, 36);
	f513c(p4, 1, 18, 37);
	f513c(p4, 11, 14, 38);
	f513c(p4, 11, 16, 39);
	f513c(p4, 11, 18, 40);
	f53fa(p4, p6);
}
