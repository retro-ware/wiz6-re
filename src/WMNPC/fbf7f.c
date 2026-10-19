fbf7f(p4, p6, p8)
{
	char l80[80];
	int l82;
	register int rsi;
	rsi = 0;
	goto Lc0cc;
Lbf8c:
	l80[0] = 0;
	switch (p6) {
case 1:
	strcpy(l80, ((rsi * 10) + 24746));
	goto Lc080;
case 2:
	strcpy(l80, ((rsi * 10) + 24846));
	goto Lc080;
case 3:
	strcpy(l80, ((rsi * 10) + 24916));
	goto Lc080;
case 4:
	strcpy(l80, ((rsi * 10) + 25016));
	goto Lc080;
case 7:
	strcpy(l80, ((rsi * 20) + 25086));
	goto Lc080;
case 8:
	strcpy(l80, ((rsi * 10) + 25186));
	goto Lc080;
case 9:
	strcpy(l80, ((rsi * 10) + 25256));
	goto Lc080;
	}
Lc080:
	l82 = strlen(l80);
	l80[l82] = 32;
	l80[(l82 + 1)] = 0;
	if (strncmp(p4, l80, strlen(l80))) goto Lc0cb;
	fbb01(p4, (strlen(l80) - 1));
	return rsi;
Lc0cb:
	rsi++;
Lc0cc:
	if (rsi < p8) goto Lbf8c;
	return -1;
}
