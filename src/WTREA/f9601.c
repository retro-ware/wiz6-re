extern char g00cc[];
extern char g4589[];
extern char g506d[];
extern int g363a;
extern int g43c4;
extern int g43ce;
extern int g43f4[];
extern int g43fc[];
extern int g4fb6;
extern int g4fce;
extern int g501e;
extern int g50c8;
extern int g51d6[];
extern int g51e2[];
extern int g525a[];
extern int g5266;
extern int g5268[];
extern int g5274[];
f9601()
{
	int l2;
	int l4;
	char l5;
	char l44[39];
	char x44[12];
	char l57;
	char l58;
	char l59;
	char x59[27];
	int l88;
	char x88[6];
	int l96;
	int l98;
	char x98[18];
	int l118;
	int l120;
	char l128[8];
	int l130;
	char x130[18];
	int l150;
	char x150[4];
	f0882(7, l44, g43c4, 0);
	g43c4 = -1;
	if ((unsigned)l5 <= 0) goto L964f;
	g50c8 = 1;
	if (f9105(l44) != -1) goto L9641;
	return;
L9641:
	f02f0(g4fb6, 0);
L964f:
	if (g4fce != 21) goto L9659;
	f8f81();
L9659:
	f2a63();
	*(int *)(l128 + (0 + 6)) = 0;
	*(int *)(l128 + (0 + 4)) = 0;
	*(int *)(l128 + (0 + 2)) = 0;
	*(int *)(l128 + 0) = 0;
	g5266 = 0;
	l2 = 0;
L967b:
	if (f09e2(100) >= (unsigned char)l44[((l2 * 6) + 5)]) goto L9763;
	switch ((unsigned char)l44[((l2 * 6) + 4)]) {
case 1:
	l130 = (f09e2((*(int *)(l44 + (l2 * 6)) - *(int *)(l44 + ((l2 * 6) + 2)))) + *(int *)(l44 + ((l2 * 6) + 2)));
	*(long *)(l128 + (0 + 4)) += (long)l130;
	goto L9763;
case 4:
	;
#asm
l96ed:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh
	db 047h,0d4h,08bh,04fh,0d6h,08bh,0d9h,0f7h,0ebh,001h,046h,080h,011h,056h,082h,0ebh
	db 055h
#endasm
case 2:
	g51d6[g5266] = (f09e2(*(int *)(l44 + ((l2 * 6) + 2))) + *(int *)(l44 + (l2 * 6)));
	if (g51d6[g5266] <= 0) goto L974f;
	g5266++;
L974f:
	goto L9763;
	}
L9763:
	l2++;
	if (l2 < 6) goto L967b;
	l120 = 0;
	l2 = 0;
	goto L9792;
L977d:
	if (g4589[(432 * l2)]) goto L978f;
	l120++;
L978f:
	l2++;
L9792:
	if (l2 < g43ce) goto L977d;
	if (l120) goto L97aa;
	g363a = 8;
	return;
L97aa:
	*(long *)(l128 + (0 + 4)) = (*(long *)(l128 + (0 + 4)) / (long)l120);
	l2 = 0;
	goto L999a;
L97cd:
	f075b(5004, 20590);
	f075b(5005, ((l2 * 18) + 20974));
	if (g51d6[l2] <= 0) goto L98f5;
	f0882(1, &l118, g51d6[l2], 0);
	f05c1(((l2 * 18) + 20974), &l118, 94);
	if (g00cc[(unsigned char)l58] != 1) goto L9865;
	g51e2[l2] = (unsigned char)(f5a98(l98, l96));
	goto L9872;
L9865:
	g51e2[l2] = 1;
L9872:
	g5268[l2] = (g51e2[l2] * l88);
	g525a[l2] = (unsigned char)l57;
	g5274[l2] = (((unsigned char)l59 & 2) ? 1 : 0);
	switch ((unsigned char)l58) {
case 12:
	f075b(5006, &l150);
	goto L98f5;
case 13:
	f075b(5007, &l150);
	goto L98f5;
case 16:
	f075b(5008, &l150);
	goto L98f5;
default:
	*(char *)&l150 = 0;
	goto L98f5;
	}
L98f5:
	f04f1(g51e2[l2], 20802);
	f05c1(((l2 * 18) + 20974), 20802, 36);
	f05c1(20590, ((l2 * 18) + 20974), 37);
	f05c1(20590, &l150, 64);
	l4 = strlen(20590);
L9966:
	if (l4 <= 0) goto L9980;
	if (g506d[l4] != 32) goto L9980;
	g506d[l4] = 0;
	l4--;
	goto L9966;
L9980:
	f59e9(g4fb6, g50c8, 20590, 1, 1);
	l2++;
L999a:
	if (l2 < g5266) goto L97cd;
	if (*(long *)(l128 + (0 + 4)) <= 0L) goto L9a00;
	f075b(5002, 20590);
	f0453(*(int *)(l128 + (0 + 4)), *(int *)(l128 + (0 + 6)), 20722);
	f05c1(20590, 20722, 36);
	f59e9(g4fb6, g50c8, 20590, 0, 5);
L9a00:
	if (*(long *)(l128 + 0) <= 0L) goto L9a5a;
	f075b(5003, 20590);
	f0453(*(int *)(l128 + 0), *(int *)(l128 + (0 + 2)), 20722);
	f05c1(20590, 20722, 36);
	f59e9(g4fb6, g50c8, 20590, 1, 4);
L9a5a:
	l2 = 0;
	goto L9a8f;
L9a61:
	if (g4589[(432 * l2)]) goto L9a8c;
	*(long *)((char *)g43f4 + (432 * l2)) += *(long *)(l128 + 0);
	*(long *)((char *)g43fc + (432 * l2)) += *(long *)(l128 + (0 + 4));
L9a8c:
	l2++;
L9a8f:
	if (l2 < g43ce) goto L9a61;
	if (g5266 <= 0) goto L9aa2;
	f8952();
L9aa2:
	g501e = 0;
	f4811();
	f48df(2);
	return;
}
