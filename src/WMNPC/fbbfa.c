fbbfa(p4, p6)
char *p6;
{
	int l2;
	l2 = char_index(((p4 * 20) + 22746), 37);
	if (l2 < 0) goto Lbc4f;
	strncpy(p6, ((p4 * 20) + 22746), l2);
	*(p6 + l2) = 0;
	goto Lbce7;
Lbc4f:
	l2 = char_index(((p4 * 20) + 22746), 64);
	if (l2 < 0) goto Lbc9c;
	strncpy(p6, ((p4 * 20) + 22746), l2);
	*(p6 + l2) = 0;
	goto Lbce7;
Lbc9c:
	l2 = char_index(((p4 * 20) + 22746), 94);
	if (l2 < 0) goto Lbce7;
	strncpy(p6, ((p4 * 20) + 22746), l2);
	*(p6 + l2) = 0;
Lbce7:
	;
}
