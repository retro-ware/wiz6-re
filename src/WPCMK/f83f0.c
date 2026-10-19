extern char g5563;
extern char g5564[];
extern char g556a;
extern char g556c[];
extern char g556d[];
extern char g556f;
extern char g559c;
extern char g559d;
extern char g559f;
extern char g55a0;
extern char g55a1;
extern char g55ad;
extern char g55c1;
extern char g55d0[];
extern char g55d2;
extern char g560d;
extern char g560f;
extern int g5560;
f83f0()
{
	int l2;
	int l4;
	switch ((unsigned char)g560f) {
case 0:
	f83b5(21308);
	goto L848d;
case 4:
case 8:
	f83b5(21323);
	goto L848d;
case 10:
	f83b5(21338);
	goto L848d;
case 11:
	f83b5(21353);
	goto L848d;
case 13:
	f83b5(21368);
	goto L848d;
case 1:
case 5:
	f83b5(21383);
	goto L848d;
case 7:
	f83b5(21398);
	goto L848d;
case 2:
case 9:
	f83b5(21413);
	goto L848d;
case 12:
	f83b5(21428);
	goto L848d;
case 3:
case 6:
	f83b5(21443);
	goto L848d;
	}
L848d:
	switch ((unsigned char)g560d) {
case 0:
	f837b(11, 20);
	goto L85d8;
case 2:
case 4:
	f837b(6, (((unsigned char)g559f / 5) * 5));
case 3:
	f837b(12, (((unsigned char)g559f / 5) * 5));
	goto L85d8;
case 1:
	f837b(9, 20);
	goto L85d8;
case 5:
	f837b(12, 25);
	f837b(4, 25);
	f837b(7, 25);
	f837b(10, 25);
	f837b(11, 25);
	goto L85d8;
case 6:
case 7:
	f837b(10, 25);
	f837b(8, 10);
	f837b(3, -20);
	goto L85d8;
case 8:
	f837b(7, 15);
	f837b(4, 20);
case 9:
	f837b(3, 20);
	goto L85d8;
case 10:
	f837b(12, 25);
	f837b(3, 15);
	goto L85d8;
	}
L85d8:
	if ((unsigned)g559f <= 15) goto L85fb;
	f837b(6, 5);
	f837b(11, 5);
L85fb:
	if ((unsigned)g559d <= 15) goto L8610;
	f837b(9, 5);
L8610:
	if ((unsigned)g55a1 <= 15) goto L8633;
	f837b(7, 5);
	f837b(4, 5);
L8633:
	l2 = 0;
L8638:
	g556d[(l2 << 4)] = 0;
	g556c[(l2 << 4)] = 0;
	l4 = 0;
L8651:
	g5564[((l2 << 4) + l4)] = 0;
	l4++;
	if (l4 < 8) goto L8651;
#asm
	db 08bh,046h,0feh,0b9h,004h,000h,0d3h,0e0h,08bh,0d8h,0c6h,087h,06eh,055h,000h,0c6h
	db 087h,062h,055h,002h,0c6h,087h,063h,055h,002h,0c7h,087h,060h,055h,000h,000h,0c6h
	db 087h,06fh,055h,020h
#endasm
	l2++;
	if (l2 < 2) goto L8638;
	l2 = ((unsigned char)g55ad / 5);
	l4 = ((unsigned char)g55c1 / 5);
	if (g560f == 13) goto L86c4;
	if (g560f != 12) goto L86e2;
L86c4:
	g5563 = (char)((l2 / 3) + 2);
	g556f |= 64;
	g556a = (char)(l4 + 5);
	goto L8706;
L86e2:
	if (l2 <= 0) goto L86fa;
	g5563 = (char)((l2 / 4) + 1);
	g556f |= 64;
L86fa:
	if (l4 <= 0) goto L8706;
	g556a = *(char *)&l4;
L8706:
	if ((unsigned)g559c <= 15) goto L8711;
	g5560++;
L8711:
	if ((unsigned)g559c <= 17) goto L871c;
	g5560++;
L871c:
	if ((unsigned)g55a0 <= 15) goto L8728;
#asm
	db 080h,006h,06eh,055h,0fbh
#endasm
L8728:
	if ((unsigned)g55a0 <= 17) goto L8739;
#asm
	db 080h,006h,06eh,055h,0fbh,080h,006h,07eh,055h,0fbh
#endasm
L8739:
	g55d0[0] = 10;
	if ((unsigned)g55a1 <= 15) goto L8749;
	g55d0[0]--;
L8749:
	if ((unsigned)g55a1 <= 17) goto L8754;
	g55d0[0]--;
L8754:
	if (g560d != 5) goto L8763;
	g55d0[0] -= 2;
L8763:
	g55d2 = 0;
	l2 = 3;
L876d:
	g55d0[l2] = g55d0[0];
	l2++;
	if (l2 < 8) goto L876d;
}
