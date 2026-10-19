draw_gauge(p4, p6, p8, p10, p12, p14)
{
	int l2;
	char l5[3];
	char x5[1];
	if ((l2 = ((int)((((long)p10 * 100) / (long)p12) / 10L) + 1)) <= 10) goto L491c;
	l2 = 10;
L491c:
	if (p10) goto L4927;
	l2 = 0;
L4927:
	l5[0] = (char)(p14 + 9);
	l5[1] = (char)(p14 + 4);
	l5[2] = *(char *)&p14;
	if (l2 > 3) goto L4950;
	l5[2] = (char)(p14 + l2);
	goto L498a;
L4950:
	l5[2] = (char)(p14 + 3);
	l2 += -3;
	if (l2 > 4) goto L4971;
	l5[1] = (char)((p14 + l2) + 4);
	goto L498a;
L4971:
	l5[1] = (char)(p14 + 8);
	l2 += -4;
	l5[0] = (char)((p14 + l2) + 9);
L498a:
	for (l2 = 0; l2 < 3; l2++) {
	set_cursor(p4, p6, (p8 + l2));
	put_char_hi(p4, (unsigned char)l5[l2], 1);
	}
}
