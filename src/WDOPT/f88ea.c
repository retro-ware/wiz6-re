extern int g363c;
extern int g4f9a;
extern int g4faa;
f88ea(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto L8939;
	if (!f82c3(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L8939;
	if (g363c == 10) goto L892b;
	if (g363c != 12) goto L8934;
L892b:
	return 0;
L8934:
	return 2;
L8939:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (f28af((g4faa + 1082), rsi) != 1) goto L8993;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto L8978;
	if (p12 <= 8) goto L897d;
L8978:
	return 0;
L897d:
	goto L8993;
	}
L8993:
	rdi = 0;
	switch (g4f9a) {
case 0:
	rdi = f2925((g4faa + 288), rsi, 2);
	goto L8a0d;
case 1:
	rdi = f81f9(p4, p6, p8, p10, p12);
	goto L8a0d;
case 2:
	rdi = f825e(p4, p6, p8, p10, p12);
	goto L8a0d;
case 3:
	rdi = f2925((g4faa + 96), rsi, 2);
	goto L8a0d;
	}
L8a0d:
	l2 = f2925((g4faa + 504), rsi, 4);
	l4 = ((f2925((g4faa + 888), rsi, 2) + 3) % 4);
	if (l4 != g4f9a) goto L8aa4;
	switch (l2) {
case 1:
	rdi = 5;
	goto L8aa4;
case 2:
	rdi = 6;
	goto L8aa4;
case 3:
	rdi = 8;
	goto L8aa4;
case 4:
	rdi = 9;
	goto L8aa4;
case 7:
	rdi = 4;
	goto L8aa4;
case 8:
	rdi = 7;
	goto L8aa4;
case 9:
	rdi = 10;
	goto L8aa4;
case 10:
	rdi = 11;
	goto L8aa4;
case 11:
	rdi = 12;
	goto L8aa4;
case 12:
	rdi = 13;
	goto L8aa4;
	}
L8aa4:
	return rdi;
}
