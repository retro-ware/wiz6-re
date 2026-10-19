extern char g6316[];
fc2bf(p4)
{
	int l2;
	int l4;
	int l6;
	char l166[160];
	l2 = 0;
Lc2cb:
	l4 = 0;
	l6 = f3350((((l2 * 50) + l4) + 25366), 47);
	strncpy(((char *)l166 + 80), (((l2 * 50) + l4) + 25366), l6);
	l166[(l6 + 80)] = 32;
	l166[(l6 + 81)] = 0;
	l4 = (l6 + 1);
Lc32c:
	l6 = f3350((((l2 * 50) + l4) + 25366), 47);
	strncpy(l166, (((l2 * 50) + l4) + 25366), l6);
	l166[l6] = 32;
	l166[(l6 + 1)] = 0;
	l4 = ((l4 + l6) + 1);
	if (strncmp(p4, l166, strlen(l166))) goto Lc3bb;
	strcpy(p4, ((char *)l166 + 80));
	return;
Lc3bb:
	if (g6316[((l2 * 50) + l4)]) goto Lc32c;
	l2++;
	if (l2 < 38) goto Lc2cb;
	return;
}
