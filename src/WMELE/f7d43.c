extern int g363c;
extern int g4f9a;
extern int g4faa;
f7d43(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto L7d92;
	if (!f771c(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L7d92;
	if (g363c == 10) goto L7d84;
	if (g363c != 12) goto L7d8d;
L7d84:
	return 0;
L7d8d:
	return 2;
L7d92:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (f28af((g4faa + 1082), rsi) != 1) goto L7dec;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto L7dd1;
	if (p12 <= 8) goto L7dd6;
L7dd1:
	return 0;
L7dd6:
	goto L7dec;
	}
L7dec:
	rdi = 0;
	switch (g4f9a) {
case 0:
	rdi = f2925((g4faa + 288), rsi, 2);
	goto L7e66;
case 1:
	rdi = f7652(p4, p6, p8, p10, p12);
	goto L7e66;
case 2:
	rdi = f76b7(p4, p6, p8, p10, p12);
	goto L7e66;
case 3:
	rdi = f2925((g4faa + 96), rsi, 2);
	goto L7e66;
	}
L7e66:
	l2 = f2925((g4faa + 504), rsi, 4);
	l4 = ((f2925((g4faa + 888), rsi, 2) + 3) % 4);
	if (l4 != g4f9a) goto L7efd;
	switch (l2) {
case 1:
	rdi = 5;
	goto L7efd;
case 2:
	rdi = 6;
	goto L7efd;
case 3:
	rdi = 8;
	goto L7efd;
case 4:
	rdi = 9;
	goto L7efd;
case 7:
	rdi = 4;
	goto L7efd;
case 8:
	rdi = 7;
	goto L7efd;
case 9:
	rdi = 10;
	goto L7efd;
case 10:
	rdi = 11;
	goto L7efd;
case 11:
	rdi = 12;
	goto L7efd;
case 12:
	rdi = 13;
	goto L7efd;
	}
L7efd:
	return rdi;
}
