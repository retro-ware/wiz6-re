extern int g0846;
extern int g4fac;
extern int g4fbc;
extern int g4fc4;
f47c0(p4, p6, p8, p10, p12, p14, p16, p18, p20)
char *p4;
{
	int l2;
	int l4;
	char l334[330];
	int l336;
	int l338;
	register int rsi;
	f3118(p4);
	l4 = 0;
	l2 = 0;
L47d9:
	;
#asm
l47d9:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h
#endasm
	goto L48d5;
L47eb:
	;
#asm
l47eb:
	db 083h,038h,001h,074h,003h
#endasm
	goto L48cf;
L47f3:
	l336 = (((l4 / p16) * p14) + p10);
	l338 = ((l4 % p16) + p12);
	f030b(p4, l336, l338);
	f075b((p6 + l2), ((l4 * 20) + l334));
	f251d(p4, ((l4 * 20) + l334), 3);
	*(int *)(l334 + ((l4 << 1) + 300)) = l2;
	f0c16(l4, ((unsigned char)p4[2] + l336), ((unsigned char)p4[3] + l338), (((strlen(((l4 * 20) + l334)) + (unsigned char)p4[2]) + l336) - 1), ((unsigned char)p4[3] + l338));
	l4++;
L48cf:
	l2++;
	goto L47d9;
L48d5:
	f0c16(l4, 255, 0, 0, 0);
	f31d1(p4);
	f2a63();
	f36a0(g4fac);
	f36a0(g4fbc);
L4902:
	if (g0846) goto L4953;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f24e9(p4, ((p20 * 20) + l334), (0 - p18));
L4953:
	l2 = f469f(20582, 13720);
	if (g4fc4 != 1) goto L4976;
	p20 = l2;
	l2 = 5;
	goto L4aa8;
L4976:
	switch (l2) {
case 1:
	if ((p20 - p16) < 0) goto L49b8;
	f4785(p4, p20, p14, p16, p10, p12, ((p20 * 20) + l334));
	p20 -= p16;
L49b8:
	goto L4aa8;
case 2:
	if ((p20 % p16) <= 0) goto L49fa;
	f4785(p4, p20, p14, p16, p10, p12, ((p20 * 20) + l334));
	p20--;
L49fa:
	goto L4aa8;
case 3:
	if ((p20 + p16) >= l4) goto L4a3c;
	f4785(p4, p20, p14, p16, p10, p12, ((p20 * 20) + l334));
	p20 += p16;
L4a3c:
	goto L4aa8;
case 4:
	if ((p20 % p16) >= (p16 - 1)) goto L4a89;
	if ((p20 + 1) >= l4) goto L4a89;
	f4785(p4, p20, p14, p16, p10, p12, ((p20 * 20) + l334));
	p20++;
L4a89:
	goto L4aa8;
	}
L4aa8:
	if (l2 != 5) goto L4902;
	return *(int *)(l334 + ((p20 << 1) + 300));
}
