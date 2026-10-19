extern char g558e[];
fb659(p4, p6, p8)
{
	int l2;
	int l4;
	f075b(479, 21902);
	l2 = 0;
Lb672:
	l4 = (p6 % 10);
	l4 = (((l2 * l4) + l4) % 10);
	f22b7(p4, (unsigned char)g558e[l4], p8);
	p6 = (((p6 / 10) - l4) + 10);
	l2++;
	if (l2 < 4) goto Lb672;
}
