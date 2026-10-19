#asm
	extrn f05a5_:near
#endasm
extern char g560f;
extern char g5618;
extern char g5632;
extern int g5670[];
f5b3b(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	register int rsi;
	switch ((unsigned char)g560f) {
case 0:
	f55ad(20477, 20488, 20496, 20502);
	goto L5ccd;
case 1:
	f55ad(20511, 20522, 20530, 20536);
	goto L5ccd;
case 2:
	f55ad(20545, 20556, 20564, 20570);
	goto L5ccd;
case 3:
	f55ad(20579, 20590, 20598, 20604);
	goto L5ccd;
case 4:
	f55ad(20613, 20624, 20632, 20638);
	goto L5ccd;
case 5:
	f55ad(20647, 20658, 20666, 20672);
	goto L5ccd;
case 6:
	f55ad(20681, 20692, 20700, 20706);
	goto L5ccd;
case 7:
	f55ad(20715, 20726, 20734, 20740);
	goto L5ccd;
case 8:
	f55ad(20749, 20760, 20768, 20774);
	goto L5ccd;
case 9:
	f55ad(20783, 20794, 20802, 20808);
	goto L5ccd;
case 10:
	f55ad(20817, 20828, 20836, 20842);
	goto L5ccd;
case 11:
	f55ad(20851, 20862, 20870, 20876);
	goto L5ccd;
case 12:
	f55ad(20885, 20896, 20904, 20910);
	goto L5ccd;
case 13:
	f55ad(20919, 20930, 20938, 20944);
	goto L5ccd;
	}
L5ccd:
	f32be(p4, 0, 1, 0);
	f4bed(p4, 0, 0, 14);
	f4bed(p4, 19, 0, 10);
	f4bed(p4, 0, 15, 11);
	f4bed(p4, 19, 15, 8);
	l2 = 1;
L5d38:
	f4bed(p4, l2, 0, 12);
	f4bed(p4, l2, 2, 12);
	f4bed(p4, l2, 13, 12);
	f4bed(p4, l2, 15, 7);
	l2++;
	if (l2 < 19) goto L5d38;
	l2 = 1;
L5d98:
	f4bed(p4, 0, l2, 13);
	f4bed(p4, 19, l2, 5);
	l2++;
	if (l2 < 15) goto L5d98;
	f4bed(p4, 0, 2, 33);
	f4bed(p4, 0, 9, 15);
	f4bed(p4, 0, 11, 15);
	f4bed(p4, 0, 13, 16);
	f4bed(p4, 19, 2, 10);
	f4bed(p4, 19, 13, 10);
	f3118(p4);
	f030b(p4, 1, 1);
	setmem(22048, 20, 32);
	g5632 = 0;
	f251d(p4, 22048, 3);
	f030b(p4, 6, 1);
	f083f((p8 + 600), p4, 18);
	switch (p8) {
case 0:
	l4 = 1;
	l6 = 1;
	l8 = 0;
	l10 = 9;
	l12 = 2;
	goto L5f30;
case 1:
	l4 = 36;
	l6 = 37;
	l8 = 10;
	l10 = 16;
	l12 = 14;
	goto L5f30;
case 2:
	l4 = 36;
	l6 = 37;
	l8 = 17;
	l10 = 21;
	l12 = 12;
	goto L5f30;
case 3:
	l4 = 33;
	l6 = 33;
	l8 = 22;
	l10 = 29;
	l12 = 11;
	goto L5f30;
	}
L5f30:
	f50a8(p4, 2, 1, (l4 + 1));
	f50a8(p4, 17, 1, (l6 + 1));
	l14 = 0;
	l2 = l8;
	goto L5fe2;
L5f69:
	if (g5670[l2] != 1) goto L5fdf;
	f030b(p4, 1, (l14 + 3));
	f083f((l2 + 5500), p4, l12);
	f030b(p4, 16, (l14 + 3));
#asm
	db 0b8h,001h,000h,050h,0b8h,003h,000h,050h,08bh,05eh,0feh,08ah,087h,0a4h,055h,02ah
	db 0e4h,050h,0ffh,076h,004h
	call f05a5_
	db 083h,0c4h,008h,08bh,046h,0feh,08bh,04eh,0f2h,0d1h,0e1h,08bh,0f1h,08bh,05eh,00ah
	db 089h,000h
#endasm
	l14++;
L5fdf:
	l2++;
L5fe2:
	;
#asm
l5fe2:
	db 08bh,046h,0feh,03bh,046h,0f6h,07fh,003h
#endasm
	goto L5f69;
L5fed:
	f030b(p4, 1, 14);
	f083f(5530, p4, 9);
	f030b(p4, 16, 14);
	f05a5(p4, (unsigned char)g5618, 3, 1);
	f31d1(p4);
	f2b19(p4);
	return l14;
}
