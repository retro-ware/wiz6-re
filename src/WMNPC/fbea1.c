extern int g60a8;
fbea1(p4, p6)
char *p6;
{
	int l2;
	char l84[82];
	char x84[2];
	int l88;
	l2 = 0;
	goto Lbf6e;
Lbeaf:
	fbbfa(l2, ((char *)l84 + 40));
	fbcec(l2, l84);
	l88 = strlen(((char *)l84 + 40));
	l84[(l88 + 40)] = 32;
	l84[(l88 + 41)] = 0;
	l88 = strlen(l84);
	l84[l88] = 32;
	l84[(l88 + 1)] = 0;
	if (strncmp(p4, ((char *)l84 + 40), strlen(((char *)l84 + 40)))) goto Lbf32;
	fbb01(p4, (strlen(((char *)l84 + 40)) - 1));
	*(int *)p6 = 0;
	return l2;
Lbf32:
	if (strncmp(p4, l84, strlen(l84))) goto Lbf6b;
	fbb01(p4, (strlen(l84) - 1));
	*(int *)p6 = 1;
	return l2;
Lbf6b:
	l2++;
Lbf6e:
	if (l2 < g60a8) goto Lbeaf;
	return -1;
}
