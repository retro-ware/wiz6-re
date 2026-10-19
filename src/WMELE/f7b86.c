extern int g363c;
extern int g4f9a;
extern int g4faa;
f7b86(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto L7bd5;
	if (!f771c(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L7bd5;
	if (g363c == 10) goto L7bc7;
	if (g363c != 12) goto L7bd0;
L7bc7:
	return 0;
L7bd0:
	return 2;
L7bd5:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (f28af((g4faa + 1082), rsi) != 1) goto L7c2f;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto L7c14;
	if (p12 <= 8) goto L7c19;
L7c14:
	return 0;
L7c19:
	goto L7c2f;
	}
L7c2f:
	rdi = 0;
	switch (g4f9a) {
case 0:
	rdi = f76b7(p4, p6, p8, p10, p12);
	goto L7ca9;
case 1:
	rdi = f2925((g4faa + 96), rsi, 2);
	goto L7ca9;
case 2:
	rdi = f2925((g4faa + 288), rsi, 2);
	goto L7ca9;
case 3:
	rdi = f7652(p4, p6, p8, p10, p12);
	goto L7ca9;
	}
L7ca9:
	l2 = f2925((g4faa + 504), rsi, 4);
	l4 = ((f2925((g4faa + 888), rsi, 2) + 1) % 4);
	if (l4 != g4f9a) goto L7d3e;
	switch (l2) {
case 1:
	rdi = 5;
	goto L7d3e;
case 2:
	rdi = 6;
	goto L7d3e;
case 3:
	rdi = 8;
	goto L7d3e;
case 4:
	rdi = 9;
	goto L7d3e;
case 7:
	rdi = 4;
	goto L7d3e;
case 8:
	rdi = 7;
	goto L7d3e;
case 9:
	rdi = 10;
	goto L7d3e;
case 10:
	rdi = 11;
	goto L7d3e;
case 11:
	rdi = 12;
	goto L7d3e;
case 12:
	rdi = 13;
	goto L7d3e;
	}
L7d3e:
	return rdi;
}
