#asm
	extrn f2881_:near
#endasm
extern char g00de[];
extern char g00df[];
extern char g00e0[];
extern char g00e3[];
extern char g4500[];
extern char g451c[];
extern char g4587[];
extern int g4410[];
extern int g4412[];
extern int g553c;
f8353(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	char x12[14];
	int l28;
	int l40[6];
	switch (p10) {
case 0:
	l10 = 8;
	l12 = 28;
	goto L83a2;
case 1:
	l10 = 4;
	l12 = 26;
	goto L83a2;
case 3:
	l10 = 2;
	l12 = 27;
	goto L83a2;
case 2:
	l10 = 1;
	l12 = 25;
	goto L83a2;
	}
L83a2:
	movmem(((432 * p8) + 17776), &l28, 12);
	setmem(((432 * p8) + 17776), 12, 0);
	l8 = (((unsigned char)g451c[((432 * p8) + l12)] / 18) + 1);
	if ((unsigned)g451c[((432 * p8) + l12)] < 98) goto L83f9;
	l8 = 7;
L83f9:
	l4 = 0;
	l2 = 0;
L8403:
	if (!(l10 & (unsigned char)g00e3[(l2 * 6)])) goto L8451;
	if ((unsigned char)g00df[(l2 * 6)] > l8) goto L8451;
	if (f28af(&l28, l2)) goto L8451;
	f2881(((432 * p8) + 17776), l2, 1);
	l4++;
L8451:
	l2++;
	if (l2 < 82) goto L8403;
	if (l4) goto L848e;
	g4500[((432 * p8) + p10)] = 0;
	movmem(&l28, ((432 * p8) + 17776), 12);
	return;
L848e:
	f32be(p6, 32, 3, 0);
	f2b19(p6);
	f075b(702, 21902);
	f075b(((unsigned char)g4587[(432 * p8)] + 120), 22416);
	f05c1(21902, 22416, 36);
	fe8b6(p6, 21902, 1);
	f32be(p6, 32, 3, 0);
	f3118(p6);
	f030b(p6, 1, 1);
	f083f(703, p6, 18);
	f31d1(p6);
	l2 = 0;
L853e:
	l40[l2] = *(int *)((char *)g4410 + ((432 * p8) + (l2 << 2)));
	*(int *)((char *)g4410 + ((432 * p8) + (l2 << 2))) = 999;
	l2++;
	if (l2 < 6) goto L853e;
L8581:
	l6 = f780a(p4, p6, p8, 0);
	if (l6 != -1) goto L859e;
	goto L8581;
L859e:
	g553c = -1;
	movmem(&l28, ((432 * p8) + 17776), 12);
	l2 = 0;
L85c1:
	*(int *)((char *)g4410 + ((432 * p8) + (l2 << 2))) = l40[l2];
	l2++;
	if (l2 < 6) goto L85c1;
#asm
	db 0b8h,001h,000h,050h,0ffh,076h,0fah,0b8h,0b0h,001h,0f7h,06eh,008h,005h,070h,045h
	db 050h
	call f2881_
	db 083h,0c4h,006h
#endasm
	l2 = ((f09e2(((unsigned char)g451c[((432 * p8) + l12)] / 20)) + ((unsigned char)g00df[(l6 * 6)] << 1)) + 1);
	l4 = (unsigned char)g00de[(l6 * 6)];
	if ((*(int *)((char *)g4412 + ((432 * p8) + (l4 << 2))) + l2) >= (unsigned char)g00e0[(l6 * 6)]) goto L8699;
	l2 = ((unsigned char)g00e0[(l6 * 6)] - *(int *)((char *)g4412 + ((432 * p8) + (l4 << 2))));
L8699:
	*(int *)((char *)g4412 + ((432 * p8) + (l4 << 2))) += l2;
	*(int *)((char *)g4410 + ((432 * p8) + (l4 << 2))) += l2;
	g4500[((432 * p8) + p10)]--;
	f53fa(p4, p8);
	return;
}
