extern char g4fd8[];
extern char g560d;
extern char g560e;
extern char g560f;
extern int g4fc4;
extern int g4fd2;
extern int g5750[];
extern int g5770[];
extern int g5790[];
extern int g57b0[];
f9c04(p4, p6, p8)
char *p4;
char *p6;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[8];
	int l20;
	l4 = 0;
	l2 = 0;
	goto L9c75;
L9c16:
	if (g4fd8[l2] != 1) goto L9c72;
	f457f(21616, l2, 0);
	strcpy(((l4 << 3) + 22224), 21616);
	g5750[l4] = (unsigned char)g560e;
	g5770[l4] = (unsigned char)g560d;
	g5790[l4] = (unsigned char)g560f;
	g57b0[l4] = l2;
	l4++;
L9c72:
	l2++;
L9c75:
	if (l2 < g4fd2) goto L9c16;
	if (l4 >= 1) goto L9c88;
	return;
L9c88:
	l10 = l4;
	f32be(p4, 32, 3, 0);
	f32be(p6, 32, 3, 0);
	f3118(p4);
	f075b(p8, 22048);
	f030b(p4, (20 - ((strlen(22048) + 1) / 2)), 1);
	f251d(p4, 22048, 3);
	f31d1(p4);
	f619b(p6, 0);
	f2a63();
	f075b(1124, &l20);
	l6 = 0;
	l8 = 0;
	f0c16(0, ((unsigned char)p6[2] + 1), ((unsigned char)p6[3] + 3), ((unsigned char)p6[2] + 19), ((unsigned char)p6[3] + 3));
	f0c16(1, (unsigned char)p6[2], (unsigned char)p6[3], (unsigned char)p6[2], (unsigned char)p6[3]);
	f0c16(2, (unsigned char)p6[2], ((unsigned char)p6[3] + 6), (unsigned char)p6[2], ((unsigned char)p6[3] + 6));
	f0c16(3, ((unsigned char)p4[2] + 17), ((unsigned char)p4[3] + 3), ((strlen(&l20) + (unsigned char)p4[2]) + 16), ((unsigned char)p4[3] + 3));
	f0c16(4, 255, 0, 0, 0);
L9e02:
	if (l8 != 1) goto L9e3f;
	f030b(p4, 17, 3);
	f24e9(p4, &l20, -5);
	f99d1(p6, l6, 0, l10);
	goto L9e74;
L9e3f:
	f030b(p4, 17, 3);
	f251d(p4, &l20, 3);
	f99d1(p6, l6, 1, l10);
L9e74:
	l2 = f45fc(21534, 13720);
	if (g4fc4 != 1) goto L9ec3;
	goto L9eaf;
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
	l8 = 1;
	l2 = 5;
#asm
	db 0ebh,014h
#endasm
L9eaf:
	;
#asm
l9eaf:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
#endasm
L9ec3:
	switch (l2) {
case 1:
	if (l8 == 1) goto L9ed3;
	l8 = 1;
L9ed3:
	goto L9f29;
case 2:
	if (l8 != 1) goto L9ee2;
	l8 = 0;
	goto L9eeb;
L9ee2:
	if (l6 <= 0) goto L9eeb;
	l6--;
L9eeb:
	goto L9f29;
case 3:
	if (l8 != 1) goto L9ef8;
	l8 = 0;
L9ef8:
	goto L9f29;
case 4:
	if (l8 != 1) goto L9f07;
	l8 = 0;
	goto L9f13;
L9f07:
	if ((l6 + 1) >= l10) goto L9f13;
	l6++;
L9f13:
	goto L9f29;
	}
L9f29:
	if (l2 != 5) goto L9e02;
	if (l8) goto L9f3e;
	return l6;
L9f3e:
	return -1;
}
