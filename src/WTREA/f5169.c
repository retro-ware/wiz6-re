extern char *g3342;
extern int g0846;
extern int g4fc4;
f5169(p4, p6, p8, p10, p12, p14, p16, p18, p20)
char *p4;
{
	int l2;
	int l4;
	int l6;
	char l261[255];
	char x261[8];
	int l271;
	char x271[8];
	int l281;
	int l283;
	int l285;
	int l287;
	int l289;
	char x289[1];
	register int rsi;
	if (p20 != 1) goto L51dd;
	l283 = (unsigned char)g3342[6];
	l285 = (unsigned char)g3342[7];
	f075b(2027, &l271);
	f075b(2028, &l281);
	if (g0846 != 1) goto L51c7;
	f251d(g3342, &l271, 3);
	goto L51dd;
L51c7:
	f24e9(g3342, &l281, (0 - p18));
L51dd:
	l4 = 0;
	l2 = 0;
L51e7:
	;
#asm
l51e7:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h
#endasm
	goto L530e;
L51f9:
	;
#asm
l51f9:
	db 083h,038h,001h,074h,003h
#endasm
	goto L5308;
L5201:
	l287 = (((l4 / p16) * p14) + p10);
	l289 = ((l4 % p16) + p12);
	f030b(p4, l287, l289);
	f075b((p6 + l2), ((l4 * 15) + l261));
	if (g0846) goto L5286;
	if (p20) goto L5286;
	if (l4) goto L5286;
	f24e9(p4, ((l4 * 15) + l261), (0 - p18));
	goto L52a5;
L5286:
	f251d(p4, ((l4 * 15) + l261), 3);
L52a5:
	*(int *)(l261 + ((l4 << 1) + 225)) = l2;
	f0c16(l4, ((unsigned char)p4[2] + l287), ((unsigned char)p4[3] + l289), (((strlen(((l4 * 15) + l261)) + (unsigned char)p4[2]) + l287) - 1), ((unsigned char)p4[3] + l289));
	l4++;
L5308:
	l2++;
	goto L51e7;
L530e:
	f0c16(l4, 255, 0, 0, 0);
	if (p20 != 1) goto L5382;
	f0c16(l4, ((unsigned char)g3342[2] + l283), ((unsigned char)g3342[3] + l285), (((strlen(&l281) + (unsigned char)g3342[2]) + l283) - 1), ((unsigned char)g3342[3] + l285));
	f0c16((l4 + 1), 255, 0, 0, 0);
L5382:
	l6 = (p20 == 1 ? -1 : 0);
L5391:
	if (g0846) goto L540e;
	if (l6 != -1) goto L53c8;
	f030b(g3342, l283, l285);
	f24e9(g3342, &l281, (0 - p18));
	goto L540e;
L53c8:
	f030b(p4, (((l6 / p16) * p14) + p10), ((l6 % p16) + p12));
	f24e9(p4, ((l6 * 15) + l261), (0 - p18));
L540e:
	l2 = f4c2f(20670, 13720);
	if (g4fc4 != 1) goto L543e;
	l6 = (l2 < l4 ? l2 : -1);
	l2 = 5;
	goto L55df;
L543e:
	switch (l2) {
case 1:
	if (l6 == -1) goto L5482;
	if ((l6 - p16) < 0) goto L5482;
	f512e(p4, l6, p14, p16, p10, p12, ((l6 * 15) + l261));
	l6 -= p16;
L5482:
	goto L55df;
case 2:
	if (l6 == -1) goto L54fd;
	if ((l6 % p16) <= 0) goto L54c8;
	f512e(p4, l6, p14, p16, p10, p12, ((l6 * 15) + l261));
	l6--;
	goto L54fd;
L54c8:
	if (p20 != 1) goto L54fd;
	f512e(p4, l6, p14, p16, p10, p12, ((l6 * 15) + l261));
	l6 = -1;
L54fd:
	goto L55df;
case 3:
	if (l6 == -1) goto L5541;
	if ((l6 + p16) >= l4) goto L5541;
	f512e(p4, l6, p14, p16, p10, p12, ((l6 * 15) + l261));
	l6 += p16;
L5541:
	goto L55df;
case 4:
	if (l6 != -1) goto L5576;
	f030b(g3342, l283, l285);
	f251d(g3342, &l271, 3);
	l6 = 0;
	goto L55bd;
L5576:
	if ((l6 % p16) >= (p16 - 1)) goto L55bd;
	if ((l6 + 1) >= l4) goto L55bd;
	f512e(p4, l6, p14, p16, p10, p12, ((l6 * 15) + l261));
	l6++;
L55bd:
	goto L55df;
	}
L55df:
	if (l2 != 5) goto L5391;
	if (l6 != -1) goto L55f6;
	return -1;
L55f6:
	return *(int *)(l261 + ((l6 << 1) + 225));
}
