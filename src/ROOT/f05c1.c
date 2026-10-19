f05c1(p4, p6, p8)
char *p4;
char *p6;
char p8;
{
	int l2;
	char l82[80];
	register int rsi;
	register int rdi;
	rsi = 0;
	l2 = 0;
L05d1:
	if (!*(p4 + rsi)) goto L061e;
	if ((unsigned char)*(p4 + rsi) != p8) goto L060b;
	rdi = 0;
L05ec:
	if (!*(p6 + rdi)) goto L0604;
	l82[l2] = *(p6 + rdi);
	l2++;
	rdi++;
	goto L05ec;
L0604:
	p8 = 0;
	rsi++;
	goto L061c;
L060b:
	l82[l2] = *(p4 + rsi);
	l2++;
	rsi++;
L061c:
	goto L05d1;
L061e:
	l82[l2] = 0;
	strcpy(p4, l82);
}
