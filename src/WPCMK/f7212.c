extern char g559c[];
extern int g56ac;
extern int g56ae[];
f7212(p4, p6, p8)
char *p6;
{
	int l2;
	int l4;
	register int rsi;
	l4 = g56ac;
	rsi = 0;
L7222:
	l2 = (unsigned char)g559c[rsi];
L722b:
	if ((*(p6 + rsi) + -65) <= l2) goto L7252;
	l2++;
	l4--;
	if (p8 != 1) goto L7250;
	g559c[rsi]++;
	g56ac--;
	f7068();
L7250:
	goto L722b;
L7252:
	rsi++;
	if (rsi < 8) goto L7222;
	g56ae[p4] = (l4 >= 0 ? 1 : 0);
}
