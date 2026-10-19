extern char g4594[];
extern char g4595[];
extern int g0846;
extern int g4fc4;
extern int g567e[];
f5fac(p4, p6, p8, p10, p12)
char *p4;
char *p6;
{
	int l2;
	char x2[2];
	int l6;
	int l8;
	char x8[78];
	int l88;
	char x88[8];
	int l98;
	int l100;
	int l102;
	char x102[74];
	int l178;
	if (p12) goto L5fd9;
	fb1e5(p4, p10);
	l178 = (unsigned char)g4594[(432 * p10)];
	goto L5feb;
L5fd9:
	l178 = (unsigned char)g4595[(432 * p10)];
L5feb:
	f32be(p6, 32, 3, 0);
	f2b19(p6);
	f075b(p8, &l88);
	f075b(401, &l98);
	f030b(p6, 2, 1);
	f251d(p6, &l88, 3);
	p6[6]++;
	l100 = (unsigned char)p6[6];
	l102 = (unsigned char)p6[7];
	if (g0846 != 1) goto L6075;
	f251d(p6, &l98, 3);
	goto L6086;
L6075:
	f24e9(p6, &l98, -5);
L6086:
	l8 = -1;
	l2 = 0;
	goto L6108;
L6092:
	if (p12) goto L60d0;
	f0c16(l2, ((unsigned char)p4[2] + 22), (((unsigned char)p4[3] + l2) + 9), ((unsigned char)p4[2] + 37), (((unsigned char)p4[3] + l2) + 9));
	goto L6105;
L60d0:
	f0c16(l2, ((unsigned char)p4[2] + 2), (((unsigned char)p4[3] + l2) + 3), ((unsigned char)p4[2] + 17), (((unsigned char)p4[3] + l2) + 3));
L6105:
	l2++;
L6108:
	if (l2 < l178) goto L6092;
	f0c16(l178, ((unsigned char)p6[2] + l100), ((unsigned char)p6[3] + l102), (((strlen(&l98) + (unsigned char)p6[2]) + l100) - 1), ((unsigned char)p6[3] + l102));
	f0c16((l178 + 1), 255, 0, 0, 0);
L6167:
	if (g0846) goto L61fb;
	if (l8 != -1) goto L6199;
	f030b(p6, l100, l102);
	f24e9(p6, &l98, -5);
	goto L61fb;
L6199:
	if (p12) goto L61ce;
	f030b(p4, 22, (l8 + 9));
	f24e9(p4, ((l8 << 4) + 21982), -5);
	goto L61fb;
L61ce:
	f030b(p4, 2, (l8 + 3));
	f24e9(p4, ((l8 << 4) + 22162), -5);
L61fb:
	l6 = f8891(21822, 13720);
	if (g4fc4 != 1) goto L622c;
	l8 = (l6 < l178 ? l6 : -1);
	l6 = 5;
	goto L62f5;
L622c:
	switch (l6) {
case 2:
	if (l8 != -1) goto L625f;
	f030b(p6, l100, l102);
	f251d(p6, &l98, 3);
	l8 = 0;
	goto L6289;
L625f:
	fd331(p4, l8, g567e[l8], p12);
	if ((l8 - 1) < 0) goto L6284;
	l8--;
	goto L6289;
L6284:
	l8 = -1;
L6289:
	goto L62f5;
case 4:
	if (l8 != -1) goto L62b8;
	f030b(p6, l100, l102);
	f251d(p6, &l98, 3);
	l8 = 0;
	goto L62e6;
L62b8:
	fd331(p4, l8, g567e[l8], p12);
	if ((l8 + 1) >= l178) goto L62e1;
	l8++;
	goto L62e6;
L62e1:
	l8 = -1;
L62e6:
	goto L62f5;
	}
L62f5:
	if (l6 != 5) goto L6167;
	if (p12) goto L6310;
	fb1e5(p4, p10);
L6310:
	return l8;
}
