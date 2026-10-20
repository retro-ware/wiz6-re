extern char g3648[];
extern char g3649[];
extern char g364a[];
extern char g3732[];
extern char g373c[];
extern char g3746[];
extern char g3750[];
extern char g375b[];
extern char g375c[];
extern char g3813[];
extern char g3816[];
extern char pic_slot_monster[];
f4572(p4, p6)
{
	int l2;
	register int rsi;
	register int rdi;
	for (rsi = 0; (unsigned char)g3816[(314 * p4)] > rsi; rsi++) {
	if (((unsigned)g3813[(314 * p4)] <= 0) || ((unsigned char)g3813[(314 * p4)] == 255)) goto L45bd;
	rdi = ((unsigned char)g3813[(314 * p4)] / 25);
	l2 = ((unsigned char)g3813[(314 * p4)] % 25);
	if ((pic_slot_monster[p4] != 54) || (rsi)) goto L45bb;
	rdi = 0;
	l2 = 0;
L45bb:
	goto L4614;
L45bd:
	rdi = random((unsigned char)g373c[((314 * p4) + rsi)]);
	rdi = (rdi + (unsigned char)g3732[((314 * p4) + rsi)]);
	l2 = (random((unsigned char)g3750[((314 * p4) + rdi)]) + (unsigned char)g3746[((314 * p4) + rdi)]);
L4614:
	g3648[((p6 * 30) + (rsi * 3))] = rdi;
	g3649[((p6 * 30) + (rsi * 3))] = *(char *)&l2;
	g364a[((p6 * 30) + (rsi * 3))] = (char)(random((unsigned char)g375c[((314 * p4) + (l2 << 2))]) + (unsigned char)g375b[((314 * p4) + (l2 << 2))]);
	}
}
