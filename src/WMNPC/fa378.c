extern char *g3342;
extern int g4fb2;
extern int g4fc4;
extern int g54b2;
fa378(p4, p6, p8)
char *p4;
{
	int l2;
	int l4;
	char x4[8];
	int l14;
	char x14[8];
	int l24;
	int l26;
	int l28;
	l26 = 12;
	l28 = 0;
	f3118(g3342);
	f09fb(g3342, 0);
	f075b(1509, 20948);
	f030b(g3342, 2, 0);
	f251d(g3342, 20948, 3);
	f31d1(g3342);
	f2b19(g3342);
	f2b19(g4fb2);
	f075b(1506, &l14);
	f075b(1507, &l24);
	fa206();
	if (g54b2 > 0) goto La415;
	return -1;
La415:
	if (p8 < g54b2) goto La425;
	p8 = (g54b2 - 1);
La425:
	l4 = 0;
	f0c16(0, ((unsigned char)p4[2] + 2), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + 16), ((unsigned char)p4[3] + 2));
	f0c16(1, ((unsigned char)p4[2] + 1), (unsigned char)p4[3], ((unsigned char)p4[2] + 1), (unsigned char)p4[3]);
	f0c16(2, ((unsigned char)p4[2] + 1), ((unsigned char)p4[3] + 4), ((unsigned char)p4[2] + 1), ((unsigned char)p4[3] + 4));
	f0c16(3, ((unsigned char)g3342[2] + l26), ((unsigned char)g3342[3] + l28), (((strlen(&l14) + (unsigned char)g3342[2]) + l26) - 1), ((unsigned char)g3342[3] + l28));
	f0c16(4, 255, 0, 0, 0);
La502:
	if (l4 != 1) goto La53f;
	f030b(g3342, l26, l28);
	f24e9(g3342, &l24, -3);
	f9fcf(p4, p6, p8, 0);
	goto La574;
La53f:
	f030b(g3342, l26, l28);
	f251d(g3342, &l14, 3);
	f9fcf(p4, p6, p8, 1);
La574:
	l2 = f5994(21098, 13720);
	if (g4fc4 != 1) goto La5c3;
	goto La5af;
	l2 = 5;
#asm
	db 0ebh,02eh
#endasm
	l2 = 2;
#asm
	db 0ebh,027h
#endasm
	l2 = 4;
#asm
	db 0ebh,020h
#endasm
	l4 = 1;
	l2 = 5;
#asm
	db 0ebh,014h
#endasm
La5af:
	;
#asm
la5af:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
#endasm
La5c3:
	switch (l2) {
case 1:
	if (l4 == 1) goto La5d3;
	l4 = 1;
La5d3:
	goto La62a;
case 2:
	if (l4 != 1) goto La5e2;
	l4 = 0;
	goto La5eb;
La5e2:
	if (p8 <= 0) goto La5eb;
	p8--;
La5eb:
	goto La62a;
case 3:
	if (l4 != 1) goto La5f8;
	l4 = 0;
La5f8:
	goto La62a;
case 4:
	if (l4 != 1) goto La607;
	l4 = 0;
	goto La614;
La607:
	if ((p8 + 1) >= g54b2) goto La614;
	p8++;
La614:
	goto La62a;
	}
La62a:
	if (l2 != 5) goto La502;
	if (l4 != 1) goto La63f;
	return -1;
La63f:
	return p8;
}
