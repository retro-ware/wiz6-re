extern char g00b0[];
extern char g36e4[];
extern char g3717[];
extern char g3759[];
extern char g37fa[];
extern char g37fb[];
extern char g3810[];
extern char g3813[];
extern char g3814[];
extern char g3815[];
extern char g433e[];
extern char g4348[];
extern int view_pos_group[];
f49db(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	int l8;
	char l20[12];
	int l22;
	int l24;
	int l26;
	int l28;
	l20[0] = 0;
	if ((l2 = *(int *)((char *)view_pos_group + ((p4 * 10) + (p6 << 1))))) goto L4a0a;
L4a06:
	return;
L4a0a:
	l6 = 72;
	l8 = 248;
	if (p4) goto L4a2c;
	f46b8(l2, p6, l20);
	goto L4a3f;
L4a2c:
	l20[0] = g3810[(314 * l2)];
	l20[(0 + 1)] = 0;
L4a3f:
	if (l20[0]) goto L4a47;
	return;
L4a47:
	l4 = (p6 % 2);
	if (random(10) != 9) goto L4ab6;
	g4348[((p4 * 5) + p6)] = (char)random((unsigned char)g3814[(314 * l2)]);
	g433e[((p4 * 5) + p6)] = (char)random((unsigned char)g3815[(314 * l2)]);
L4ab6:
	l22 = (unsigned char)l20[0];
	l26 = (unsigned char)g36e4[(((314 * l2) + (l4 % 2)) + (l22 << 1))];
	if (!g3813[(314 * l2)]) goto L4af9;
	p8 = 0;
L4af9:
	l24 = (unsigned char)g3759[((314 * l2) + (l22 << 2))];
#asm
	db 083h,07eh,0e8h,000h,075h,019h
#endasm
	l24 = (unsigned char)g00b0[((p4 * 5) + p6)];
	if ((l28 = (((g37fa[(((314 * l2) + (p4 * 10)) + (p6 << 1))] + (unsigned char)g4348[((p4 * 5) + p6)]) + p8) + l26)) >= 0) goto L4b84;
	l28 = 0;
	goto L4b8f;
L4b84:
	if (l28 >= l8) goto L4a06;
L4b8f:
	f48eb(l24, l2, l28, ((g37fb[(((314 * l2) + (p4 * 10)) + (p6 << 1))] + (unsigned char)g433e[((p4 * 5) + p6)]) + (unsigned char)g3717[((314 * l2) + l22)]), l6, l8, l4, l20);
	return;
}
