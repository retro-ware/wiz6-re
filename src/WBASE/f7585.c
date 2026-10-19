extern char g3590;
extern char g3591;
extern char g3593;
extern char g3594;
extern char g3595;
f7585(p4, p6, p8, p10)
{
	int l2;
	int l4;
	char l84[80];
	l2 = (p6 < 5 ? 7 : 19);
	l4 = (p6 != 1 ? (p6 < 5 ? 10 : 20) : 3);
	f033f(p4, l2, p8, ((l4 + l2) - 1), p8);
	switch (p6) {
case 0:
	f075b(((unsigned char)g3590 + 2350), l84);
	goto L7684;
case 1:
	f04f1((unsigned char)g3591, l84);
	goto L7684;
case 2:
	f075b(((unsigned char)g3593 + 2357), l84);
	goto L7684;
case 3:
	f075b(((unsigned char)g3594 + 2360), l84);
	goto L7684;
case 4:
	f075b(((unsigned char)g3595 + 2363), l84);
	goto L7684;
case 5:
	strcpy(l84, 13692);
	goto L7684;
case 6:
	strcpy(l84, 13632);
	goto L7684;
case 7:
	strcpy(l84, 13652);
	goto L7684;
	}
L7684:
	if (l84[0]) goto L7692;
	l84[0] = 32;
	l84[(0 + 1)] = 0;
L7692:
	f030b(p4, l2, p8);
	f24e9(p4, l84, p10);
}
