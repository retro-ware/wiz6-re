extern char g4514[];
extern char g4517[];
extern char g4587[];
extern char g4597[];
extern int g4400[];
extern int g4402[];
extern int g4404[];
extern int g4406[];
extern int g440c[];
fed21(p4, p6, p8)
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	l8 = (unsigned char)g4514[(432 * p8)];
	l10 = (unsigned char)g4517[(432 * p8)];
	switch ((unsigned char)g4587[(432 * p8)]) {
case 0:
case 4:
case 10:
	l4 = (f09e2(5) + 6);
	goto Lede3;
case 1:
	l4 = (f09e2(3) + 2);
	goto Lede3;
case 2:
case 5:
case 12:
	l4 = (f09e2(4) + 4);
	goto Lede3;
case 3:
	l4 = (f09e2(4) + 3);
	goto Lede3;
case 6:
case 7:
case 9:
	l4 = (f09e2(3) + 3);
	goto Lede3;
case 8:
case 11:
	l4 = (f09e2(5) + 5);
	goto Lede3;
case 13:
	l4 = (f09e2(5) + 4);
	goto Lede3;
	}
Lede3:
	l6 = (f09e2(4) + ((l8 + l10) / 6));
	if (l10 >= 8) goto Lee09;
	l4--;
Lee09:
	if (l10 <= 15) goto Lee12;
	l4++;
Lee12:
	if (l10 <= 17) goto Lee1b;
	l4++;
Lee1b:
	if (l4 >= 1) goto Lee26;
	l4 = 1;
Lee26:
	if (*(int *)((char *)g440c + (432 * p8)) >= (unsigned char)g4597[(432 * p8)]) goto Lee4a;
	l4 = 1;
	l6 = 1;
Lee4a:
	*(int *)((char *)g4400 + (432 * p8)) += l4;
	*(int *)((char *)g4402 + (432 * p8)) += l4;
	*(int *)((char *)g4404 + (432 * p8)) += l6;
	*(int *)((char *)g4406 + (432 * p8)) += l6;
	f075b(5013, 21902);
	f030b(p4, 15, 8);
	l12 = ((*(int *)((char *)g4404 + (432 * p8)) * 100) / *(int *)((char *)g4406 + (432 * p8)));
	if (l12 >= 1) goto Leeab;
	if (*(int *)((char *)g4404 + (432 * p8)) <= 0) goto Leeab;
	l12 = 1;
Leeab:
	f05a5(p4, l12, 3, -6);
	fe8b6(p6, 21902, 1);
	f030b(p4, 15, 8);
	f05a5(p4, l12, 3, 6);
	f075b((l4 == 1 ? 5011 : 5012), 21902);
	f04f1(l4, 22416);
	f05c1(21902, 22416, 36);
	f030b(p4, 14, 5);
	f05a5(p4, *(int *)((char *)g4400 + (432 * p8)), 4, -6);
	f030b(p4, 14, 6);
	f05a5(p4, *(int *)((char *)g4402 + (432 * p8)), 4, -6);
	fe8b6(p6, 21902, 1);
	f030b(p4, 14, 5);
	f05a5(p4, *(int *)((char *)g4400 + (432 * p8)), 4, 6);
	f030b(p4, 14, 6);
	f05a5(p4, *(int *)((char *)g4402 + (432 * p8)), 4, 6);
}
