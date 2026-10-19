extern char g3648[];
extern char g3649[];
extern char g364a[];
extern char g3732[];
extern char g373c[];
extern char g3746[];
extern char g3750[];
extern char g375a[];
extern char g375b[];
extern char g375c[];
extern char g3816[];
extern char pic_slot_monster[];
extern int g50de[];
extern int g5142;
f46b8(p4, p6, p8)
char *p8;
{
	int l2;
	int l4;
	int l6;
	register int rsi;
	register int rdi;
	l6 = 0;
	rsi = 0;
	goto L48c5;
L46cb:
	l2 = (unsigned char)g3649[((p6 * 30) + (rsi * 3))];
	l4 = (unsigned char)g364a[((p6 * 30) + (rsi * 3))];
	l4--;
#asm
	db 07eh,003h
#endasm
	goto L4818;
L4702:
	;
#asm
l4702:
	db 08ah,087h,048h,036h,02ah,0e4h,08bh,0f8h,0ffh,046h,0feh
#endasm
	if ((((unsigned char)g3746[((314 * p4) + rdi)] + (unsigned char)g3750[((314 * p4) + rdi)]) - 1) >= l2) goto L47b6;
	if (*(int *)((char *)g50de + ((p4 * 10) + (p6 << 1))) <= 0) goto L4755;
	rdi = *(int *)((char *)g50de + ((p4 * 10) + (p6 << 1)));
	goto L477e;
L4755:
	rdi = random((unsigned char)g373c[((314 * p4) + rsi)]);
	rdi = (rdi + (unsigned char)g3732[((314 * p4) + rsi)]);
L477e:
	g3648[((p6 * 30) + (rsi * 3))] = rdi;
	l2 = (unsigned char)g3746[((314 * p4) + rdi)];
L47b6:
	g3649[((p6 * 30) + (rsi * 3))] = *(char *)&l2;
	l4 = (random((unsigned char)g375c[((314 * p4) + (l2 << 2))]) + (unsigned char)g375b[((314 * p4) + (l2 << 2))]);
L4818:
	g364a[((p6 * 30) + (rsi * 3))] = *(char *)&l4;
	*(p8 + l6) = g375a[((314 * p4) + (l2 << 2))];
	switch ((unsigned char)pic_slot_monster[p4]) {
case 40:
	if (rsi != 4) goto L4890;
	if (g5142 != 1) goto L4885;
	*(p8 + l6) = (char)((p8 + l6)[-65537] + 5);
	goto L4890;
L4885:
	*(p8 + l6) = 0;
L4890:
	goto L48b4;
case 54:
	if (rsi) goto L48a8;
	if (g5142 != 1) goto L48a8;
	*(p8 + l6) = 0;
L48a8:
	goto L48b4;
	}
L48b4:
	if (!*(p8 + l6)) goto L48c4;
	l6++;
L48c4:
	rsi++;
L48c5:
	if ((unsigned char)g3816[(314 * p4)] > rsi) goto L46cb;
	*(p8 + l6) = 0;
}
