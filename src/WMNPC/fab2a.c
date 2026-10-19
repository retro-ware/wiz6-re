extern char g442f[];
extern char g4550[];
extern char g51cf;
extern int g43fc[];
extern int g4428[];
extern int g51bc;
extern int g51be;
extern int g5274;
extern int g527a;
extern long g51c0;
fab2a(p4, p6)
char *p4;
{
	int l2;
	int l4;
	int l6;
	int l8;
	char x8[5];
	char l14;
	char x14[7];
	int l23;
	int l25;
	int l27;
	char l31[4];
	char x31[14];
	char l46;
	char x46[39];
	long l89;
	char x89[14];
	int l105;
	char x105[1];
	l4 = 0;
Lab35:
	f32be(p4, 32, 3, 0);
	f3118(p4);
	f030b(p4, 5, 1);
	f083f(1581, p4, 18);
	f030b(p4, 2, 3);
	f083f(1582, p4, 18);
	l25 = (unsigned char)p4[6];
	l27 = (unsigned char)p4[7];
	setmem(&l23, 9, 32);
	l14 = 0;
	f24e9(p4, &l23, 1);
	f31d1(p4);
	f2a63();
	f030b(p4, l25, l27);
	f57ac(p4, &l23, 8, 5, 1);
	*(int *)(l31 + (0 + 2)) = 0;
	*(int *)(l31 + 0) = 0;
	if (!*(char *)&l23) goto Laceb;
	*(long *)(l31 + 0) = (long)atol(&l23);
	if (*(long *)(l31 + 0) < 0L) goto Lacd9;
	if (*(long *)((char *)g43fc + (432 * p6)) < *(long *)(l31 + 0)) goto Lacd9;
	*(long *)((char *)g43fc + (432 * p6)) -= *(long *)(l31 + 0);
	g51c0 += *(long *)(l31 + 0);
	l2 = (int)((long)g4550[((432 * p6) + g5274)] + ((*(long *)(l31 + 0) / 10L) / (long)(unsigned char)g51cf));
	if (l2 <= 100) goto Lacc0;
	l2 = 100;
Lacc0:
	g4550[((432 * p6) + g5274)] = *(char *)&l2;
	goto Laceb;
Lacd9:
	*(int *)(l31 + (0 + 2)) = -1;
	*(int *)(l31 + 0) = -1;
	f0aaa(0);
Laceb:
	if (*(long *)(l31 + 0) != -1L) goto Lacfa;
	goto Lab35;
Lacfa:
	f5078(p6, g527a);
	f7f76(p6, 2, (int)(*(long *)(l31 + 0) / 256L), (unsigned char)((int)(*(long *)(l31 + 0) % 256L)), 0);
	l6 = f9a42(p4, p6, 1580, 0);
	if (l6 == -1) goto Lae70;
	if (!((unsigned char)g442f[((432 * p6) + (l6 << 3))] & 1)) goto Lad83;
	fa645(1528);
	return;
Lad83:
	l8 = *(int *)((char *)g4428 + ((432 * p6) + (l6 << 3)));
	f0882(1, &l105, l8, 0);
	if (!((unsigned char)l46 & 2)) goto Ladd5;
	if (l8 == g51bc) goto Ladd5;
	if (l8 == g51be) goto Ladd5;
	fa645(1529);
	return;
Ladd5:
	l2 = (int)((long)g4550[((432 * p6) + g5274)] + ((l89 / 20L) / (long)(unsigned char)g51cf));
	if (l2 <= 100) goto Lae20;
	l2 = 100;
Lae20:
	g4550[((432 * p6) + g5274)] = *(char *)&l2;
	f6835(p6, l6);
	f5078(p6, g527a);
	fa645(1504);
	l4 = f7f76(p6, 1, l8, 0, 0);
Lae70:
	return l4;
}
