extern int g58d6;
fbb9a(p4)
char *p4;
{
	int l2;
	int l4;
	g58d6 = 0;
	l2 = 0;
	goto Lbbe9;
Lbbae:
	if ((l4 = (unsigned char)*(p4 + l2)) == 63) {
	g58d6 = 1;
	*(p4 + l2) = 32;
	} else {
	if (((l4 == 33) || (l4 == 46)) || (l4 == 44)) {
	*(p4 + l2) = 32;
	}
	}
	l2++;
Lbbe9:
	if (strlen(p4) > l2) goto Lbbae;
}
