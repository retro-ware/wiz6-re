fabd8(p4, p6)
char *p4;
{
	char x0[8];
	int l10;
	int l12;
	int l14;
	f32be(p4, 32, 3, 0);
	f2a63();
	f030b(p4, 1, 1);
	f083f(1128, p4, 18);
	l12 = (unsigned char)p4[6];
	l14 = (unsigned char)p4[7];
	f033f(p4, l12, l14, (l12 + 7), l14);
	f030b(p4, l12, l14);
	f9459(p4, &l10, 7, 5, 0);
	if (!*(char *)&l10) goto Lac7f;
	strcpy(((432 * p6) + 17384), &l10);
Lac7f:
	;
}
