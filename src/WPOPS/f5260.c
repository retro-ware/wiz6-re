extern int g0846;
extern int g4fc4;
f5260(p4, p6, p8, p10, p12, p14, p16, p18, p20)
char *p4;
{
	int l2;
	int l4;
	char l334[330];
	int l336;
	int l338;
	register int rsi;
	l4 = 0;
	l2 = 0;
L5272:
	;
#asm
l5272:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h
#endasm
	goto L53a5;
L5284:
	;
#asm
l5284:
	db 083h,038h,001h,074h,003h
#endasm
	goto L539f;
L528c:
	l336 = (((l4 / p16) * p14) + p10);
	l338 = ((l4 % p16) + p12);
	f030b(p4, l336, l338);
	f075b((p6 + l2), ((l4 * 20) + l334));
	if (g0846) goto L5315;
	if (p20 != l4) goto L5315;
	f24e9(p4, ((l4 * 20) + l334), (0 - p18));
	goto L5338;
L5315:
	f251d(p4, ((l4 * 20) + l334), 3);
L5338:
	*(int *)(l334 + ((l4 << 1) + 300)) = l2;
	f0c16(l4, ((unsigned char)p4[2] + l336), ((unsigned char)p4[3] + l338), (((strlen(((l4 * 20) + l334)) + (unsigned char)p4[2]) + l336) - 1), ((unsigned char)p4[3] + l338));
	l4++;
L539f:
	l2++;
	goto L5272;
L53a5:
	f0c16(l4, 255, 0, 0, 0);
L53b8:
	if (g0846) goto L5409;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f24e9(p4, ((p20 * 20) + l334), (0 - p18));
L5409:
	l2 = f51d9(17270, 13720);
	if (g4fc4 != 1) goto L542c;
	p20 = l2;
	l2 = 5;
	goto L55b3;
L542c:
	switch (l2) {
case 1:
	if ((p20 - p16) < 0) goto L5487;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f251d(p4, ((p20 * 20) + l334), 3);
	p20 -= p16;
L5487:
	goto L55b3;
case 2:
	if ((p20 % p16) <= 0) goto L54d9;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f251d(p4, ((p20 * 20) + l334), 3);
	p20--;
L54d9:
	goto L55b3;
case 3:
	if ((p20 + p16) >= l4) goto L5534;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f251d(p4, ((p20 * 20) + l334), 3);
	p20 += p16;
L5534:
	goto L55b3;
case 4:
	if ((p20 % p16) >= (p16 - 1)) goto L5594;
	if ((p20 + 1) >= l4) goto L5594;
	f030b(p4, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f251d(p4, ((p20 * 20) + l334), 3);
	p20++;
L5594:
	goto L55b3;
	}
L55b3:
	if (l2 != 5) goto L53b8;
	return *(int *)(l334 + ((p20 << 1) + 300));
}
