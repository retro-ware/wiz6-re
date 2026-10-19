extern int g363c;
extern int g4f9a;
extern int g4faa;
f8332(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto L8381;
	if (!f7d0b(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L8381;
	if (g363c == 10) goto L8373;
	if (g363c != 12) goto L837c;
L8373:
	return 0;
L837c:
	return 2;
L8381:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (f28af((g4faa + 1082), rsi) != 1) goto L83db;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto L83c0;
	if (p12 <= 8) goto L83c5;
L83c0:
	return 0;
L83c5:
	goto L83db;
	}
L83db:
	rdi = 0;
	switch (g4f9a) {
case 0:
	rdi = f2925((g4faa + 288), rsi, 2);
	goto L8455;
case 1:
	rdi = f7c41(p4, p6, p8, p10, p12);
	goto L8455;
case 2:
	rdi = f7ca6(p4, p6, p8, p10, p12);
	goto L8455;
case 3:
	rdi = f2925((g4faa + 96), rsi, 2);
	goto L8455;
	}
L8455:
	l2 = f2925((g4faa + 504), rsi, 4);
	l4 = ((f2925((g4faa + 888), rsi, 2) + 3) % 4);
	if (l4 != g4f9a) goto L84ec;
	switch (l2) {
case 1:
	rdi = 5;
	goto L84ec;
case 2:
	rdi = 6;
	goto L84ec;
case 3:
	rdi = 8;
	goto L84ec;
case 4:
	rdi = 9;
	goto L84ec;
case 7:
	rdi = 4;
	goto L84ec;
case 8:
	rdi = 7;
	goto L84ec;
case 9:
	rdi = 10;
	goto L84ec;
case 10:
	rdi = 11;
	goto L84ec;
case 11:
	rdi = 12;
	goto L84ec;
case 12:
	rdi = 13;
	goto L84ec;
	}
L84ec:
	return rdi;
}
