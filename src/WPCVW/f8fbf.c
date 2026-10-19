extern char g00df[];
extern char g00e2[];
extern char g4587[];
extern int g363c;
extern int g440c[];
extern int g4428[];
extern int g4eca;
extern int g578e;
f8fbf(p4, p6, p8, p10)
{
	char x0[4];
	char l5;
	char x5[13];
	int l20;
	char x20[24];
	int l46;
	char l47;
	char l48;
	int l50;
	char x50[6];
	int l58;
	char x58[14];
	int l74;
	int l76;
	int l78;
	int l80;
	f0882(1, &l74, *(int *)((char *)g4428 + ((432 * p8) + (p10 << 3))), 0);
	if ((unsigned)l5 <= 0) goto L922b;
	switch ((unsigned char)l5) {
case 1:
	l80 = f5fac(p4, p6, 408, p8, 0);
	if (*(int *)((char *)g4428 + ((432 * p8) + (l80 << 3))) != 395) goto L9043;
	f8ea4(p6, 11350);
	goto L906b;
L9043:
	if (*(int *)((char *)g4428 + ((432 * p8) + (l80 << 3))) != 403) goto L906b;
	f8ea4(p6, 12200);
L906b:
	goto L9229;
case 2:
	f8ea4(p6, l58);
	goto L9229;
case 3:
	if (f28af(&l20, (unsigned char)g4587[(432 * p8)]) != 1) goto L910e;
	l76 = (l46 % 256);
	if (((unsigned char)g00df[(l76 * 6)] << 1) <= *(int *)((char *)g440c + (432 * p8))) goto L90dc;
	f8ea4(p6, 725);
	goto L910c;
L90dc:
	f2881(((432 * p8) + 17776), l76, 1);
	f8ea4(p6, 720);
	f5d5b(p8, p10);
L910c:
	goto L911b;
L910e:
	f8ea4(p6, 730);
L911b:
	goto L9229;
case 4:
	if (g363c != l50) goto L91b9;
	f2881(((l50 * 10) + 20204), (unsigned char)l48, 0);
	f2881(((l50 * 10) + 13304), (unsigned char)l48, 0);
	f2881(((l50 * 10) + 20204), (unsigned char)l47, 1);
	f2881(((l50 * 10) + 13304), (unsigned char)l47, 1);
	f5f53(p8, p10);
L91b9:
	goto L9229;
case 5:
	if (g363c != 8) goto L91c8;
	g4eca = 1;
L91c8:
	goto L9229;
case 6:
	l80 = f5fac(p4, p6, 408, p8, 0);
	if (*(int *)((char *)g4428 + ((432 * p8) + (l80 << 3))) != 388) goto L920c;
	f8ea4(p6, 18520);
L920c:
	goto L9229;
	}
L9229:
	goto L9298;
L922b:
	if (!l46) goto L9298;
	l78 = (l46 / 256);
	l76 = (l46 % 256);
	if (g00e2[(l76 * 6)] != 1) goto L9273;
	g578e = f897d(p4, p6, 504, -1);
	if (g578e != -1) goto L9273;
	return;
L9273:
	f6b3c(p8, l76, l78, g578e, p4, p6);
	f5f53(p8, p10);
L9298:
	return;
}
