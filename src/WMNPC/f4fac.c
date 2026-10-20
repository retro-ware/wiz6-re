f4fac(p4, p6, p8, p10, p12, p14)
{
	char l3[3];
	char x3[1];
	register int rsi;
	rsi = ((int)((((long)p10 * 100) / (long)p12) / 10L) + 1);
	if (rsi > 10) {
	rsi = 10;
	}
	if (!p10) {
	rsi = 0;
	}
	l3[0] = (char)(p14 + 9);
	l3[1] = (char)(p14 + 4);
	l3[2] = *(char *)&p14;
	if (rsi > 3) goto L5010;
	l3[2] = (char)(p14 + rsi);
	goto L5045;
L5010:
	l3[2] = (char)(p14 + 3);
	rsi -= 3;
	if (rsi > 4) goto L502e;
	l3[1] = (char)((p14 + rsi) + 4);
	goto L5045;
L502e:
	l3[1] = (char)(p14 + 8);
	rsi = (rsi + -4);
	l3[0] = (char)((p14 + rsi) + 9);
L5045:
	for (rsi = 0; rsi < 3; rsi++) {
	set_cursor(p4, p6, (p8 + rsi));
	put_char_hi(p4, (unsigned char)*(char *)((l3 + rsi)), 1);
	}
}
