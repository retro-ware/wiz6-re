extern char g558e[];
fb659(p4, p6, p8)
{
	int l2;
	int l4;
	get_message(479, 21902);
	for (l2 = 0; l2 < 4; l2++) {
	l4 = (p6 % 10);
	l4 = (((l2 * l4) + l4) % 10);
	put_char(p4, (unsigned char)g558e[l4], p8);
	p6 = (((p6 / 10) - l4) + 10);
	}
}
