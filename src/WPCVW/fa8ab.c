extern int g43d0[];
fa8ab(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	l6 = ((g43d0[p6] * 9) + 72);
	l2 = 0;
La8cf:
	f030b(p4, p8, (p10 + l2));
	l4 = 0;
La8e7:
	f23e3(p4, (unsigned char)((((l2 * 3) + l6) + l4)), 2);
	l4++;
	if (l4 < 3) goto La8e7;
	l2++;
	if (l2 < 3) goto La8cf;
}
