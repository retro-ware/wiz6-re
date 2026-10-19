extern int g363c;
extern int g4f9a;
extern int g4faa;
f9303(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto L9352;
	if (!f8e99(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L9352;
	if (g363c == 10) goto L9344;
	if (g363c != 12) goto L934d;
L9344:
	return 0;
L934d:
	return 2;
L9352:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (f28af((g4faa + 1082), rsi) != 1) goto L93ac;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto L9391;
	if (p12 <= 8) goto L9396;
L9391:
	return 0;
L9396:
	goto L93ac;
	}
L93ac:
	rdi = 0;
	switch (g4f9a) {
case 0:
	rdi = f8e34(p4, p6, p8, p10, p12);
	goto L9426;
case 1:
	rdi = f2925((g4faa + 96), rsi, 2);
	goto L9426;
case 2:
	rdi = f2925((g4faa + 288), rsi, 2);
	goto L9426;
case 3:
	rdi = f8dcf(p4, p6, p8, p10, p12);
	goto L9426;
	}
L9426:
	l2 = f2925((g4faa + 504), rsi, 4);
	l4 = ((f2925((g4faa + 888), rsi, 2) + 1) % 4);
	if (l4 != g4f9a) goto L94bb;
	switch (l2) {
case 1:
	rdi = 5;
	goto L94bb;
case 2:
	rdi = 6;
	goto L94bb;
case 3:
	rdi = 8;
	goto L94bb;
case 4:
	rdi = 9;
	goto L94bb;
case 7:
	rdi = 4;
	goto L94bb;
case 8:
	rdi = 7;
	goto L94bb;
case 9:
	rdi = 10;
	goto L94bb;
case 10:
	rdi = 11;
	goto L94bb;
case 11:
	rdi = 12;
	goto L94bb;
case 12:
	rdi = 13;
	goto L94bb;
	}
L94bb:
	return rdi;
}
