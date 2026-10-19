extern char g4518[];
extern char g452b[];
extern char g4587[];
extern int g363c;
extern int g440c[];
extern int g4fc4;
extern int g5192;
f6ae6(p4, p6)
{
	int l2;
	int l4;
	char *l6;
	int l8;
	int l10;
	int l12;
	int l44[16];
	if (g5192) goto L6afa;
	return -1;
L6afa:
	l6 = f011a(20, 19, 20, 5, 25, -5, 0, 0);
	l12 = 0;
	l2 = 0;
L6b2a:
	if (f28af((p6 + 36), l2) != 1) goto L6b51;
	l44[l12] = l2;
	l12++;
L6b51:
	l2++;
	if (l2 < 16) goto L6b2a;
	l10 = 0;
	f0c16(0, ((unsigned char)l6[2] + 2), ((unsigned char)l6[3] + 2), ((unsigned char)l6[2] + 19), ((unsigned char)l6[3] + 2));
	f0c16(1, ((unsigned char)l6[2] + 1), (unsigned char)l6[3], ((unsigned char)l6[2] + 1), (unsigned char)l6[3]);
	f0c16(2, ((unsigned char)l6[2] + 1), ((unsigned char)l6[3] + 4), ((unsigned char)l6[2] + 1), ((unsigned char)l6[3] + 4));
	f0c16(3, 255, 0, 0, 0);
L6bf7:
	f6a40(l6, l10, 1, l12, l44);
	l2 = f4c2f(20670, 13720);
	if (g4fc4 != 1) goto L6c4c;
	goto L6c3d;
	l2 = 5;
#asm
	db 0ebh,01dh
#endasm
	l2 = 2;
#asm
	db 0ebh,016h
#endasm
	l2 = 4;
#asm
	db 0ebh,00fh
#endasm
L6c3d:
	;
#asm
l6c3d:
	db 03dh,000h,000h,074h,0e6h,03dh,001h,000h,074h,0e8h,03dh,002h,000h,074h,0eah
#endasm
L6c4c:
	switch (l2) {
case 2:
	if (l10 <= 0) goto L6c5a;
	l10--;
L6c5a:
	goto L6c74;
case 4:
	if ((l10 + 1) >= l12) goto L6c68;
	l10++;
L6c68:
	goto L6c74;
	}
L6c74:
	;
#asm
l6c74:
	db 083h,07eh,0feh,005h,074h,003h
#endasm
	goto L6bf7;
L6c7d:
	f02d2(l6, 0);
	if (l44[l10] == g5192) goto L6ca2;
	return -1;
L6ca2:
	l8 = (((((unsigned char)g452b[(432 * p4)] / 2) + ((unsigned char)g4518[(432 * p4)] / 2)) + *(int *)((char *)g440c + (432 * p4))) - (g363c << 1));
	if (g4587[(432 * p4)] != 3) goto L6cff;
	l8 += ((unsigned char)g4518[(432 * p4)] * 3);
	f5a56(p4, 15, 3);
	goto L6d33;
L6cff:
	;
#asm
l6cff:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,087h,045h,03ch,00dh,074h,008h
	db 03ch,004h,074h,004h,03ch,006h,075h,01ch
#endasm
L6d17:
	;
#asm
l6d17:
	db 08ah,087h,018h,045h,02ah,0e4h,0d1h,0e0h,001h,046h,0f8h
#endasm
	f5a56(p4, 15, 2);
L6d33:
	if (l8 <= 95) goto L6d3e;
	l8 = 95;
L6d3e:
	if (l8 >= 5) goto L6d49;
	l8 = 5;
L6d49:
	l4 = f09e2(100);
	if (l4 >= l8) goto L6d5f;
	return 1;
L6d5f:
	if ((100 - ((100 - l8) / 3)) >= l4) goto L6d7d;
	return -1;
L6d7d:
	return 0;
}
