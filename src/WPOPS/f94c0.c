extern int g363c;
extern int g4f9a;
extern int g4faa;
f94c0(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto L950f;
	if (!f8e99(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L950f;
	if (g363c == 10) goto L9501;
	if (g363c != 12) goto L950a;
L9501:
	return 0;
L950a:
	return 2;
L950f:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (f28af((g4faa + 1082), rsi) != 1) goto L9569;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto L954e;
	if (p12 <= 8) goto L9553;
L954e:
	return 0;
L9553:
	goto L9569;
	}
L9569:
	rdi = 0;
	switch (g4f9a) {
case 0:
	rdi = f2925((g4faa + 288), rsi, 2);
	goto L95e3;
case 1:
	rdi = f8dcf(p4, p6, p8, p10, p12);
	goto L95e3;
case 2:
	rdi = f8e34(p4, p6, p8, p10, p12);
	goto L95e3;
case 3:
	rdi = f2925((g4faa + 96), rsi, 2);
	goto L95e3;
	}
L95e3:
	l2 = f2925((g4faa + 504), rsi, 4);
	l4 = ((f2925((g4faa + 888), rsi, 2) + 3) % 4);
	if (l4 != g4f9a) goto L967a;
	switch (l2) {
case 1:
	rdi = 5;
	goto L967a;
case 2:
	rdi = 6;
	goto L967a;
case 3:
	rdi = 8;
	goto L967a;
case 4:
	rdi = 9;
	goto L967a;
case 7:
	rdi = 4;
	goto L967a;
case 8:
	rdi = 7;
	goto L967a;
case 9:
	rdi = 10;
	goto L967a;
case 10:
	rdi = 11;
	goto L967a;
case 11:
	rdi = 12;
	goto L967a;
case 12:
	rdi = 13;
	goto L967a;
	}
L967a:
	return rdi;
}
