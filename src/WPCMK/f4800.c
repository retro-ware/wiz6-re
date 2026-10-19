extern int g0846;
extern int g4fc4;
f4800(p4, p6, p8, p10, p12, p14, p16, p18, p20)
char *p4;
{
	int l2;
	int l4;
	char l409[405];
	int l411;
	int l413;
	char x413[1];
	register int rsi;
	l4 = 0;
	l2 = 0;
L4812:
	;
#asm
l4812:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h
#endasm
	goto L4945;
L4824:
	;
#asm
l4824:
	db 083h,038h,001h,074h,003h
#endasm
	goto L493f;
L482c:
	l411 = (((l4 / p16) * p14) + p10);
	l413 = ((l4 % p16) + p12);
	f030b(p4, l411, l413);
	f075b((p6 + l2), ((l4 * 25) + l409));
	if (g0846) goto L48b5;
	if (p20 != l4) goto L48b5;
	f24e9(p4, ((l4 * 25) + l409), (0 - p18));
	goto L48d8;
L48b5:
	f251d(p4, ((l4 * 25) + l409), 3);
L48d8:
	*(int *)(l409 + ((l4 << 1) + 375)) = l2;
	f0c16(l4, ((unsigned char)p4[2] + l411), ((unsigned char)p4[3] + l413), (((strlen(((l4 * 25) + l409)) + (unsigned char)p4[2]) + l411) - 1), ((unsigned char)p4[3] + l413));
	l4++;
L493f:
	l2++;
	goto L4812;
L4945:
	f0c16(l4, 255, 0, 0, 0);
L4958:
	if (g0846) goto L49a9;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f24e9(p4, ((p20 * 25) + l409), (0 - p18));
L49a9:
	l2 = f45fc(21534, 13720);
	if (g4fc4 != 1) goto L49cc;
	p20 = l2;
	l2 = 5;
	goto L4b53;
L49cc:
	switch (l2) {
case 1:
	if ((p20 - p16) < 0) goto L4a27;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f251d(p4, ((p20 * 25) + l409), 3);
	p20 -= p16;
L4a27:
	goto L4b53;
case 2:
	if ((p20 % p16) <= 0) goto L4a79;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f251d(p4, ((p20 * 25) + l409), 3);
	p20--;
L4a79:
	goto L4b53;
case 3:
	if ((p20 + p16) >= l4) goto L4ad4;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f251d(p4, ((p20 * 25) + l409), 3);
	p20 += p16;
L4ad4:
	goto L4b53;
case 4:
	if ((p20 % p16) >= (p16 - 1)) goto L4b34;
	if ((p20 + 1) >= l4) goto L4b34;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f251d(p4, ((p20 * 25) + l409), 3);
	p20++;
L4b34:
	goto L4b53;
	}
L4b53:
	if (l2 != 5) goto L4958;
	return *(int *)(l409 + ((p20 << 1) + 375));
}
