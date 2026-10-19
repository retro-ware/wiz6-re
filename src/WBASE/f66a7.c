extern char g4fd8[];
extern int g0846;
extern int g3342;
extern int g4fb2;
extern int g4fc4;
extern int g4fd2;
extern int g50fa[];
extern int g511a[];
extern int g513a[];
extern int g515a[];
f66a7()
{
	char *l2;
	char *l4;
	int l6;
	int l8;
	int l10;
	int l12;
	char x12[16];
	char l29;
	char l30;
	char l31;
	char x31[411];
	int l444;
	int l446;
	char x446[78];
	int l526;
	char x526[8];
	int l536;
	l8 = 0;
	l6 = 0;
	goto L671b;
L66ba:
	if (g4fd8[l6] != 1) goto L6718;
	f459a(&l444, l6, 0);
	strcpy(((l8 << 3) + 20602), &l444);
	g50fa[l8] = (unsigned char)l30;
	g511a[l8] = (unsigned char)l31;
	g513a[l8] = (unsigned char)l29;
	g515a[l8] = l6;
	l8++;
L6718:
	l6++;
L671b:
	if (l6 < g4fd2) goto L66ba;
	if (l8) goto L6731;
	return -1;
L6731:
	l446 = l8;
	l2 = f011a(0, 19, 19, 5, 10, -4, 0, 0);
	f32be(l2, 32, 3, 0);
	l4 = f011a(20, 19, 20, 5, 20, -5, 0, 0);
	f32be(l4, 32, 3, 0);
	f075b(1201, &l526);
	f6372(&l526, (10 - ((strlen(&l526) + 1) / 2)));
	f0a42(g4fb2, 0);
	f3118(l2);
	f030b(l2, 6, 1);
	f083f(1206, l2, 18);
	f31d1(l2);
	f63f7(l4, 0);
	f2a63();
	f075b(1207, &l536);
	l10 = 0;
	l12 = 0;
	f0c16(0, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 18), ((unsigned char)l4[3] + 2));
	f0c16(1, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	f0c16(2, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	f0c16(3, ((unsigned char)l2[2] + 7), ((unsigned char)l2[3] + 3), ((strlen(&l536) + (unsigned char)l2[2]) + 6), ((unsigned char)l2[3] + 3));
	f0c16(4, 255, 0, 0, 0);
L691a:
	if (g0846) goto L6960;
	if (l12 != 1) goto L6960;
	f030b(l2, 7, 3);
	f24e9(l2, &l536, -5);
	f6475(l4, l10, 0, l446);
	goto L6997;
L6960:
	f030b(l2, 7, 3);
	f251d(l2, &l536, 3);
	f6475(l4, l10, 1, l446);
L6997:
	l6 = f469f(20582, 13720);
	if (g4fc4 != 1) goto L69e6;
	goto L69d2;
	l6 = 5;
#asm
	db 0ebh,02eh
#endasm
	l6 = 2;
#asm
	db 0ebh,027h
#endasm
	l6 = 4;
#asm
	db 0ebh,020h
#endasm
	l12 = 1;
	l6 = 5;
#asm
	db 0ebh,014h
#endasm
L69d2:
	;
#asm
l69d2:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
#endasm
L69e6:
	switch (l6) {
case 1:
	if (l12 == 1) goto L69f6;
	l12 = 1;
L69f6:
	goto L6a4d;
case 2:
	if (l12 != 1) goto L6a05;
	l12 = 0;
	goto L6a0e;
L6a05:
	if (l10 <= 0) goto L6a0e;
	l10--;
L6a0e:
	goto L6a4d;
case 3:
	if (l12 != 1) goto L6a1b;
	l12 = 0;
L6a1b:
	goto L6a4d;
case 4:
	if (l12 != 1) goto L6a2a;
	l12 = 0;
	goto L6a37;
L6a2a:
	if ((l10 + 1) >= l446) goto L6a37;
	l10++;
L6a37:
	goto L6a4d;
	}
L6a4d:
	if (l6 != 5) goto L691a;
	f02d2(l2, 0);
	f02d2(l4, 0);
	f09fb(g3342, 0);
	f0a42(g4fb2, 0);
	if (l12) goto L6a98;
	return l10;
L6a98:
	return -1;
}
