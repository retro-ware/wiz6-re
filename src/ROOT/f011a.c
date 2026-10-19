f011a(p4, p6, p8, p10, p12, p14, p16, p18)
char p4;
char p6;
char p12;
{
	char *l2;
	int l4;
	register int rsi;
	l4 = ((p16 & 2) ? 20 : (((p8 << 1) * p10) + 20));
	l2 = malloc(l4);
	if (l2) goto L0151;
	f00d5(11);
L0151:
	*l2 = *(char *)&p8;
	l2[1] = *(char *)&p10;
	l2[2] = p4;
	l2[3] = p6;
	l2[4] = p12;
	l2[5] = *(char *)&p16;
	l2[6] = 0;
	l2[7] = 0;
	if (p14 != -1) goto L01b2;
	setmem((l2 + 8), 8, 0);
	goto L02ac;
L01b2:
	if (p14 != -2) goto L01f3;
	l2[8] = 27;
	l2[9] = 27;
	l2[10] = 28;
	l2[11] = 27;
	l2[12] = 28;
	l2[13] = 27;
	l2[14] = 27;
	l2[15] = 28;
	goto L02ac;
L01f3:
	if (p14 != -3) goto L0234;
	l2[8] = 26;
	l2[9] = 27;
	l2[10] = 27;
	l2[11] = 26;
	l2[12] = 27;
	l2[13] = 26;
	l2[14] = 27;
	l2[15] = 27;
	goto L02ac;
L0234:
	if (p14 != -4) goto L0266;
	setmem((l2 + 8), 8, 0);
	l2[10] = 28;
	l2[12] = 28;
	l2[15] = 28;
	goto L02ac;
L0266:
	if (p14 != -5) goto L0298;
	setmem((l2 + 8), 8, 0);
	l2[8] = 35;
	l2[9] = 35;
	l2[10] = 35;
	goto L02ac;
L0298:
	rsi = 0;
L029b:
	(l2 + rsi)[8] = (char)(p14 + rsi);
	rsi++;
	if (rsi < 8) goto L029b;
L02ac:
	f2f76(l2);
	if ((p16 & 2)) goto L02c1;
	f329a(l2);
L02c1:
	if (!p18) goto L02ca;
	f2a63();
L02ca:
	return l2;
}
