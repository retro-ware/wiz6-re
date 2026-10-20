fc3eb(p4)
char *p4;
{
	int l2;
	char l162[160];
	int l164;
	int l166;
	int l168;
	strcpy(((char *)l162 + 80), p4);
	l168 = 0;
	l164 = 0;
Lc40c:
	if (l162[(l164 + 80)] != 32) goto Lc41e;
	l164++;
	goto Lc40c;
Lc41e:
	if ((l166 = fc282(((char *)l162 + 80), l164)) == -1) goto Lc4aa;
	strncpy(l162, (l164 + ((char *)l162 + 80)), (l166 - l164));
	l162[(l166 - l164)] = 32;
	l162[((l166 - l164) + 1)] = 0;
	fc2bf(l162);
	for (l2 = 0; strlen(l162) > l2; l2++) {
	*(p4 + (l168 + l2)) = l162[l2];
	}
	l168 += strlen(l162);
Lc4aa:
	l164 = l166;
	if (l164 != -1) goto Lc40c;
	*(p4 + l168) = 0;
}
