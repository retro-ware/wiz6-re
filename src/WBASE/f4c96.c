extern char g3bcc[];
extern char g3bff[];
f4c96(p4, p6, p8, p10)
{
	char l10[10];
	l10[0] = *(char *)&p4;
	l10[(0 + 1)] = 0;
	f3670(4, ((unsigned char)g3bcc[(p4 << 1)] + p6), (unsigned char)g3bff[p4], p8, p10, 0, 0, l10);
}
