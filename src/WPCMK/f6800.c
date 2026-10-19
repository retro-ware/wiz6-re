extern char g00e0[];
extern int g0004[];
extern int g4fc4;
extern int g5498[];
f6800(p4, p6)
char *p4;
{
	char *l2;
	char *l4;
	int l6;
	char x6[2];
	int l10;
	int l50[20];
	int l52;
	char x52[4];
	int l58;
	int l60;
	char x60[2];
	int l64;
	int l66;
	char x66[4];
	int l72;
	int l74;
	int l76;
	l2 = f011a(20, 4, 20, 16, 22, -1, 0, 0);
	l4 = f011a(21, 7, 19, 8, 23, -1, 0, 0);
	f32be(l4, 32, 3, 0);
	f6216(l2);
	f619b(l4, 1);
	f2b19(p6);
	l64 = 0;
	l6 = 0;
L688c:
	l74 = (((l6 / 3) * 10) + 1);
	l76 = (((l6 % 3) << 1) + 14);
	f0c16(l6, ((unsigned char)p4[2] + l74), ((unsigned char)p4[3] + l76), ((unsigned char)p4[2] + l74), ((unsigned char)p4[3] + l76));
	l6++;
	if (l6 < 6) goto L688c;
	f0c16(6, ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12), ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12));
L6914:
	f0c16(7, 255, 0, 0, 0);
	l72 = 1;
L692d:
	if (l72 != 1) goto L6a78;
	if (l64 != -1) goto L69bd;
	f611b(l2, 1, 12, 99);
	f033f(l2, 11, 12, 18, 12);
	f030b(l2, 11, 12);
	f083f(3956, l2, 9);
	f033f(l2, 6, 14, 8, 14);
	l10 = -1;
	f619b(l4, 1);
	goto L6a73;
L69bd:
	f611b(p4, (((l64 / 3) * 10) + 1), (((l64 % 3) << 1) + 14), 99);
	f033f(l2, 11, 12, 18, 12);
	f030b(l2, 11, 12);
	f083f((l64 + 3950), l2, g0004[l64]);
	f033f(l2, 6, 14, 8, 14);
	l10 = f66ea(l64, l50);
	f673f(l4, l64, 0, 0, l10, l50);
L6a73:
	l72 = 0;
L6a78:
	l6 = f45fc(21534, 13720);
	if (g4fc4 != 1) goto L6ad5;
	if (l6 != l64) goto L6a9c;
	l6 = 5;
	goto L6acd;
L6a9c:
	f6144(p4, l2, l64);
	if (l6 >= 6) goto L6abe;
	l64 = l6;
	l6 = 0;
	goto L6acd;
L6abe:
	l64 = -1;
	l6 = 5;
	l10 = -1;
L6acd:
	l72 = 1;
	goto L6bca;
L6ad5:
	switch (l6) {
case 1:
	if (l64 != -1) goto L6afc;
	f6144(p4, l2, l64);
	l64 = 4;
	l72 = 1;
	goto L6b1c;
L6afc:
	if ((l64 - 3) < 0) goto L6b1c;
	f6144(p4, l2, l64);
	l64 += -3;
	l72 = 1;
L6b1c:
	goto L6bca;
case 2:
	if (l64 == -1) goto L6b4c;
	if ((l64 % 3) <= 0) goto L6b4c;
	f6144(p4, l2, l64);
	l64--;
	l72 = 1;
L6b4c:
	goto L6bca;
case 3:
	if (l64 == -1) goto L6b7e;
	f6144(p4, l2, l64);
	l72 = 1;
	if ((l64 + 3) >= 6) goto L6b79;
	l64 = (l64 + 3);
	goto L6b7e;
L6b79:
	l64 = -1;
L6b7e:
	goto L6bca;
case 4:
	if (l64 == -1) goto L6bae;
	if (((l64 % 3) + 1) >= 3) goto L6bae;
	f6144(p4, l2, l64);
	l64++;
	l72 = 1;
L6bae:
	goto L6bca;
	}
L6bca:
	if (l6 != 5) goto L692d;
	if (!l10) goto L692d;
	if (l64 != -1) goto L6c03;
	f02d2(l2, 0);
	f02d2(l4, 0);
	return -1;
L6c03:
	f6144(p4, l2, l64);
	l58 = 0;
	l60 = 0;
	f0c16(7, (unsigned char)l4[2], (unsigned char)l4[3], (unsigned char)l4[2], (unsigned char)l4[3]);
	f0c16(8, (unsigned char)l4[2], ((unsigned char)l4[3] + 6), (unsigned char)l4[2], ((unsigned char)l4[3] + 6));
	f0c16(9, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 3), ((unsigned char)l4[2] + 18), ((unsigned char)l4[3] + 3));
	f0c16(10, 255, 0, 0, 0);
L6caf:
	f673f(l4, l64, l58, 1, l10, l50);
	l66 = (unsigned char)g00e0[(l50[l58] * 6)];
	f030b(l2, 6, 14);
	if (*(int *)((char *)g5498 + (l64 << 2)) >= l66) goto L6d25;
	f24e9(l2, 20953, g0004[l64]);
	goto L6d40;
L6d25:
	f05a5(l2, l66, 3, g0004[l64]);
L6d40:
	l6 = f45fc(21534, 13720);
	if (g4fc4 != 1) goto L6dbd;
#asm
	db 0ebh,056h
#endasm
	l64 = l6;
	l6 = 1;
	goto L6dbd;
	f02d2(l2, 0);
	f02d2(l4, 0);
	return -1;
	l6 = 2;
#asm
	db 0ebh,02fh
#endasm
	l6 = 4;
#asm
	db 0ebh,028h
#endasm
	l6 = 5;
#asm
	db 0ebh,021h,05ah,06dh,05ah,06dh,05ah,06dh,05ah,06dh,05ah,06dh,05ah,06dh,067h,06dh
	db 087h,06dh,08eh,06dh,095h,06dh
l6db0:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,09ch,06dh
#endasm
L6dbd:
	switch (l6) {
case 1:
	l60 = 1;
	goto L6df1;
case 2:
	if (l58 <= 0) goto L6dd2;
	l58--;
L6dd2:
	goto L6df1;
case 4:
	if ((l58 + 1) >= l10) goto L6de0;
	l58++;
L6de0:
	goto L6df1;
	}
L6df1:
	if (l6 == 5) goto L6e00;
	if (l60 != 1) goto L6caf;
L6e00:
	if (l60 == 1) goto L6914;
	l52 = l50[l58];
	f02d2(l2, 0);
	f02d2(l4, 0);
	return l52;
}
