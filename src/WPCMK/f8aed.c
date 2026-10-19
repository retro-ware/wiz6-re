extern char g559c;
extern char g559f;
extern char g560d;
extern char g560f;
extern char g5616;
extern char g5617;
extern int g5488;
extern int g548a;
extern int g548c;
extern int g548e;
extern int g5490;
extern int g5492;
extern long g5478;
f8aed()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	g5616 = 1;
	g5617 = 10;
	g5478 = (long)(f09e2(1000) + 6570);
	l8 = (unsigned char)g559c;
	l10 = (unsigned char)g559f;
	switch ((unsigned char)g560f) {
case 0:
	l2 = (f09e2(5) + 6);
	f8786(4, 0, 0);
	goto L8d43;
case 1:
	l2 = (f09e2(3) + 2);
	f8786(1, 0, 3);
	goto L8d43;
case 2:
	l2 = (f09e2(4) + 4);
	f8786(1, 0, 3);
	goto L8d43;
case 3:
	l2 = (f09e2(4) + 3);
	f8786(1, 2, 1);
	goto L8d43;
case 4:
	l2 = ((f09e2(4) + f09e2(4)) + 6);
	f8786(2, 2, 0);
	goto L8d43;
case 5:
	l2 = (f09e2(4) + 3);
	f8786(0, 1, 3);
	goto L8d43;
case 6:
	l2 = (f09e2(4) + 2);
	f8786(1, 2, 1);
	goto L8d43;
case 7:
	l2 = (f09e2(3) + 3);
	f8786(0, 1, 3);
	goto L8d43;
case 8:
	l2 = (f09e2(5) + 5);
	f8786(3, 1, 0);
	goto L8d43;
case 9:
	l2 = (f09e2(4) + 3);
	f8786(0, 0, 4);
	goto L8d43;
case 10:
	l2 = (f09e2(7) + 8);
	f8786(2, 1, 2);
	goto L8d43;
case 11:
	l2 = ((f09e2(4) + f09e2(4)) + 6);
	f8786(2, 1, 1);
	goto L8d43;
case 12:
	l2 = (f09e2(4) + 4);
	f8786(1, 2, 1);
	goto L8d43;
case 13:
	l2 = (f09e2(5) + 4);
	f8786(2, 2, 1);
	goto L8d43;
	}
L8d43:
	l4 = (((l10 << 1) + l8) * 3);
	l6 = (((l8 << 1) + l10) * 3);
	if (l10 >= 8) goto L8d6e;
	l2--;
L8d6e:
	if (l10 <= 15) goto L8d7d;
	l2++;
	l4 += l10;
L8d7d:
	if (l10 <= 17) goto L8d8c;
	l2++;
	l4 += l10;
L8d8c:
	if (l8 <= 15) goto L8d98;
	l6 += l8;
L8d98:
	if (l8 <= 17) goto L8da4;
	l6 += l8;
L8da4:
	g5488 = l2;
	g548a = g5488;
	g548c = l4;
	g548e = g548c;
	g5490 = 0;
	g5492 = (l6 * 15);
	if (g560d != 5) goto L8ddc;
	g5492 = ((g5492 << 1) / 3);
L8ddc:
	;
}
