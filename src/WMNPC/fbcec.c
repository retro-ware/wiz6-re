extern char g58da[];
extern char g58db[];
fbcec(p4, p6)
char *p6;
{
	int l2;
	int l4;
	int l6;
	if ((l6 = char_index(((p4 * 20) + 22746), 37)) < 0) goto Lbd4c;
	strncpy(p6, ((p4 * 20) + 22746), (l6 + 1));
	*(p6 + l6) = 83;
	(p6 + l6)[1] = 0;
	goto Lbe75;
Lbd4c:
	if ((l6 = char_index(((p4 * 20) + 22746), 64)) < 0) goto Lbd9a;
	strncpy(p6, ((p4 * 20) + 22746), l6);
	*(p6 + l6) = 0;
	goto Lbe75;
Lbd9a:
	l6 = char_index(((p4 * 20) + 22746), 94);
	if (l6 < 0) goto Lbe75;
	l4 = ((unsigned char)g58db[((p4 * 20) + l6)] + -48);
	strncpy(p6, ((p4 * 20) + 22746), (l6 - l4));
	*(p6 + (l6 - l4)) = 0;
	for (l2 = (l6 + 2); strlen(((p4 * 20) + 22746)) > l2; l2++) {
	l4 = strlen(p6);
	*(p6 + l4) = g58da[((p4 * 20) + l2)];
	(p6 + l4)[1] = 0;
	}
Lbe75:
	;
}
