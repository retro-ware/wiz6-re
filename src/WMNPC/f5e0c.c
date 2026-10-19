extern char *g3342;
extern int g0846;
extern int g4fc4;
f5e0c(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
char *p4;
{
	int l2;
	int l4;
	char l259[255];
	char x259[8];
	int l269;
	char x269[8];
	int l279;
	int l281;
	int l283;
	int l285;
	int l287;
	char x287[1];
	register int rsi;
	if (p20 != 1) goto L5e80;
	l281 = (unsigned char)g3342[6];
	l283 = (unsigned char)g3342[7];
	f075b(2027, &l269);
	f075b(2028, &l279);
	if (g0846 != 1) goto L5e6a;
	f251d(g3342, &l269, 3);
	goto L5e80;
L5e6a:
	f24e9(g3342, &l279, (0 - p18));
L5e80:
	l4 = 0;
	l2 = 0;
L5e8a:
	;
#asm
l5e8a:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h
#endasm
	goto L5fb3;
L5e9c:
	;
#asm
l5e9c:
	db 083h,038h,001h,074h,003h
#endasm
	goto L5fad;
L5ea4:
	l285 = (((l4 / p16) * p14) + p10);
	l287 = ((l4 % p16) + p12);
	f030b(p4, l285, l287);
	f075b((p6 + l2), ((l4 * 15) + l259));
	if (g0846) goto L5f2b;
	if (p20) goto L5f2b;
	if (l4 != p22) goto L5f2b;
	f24e9(p4, ((l4 * 15) + l259), (0 - p18));
	goto L5f4a;
L5f2b:
	f251d(p4, ((l4 * 15) + l259), 3);
L5f4a:
	*(int *)(l259 + ((l4 << 1) + 225)) = l2;
	f0c16(l4, ((unsigned char)p4[2] + l285), ((unsigned char)p4[3] + l287), (((strlen(((l4 * 15) + l259)) + (unsigned char)p4[2]) + l285) - 1), ((unsigned char)p4[3] + l287));
	l4++;
L5fad:
	l2++;
	goto L5e8a;
L5fb3:
	f0c16(l4, 255, 0, 0, 0);
	if (p20 != 1) goto L6027;
	f0c16(l4, ((unsigned char)g3342[2] + l281), ((unsigned char)g3342[3] + l283), (((strlen(&l279) + (unsigned char)g3342[2]) + l281) - 1), ((unsigned char)g3342[3] + l283));
	f0c16((l4 + 1), 255, 0, 0, 0);
L6027:
	p22 = (p20 == 1 ? -1 : p22);
L6036:
	if (g0846) goto L60b3;
	if (p22 != -1) goto L606d;
	f030b(g3342, l281, l283);
	f24e9(g3342, &l279, (0 - p18));
	goto L60b3;
L606d:
	f030b(p4, (((p22 / p16) * p14) + p10), ((p22 % p16) + p12));
	f24e9(p4, ((p22 * 15) + l259), (0 - p18));
L60b3:
	l2 = f5994(21098, 13720);
	if (g4fc4 != 1) goto L60e3;
	p22 = (l2 < l4 ? l2 : -1);
	l2 = 5;
	goto L6284;
L60e3:
	switch (l2) {
case 1:
	if (p22 == -1) goto L6127;
	if ((p22 - p16) < 0) goto L6127;
	f5dd1(p4, p22, p14, p16, p10, p12, ((p22 * 15) + l259));
	p22 -= p16;
L6127:
	goto L6284;
case 2:
	if (p22 == -1) goto L61a2;
	if ((p22 % p16) <= 0) goto L616d;
	f5dd1(p4, p22, p14, p16, p10, p12, ((p22 * 15) + l259));
	p22--;
	goto L61a2;
L616d:
	if (p20 != 1) goto L61a2;
	f5dd1(p4, p22, p14, p16, p10, p12, ((p22 * 15) + l259));
	p22 = -1;
L61a2:
	goto L6284;
case 3:
	if (p22 == -1) goto L61e6;
	if ((p22 + p16) >= l4) goto L61e6;
	f5dd1(p4, p22, p14, p16, p10, p12, ((p22 * 15) + l259));
	p22 += p16;
L61e6:
	goto L6284;
case 4:
	if (p22 != -1) goto L621b;
	f030b(g3342, l281, l283);
	f251d(g3342, &l269, 3);
	p22 = 0;
	goto L6262;
L621b:
	if ((p22 % p16) >= (p16 - 1)) goto L6262;
	if ((p22 + 1) >= l4) goto L6262;
	f5dd1(p4, p22, p14, p16, p10, p12, ((p22 * 15) + l259));
	p22++;
L6262:
	goto L6284;
	}
L6284:
	if (l2 != 5) goto L6036;
	if (p22 != -1) goto L629b;
	return -1;
L629b:
	return *(int *)(l259 + ((p22 << 1) + 225));
}
