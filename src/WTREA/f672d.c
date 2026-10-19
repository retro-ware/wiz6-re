extern char g50de[];
extern char g51bc[];
extern int g5192;
extern int g5194[];
extern int g51d0;
f672d(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	l4 = 0;
	goto L67a3;
L673a:
	if (g5194[l4]) goto L67a0;
	if (f09e2(100) <= 50) goto L67a0;
	if (f09e2(100) >= p10) goto L679d;
	l8 = f3350(20702, (unsigned char)g51bc[l4]);
	if (l8 < 0) goto L6795;
	g5194[l4] = 1;
	g50de[l8] = 36;
	goto L679d;
L6795:
	g51bc[l4] = 42;
L679d:
	p8--;
L67a0:
	l4++;
L67a3:
	if (l4 >= g51d0) goto L67b2;
	if (p8 > 0) goto L673a;
L67b2:
	if (p8 <= 0) goto L687c;
	l10 = 0;
	l2 = 0;
	goto L67d7;
L67c7:
	if (g50de[l2] == 36) goto L67d4;
	l10++;
L67d4:
	l2++;
L67d7:
	if (strlen(20702) > l2) goto L67c7;
	if (f09e2(100) >= p10) goto L683d;
	if (l10 <= 0) goto L683b;
	if (g51d0 >= 18) goto L683b;
	l4 = f09e2(strlen(20702));
#asm
	db 08bh,05eh,0fch,080h,0bfh,0deh,050h,024h,074h,0e6h,08bh,05eh,0fch,08ah,087h,0deh
	db 050h,08bh,01eh,0d0h,051h,088h,087h,0bch,051h,0d1h,0e3h,0c7h,087h,094h,051h,001h
	db 000h
#endasm
	g51d0++;
	g50de[l4] = 36;
L683b:
	goto L6876;
L683d:
	if (l10 <= 0) goto L6876;
	if (f09e2(100) <= 50) goto L6876;
	if (g51d0 >= 18) goto L6876;
	g51bc[g51d0] = (char)(f09e2(26) + 65);
#asm
	db 0d1h,0e3h,0c7h,087h,094h,051h,000h,000h
#endasm
	g51d0++;
L6876:
	p8--;
	goto L67b2;
L687c:
	f3118(p4);
	f033f(p4, 1, 2, 18, 2);
	f030b(p4, 1, 2);
	if (g5192) goto L68c7;
	f24e9(p4, 20682, 6);
	goto L6907;
L68c7:
	l2 = 0;
	goto L68fe;
L68ce:
	l6 = (g5194[l2] == 1 ? 6 : 12);
	f22b7(p4, (unsigned char)g51bc[l2], l6);
	l2++;
L68fe:
	if (l2 < g51d0) goto L68ce;
L6907:
	f31d1(p4);
	f2b19(p4);
}
