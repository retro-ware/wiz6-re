extern char *g5264;
extern int message_delay;
fc7d9(p4, p6)
char *p4;
{
	int l2;
	int l4;
	char x4[78];
	int l84;
	char *l86;
	int l88;
	int l90;
	l2 = 1;
Lc7e5:
	if (!l2) goto Lc890;
	switch ((unsigned char)*p4) {
case 64:
	l88 = (unsigned char)g5264[6];
	l90 = (unsigned char)g5264[7];
	f5a69();
	set_cursor(g5264, 39, 4);
	put_char(g5264, 32, 0);
	set_cursor(g5264, l88, l90);
	f4f73(g5264);
	f4f73(g5264);
	p4++;
	goto Lc88d;
case 37:
	f5a1e(message_delay);
	p4++;
	goto Lc88d;
case 33:
	f4f73(g5264);
	p4++;
	goto Lc88d;
default:
	l2 = 0;
	goto Lc88d;
	}
Lc88d:
	goto Lc7e5;
Lc890:
	strcpy(&l84, p4);
	l86 = &l84;
Lc8a3:
	if (strlen(l86) <= 0) goto Lc956;
	l2 = char_index(l86, 32);
	l4 = (l2 < 0 ? strlen(l86) : l2);
	if ((((unsigned char)g5264[6] + l4) + 1) > (unsigned char)*g5264) {
	f4f73(g5264);
	}
	if (!g5264[6]) {
	g5264[6]++;
	}
	if (l2 >= 0) {
	*(l86 + l2) = 0;
	print_string(g5264, l86, p6);
	g5264[6]++;
	l86 += l2;
	l86 += 1;
	} else {
	print_string(g5264, l86, p6);
	g5264[6]++;
	*l86 = 0;
	}
	goto Lc8a3;
Lc956:
	;
}
