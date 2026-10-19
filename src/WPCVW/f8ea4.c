extern int g0002;
extern int g3042;
f8ea4(p4, p6)
{
	int l2;
	int l4;
	int l6;
	int l8;
	char *l10;
	l8 = f011a(0, 4, 40, 16, 31, -1, 0, 0);
	f8dd4(l8);
	l2 = 1;
	l4 = 1;
	l6 = 1;
L8ee4:
	f075b(p6, 21902);
	if (g3042) goto L8f9d;
	l10 = 21902;
	if (*l10 != 33) goto L8f0e;
	l10++;
	l2++;
L8f0e:
	if (*l10 != 64) goto L8f1e;
	l10++;
	l2 = 13;
L8f1e:
	if (l2 != 13) goto L8f37;
	f8d3a(p4);
	f8dd4(l8);
	l2 = 1;
L8f37:
	l2++;
	l4 = (20 - ((strlen(l10) + 1) / 2));
	if (*l10 != 36) goto L8f64;
	l10++;
	l4 = 1;
	goto L8f75;
L8f64:
	if (*l10 != 94) goto L8f75;
	l10++;
	l4 = l6;
L8f75:
	f030b(l8, l4, l2);
	f24e9(l8, l10, g0002);
	l6 = l4;
	p6++;
L8f9d:
	if (!g3042) goto L8ee4;
	f8d3a(p4);
	f02d2(l8, 0);
}
