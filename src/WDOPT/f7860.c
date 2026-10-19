extern char g00cc[];
extern char g00e2[];
extern char g442c[];
extern char g442e[];
extern char g4594[];
extern char g4595[];
extern int g3342;
extern int g363c;
extern int g4428[];
extern int g4eca;
extern int g4fb0;
extern int g4fb2;
extern int g4fc4;
extern int g502a;
extern int g502c;
extern int g506a;
extern int g51b6;
extern int g51b8;
extern int g51ba[];
extern int g5346[];
f7860(p4)
{
	char x0[6];
	int l8;
	char *l10;
	char *l12;
	int l14;
	int l16;
	int l18;
	char x18[4];
	char l23;
	char x23[39];
	int l64;
	char l65;
	char l66;
	int l68;
	char x68[22];
	int l92;
	char x92[8];
	int l102;
	int l104;
	int l106;
	int l108;
	f075b(2001, 20668);
	g506a = 0;
	f3118(g4fb0);
	l10 = f011a(0, 19, 19, 5, 10, -4, 0, 0);
	f32be(l10, 32, 3, 0);
	l12 = f011a(20, 19, 20, 5, 20, -5, 0, 0);
	f32be(l12, 32, 3, 0);
	f4ca5(((432 * p4) + 17384), &l8);
	f075b(2033, 20588);
	f05c1(20588, &l8, 36);
	f483f(20588, (10 - ((strlen(20588) + 1) / 2)));
	f0a42(g4fb2, 0);
	f3118(l10);
	f030b(l10, 2, 1);
	f083f(2034, l10, 18);
	f31d1(l10);
	f67dc(l12, 0);
	f2a63();
	g51b8 = 0;
	l16 = 0;
	goto L7a47;
L79a6:
	f0882(1, &l92, *(int *)((char *)g4428 + ((432 * p4) + (l16 << 3))), 0);
	strcpy(((l16 << 4) + 20966), &l92);
	if (g00cc[(unsigned char)g442c[((432 * p4) + (l16 << 3))]] != 1) goto L7a24;
	g5346[l16] = (unsigned char)g442e[((432 * p4) + (l16 << 3))];
	goto L7a31;
L7a24:
	g5346[l16] = 0;
L7a31:
	g51ba[g51b8] = l16;
	g51b8++;
	l16++;
L7a47:
	if ((unsigned char)g4594[(432 * p4)] > l16) goto L79a6;
	l16 = 0;
	goto L7b0f;
L7a65:
	l108 = (l16 + 10);
	f0882(1, &l92, *(int *)((char *)g4428 + ((432 * p4) + (l108 << 3))), 0);
	strcpy(((l108 << 4) + 20966), &l92);
	if (g00cc[(unsigned char)g442c[((432 * p4) + (l108 << 3))]] != 1) goto L7aec;
	g5346[l108] = (unsigned char)g442e[((432 * p4) + (l108 << 3))];
	goto L7af9;
L7aec:
	g5346[l108] = 0;
L7af9:
	g51ba[g51b8] = l108;
	g51b8++;
	l16++;
L7b0f:
	if ((unsigned char)g4595[(432 * p4)] > l16) goto L7a65;
	f075b(2035, &l102);
	l16 = 0;
	l18 = 0;
	f0c16(0, ((unsigned char)l12[2] + 2), ((unsigned char)l12[3] + 2), ((unsigned char)l12[2] + 19), ((unsigned char)l12[3] + 2));
	f0c16(1, ((unsigned char)l12[2] + 1), (unsigned char)l12[3], ((unsigned char)l12[2] + 1), (unsigned char)l12[3]);
	f0c16(2, ((unsigned char)l12[2] + 1), ((unsigned char)l12[3] + 4), ((unsigned char)l12[2] + 1), ((unsigned char)l12[3] + 4));
	f0c16(3, ((unsigned char)l10[2] + 7), ((unsigned char)l10[3] + 3), ((strlen(&l102) + (unsigned char)l10[2]) + 6), ((unsigned char)l10[3] + 3));
	f0c16(4, 255, 0, 0, 0);
L7c12:
	if (l18 != 1) goto L7c4f;
	f030b(l10, 7, 3);
	f24e9(l10, &l102, -3);
	f76d5(l12, p4, l16, 0);
	goto L7c84;
L7c4f:
	f030b(l10, 7, 3);
	f251d(l10, &l102, 3);
	f76d5(l12, p4, l16, 1);
L7c84:
	l14 = f4728(20668, 13720);
	if (g4fc4 != 1) goto L7cd3;
	goto L7cbf;
	l14 = 5;
#asm
	db 0ebh,02eh
#endasm
	l14 = 2;
#asm
	db 0ebh,027h
#endasm
	l14 = 4;
#asm
	db 0ebh,020h
#endasm
	l18 = 1;
	l14 = 5;
#asm
	db 0ebh,014h
#endasm
L7cbf:
	;
#asm
l7cbf:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
#endasm
L7cd3:
	switch (l14) {
case 1:
	if (l18 == 1) goto L7ce3;
	l18 = 1;
L7ce3:
	goto L7d3a;
case 2:
	if (l18 != 1) goto L7cf2;
	l18 = 0;
	goto L7cfb;
L7cf2:
	if (l16 <= 0) goto L7cfb;
	l16--;
L7cfb:
	goto L7d3a;
case 3:
	if (l18 != 1) goto L7d08;
	l18 = 0;
L7d08:
	goto L7d3a;
case 4:
	if (l18 != 1) goto L7d17;
	l18 = 0;
	goto L7d24;
L7d17:
	if ((l16 + 1) >= g51b8) goto L7d24;
	l16++;
L7d24:
	goto L7d3a;
	}
L7d3a:
	if (l14 != 5) goto L7c12;
	l16 = g51ba[l16];
	if (l18) goto L7edf;
	if (f6561(p4, l16)) goto L7ed3;
	f0882(1, &l92, *(int *)((char *)g4428 + ((432 * p4) + (l16 << 3))), 0);
	if (!l64) goto L7dfc;
	l106 = (l64 / 256);
	l104 = (l64 % 256);
	if (g00e2[(l104 * 6)] != 1) goto L7dd4;
	f2a63();
	g51b6 = f48e0(2032);
	if (g51b6 != -1) goto L7dd4;
	l104 = -1;
L7dd4:
	if (l104 == -1) goto L7df9;
	f4faf(p4, l16);
	f6054(p4, l104, l106, g51b6);
L7df9:
	goto L7ed1;
L7dfc:
	if (l23 != 4) goto L7ea2;
	if (g363c != l68) goto L7ea2;
	f2881(((l68 * 10) + 20204), (unsigned char)l66, 0);
	f2881(((l68 * 10) + 13304), (unsigned char)l66, 0);
	f2881(((l68 * 10) + 20204), (unsigned char)l65, 1);
	f2881(((l68 * 10) + 13304), (unsigned char)l65, 1);
	f4faf(p4, l16);
	goto L7ed1;
L7ea2:
	if (l23 != 5) goto L7ec5;
	if (g363c != 8) goto L7eb7;
	g4eca = 1;
	goto L7ec3;
L7eb7:
	g502a = 2055;
	g502c = 1;
L7ec3:
	goto L7ed1;
L7ec5:
	g502a = 2046;
	g502c = 1;
L7ed1:
	goto L7edf;
L7ed3:
	f4faf(p4, l16);
L7edf:
	f02d2(l10, 0);
	f02d2(l12, 0);
	f31d1(g4fb0);
	f09fb(g3342, 0);
	f0a42(g4fb2, 0);
	if (g502a <= 0) goto L7f2c;
	f5082(g502a);
L7f2c:
	;
}
