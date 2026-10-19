#asm
	extrn $ldv:near
#endasm
extern int g4fc8;
extern int g5116;
fb934(p4)
char *p4;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	g5116 = 0;
	l2 = (unsigned char)p4[31];
	l4 = (unsigned char)p4[32];
	l12 = 25;
	l6 = 1;
	for (l10 = 0; l10 < 6; l10++) {
	if (*(int *)(p4 + 2) <= l12) goto Lb970;
	l6++;
Lb970:
	l12 = (l12 << 1);
	}
#asm
	db 08bh,046h,0fah,08bh,05eh,004h,08bh,04fh,006h,08bh,0d9h,0f7h,0ebh,050h,052h,08bh
	db 05eh,004h,08bh,047h,008h,099h,08bh,0c8h,08bh,0dah,05ah,058h
	call $ldv
	db 040h,089h,046h,0fah,03dh,001h,000h,07dh,005h
#endasm
	l6 = 1;
Lb9b0:
	if (l6 <= 6) goto Lb9bb;
	l6 = 6;
Lb9bb:
	l8 = (l6 << 2);
	l14 = 0;
	switch (*(int *)(p4 + 10)) {
case 1:
	fb85f(3340, 3700, 12, 0);
	f8efc(l2, 0, 0, 1);
	f8149(l2, (0 - l6), 2, 5, l6, 1, l8);
	l14 = (random(4) + (*(int *)(p4 + 8) / 6));
	goto Lbff6;
case 2:
	fb85f(3341, 3705, 9, 0);
	f8efc(l2, 0, 9, 0);
	f8149(l2, (0 - l6), 2, 5, l6, 7, l8);
	l14 = (random(2) + (*(int *)(p4 + 8) / 20));
	goto Lbff6;
case 3:
	fb85f(3340, 3701, 2, 0);
	f8efc(l2, 0, 1, 1);
	f8149(l2, (0 - l6), 3, 4, l6, 3, l8);
	l14 = (random(4) + (*(int *)(p4 + 8) / 6));
	goto Lbff6;
case 8:
	fb85f(3340, 3706, 6, 0);
	f8efc(l2, 0, 3, 1);
	f8149(l2, (0 - l6), 1, 7, l6, 8, l8);
	l14 = (random(6) + (*(int *)(p4 + 8) / 4));
	goto Lbff6;
case 10:
	if (fb85f(3345, -1, 6, ((unsigned)p4[14] > 0 ? 1 : 0))) goto Lbbe3;
	f8efc(l2, 0, 16, 0);
	f8149(l2, (0 - (l6 + 1)), 2, 4, l6, 10, l8);
Lbbe3:
	l14 = (random(4) + (*(int *)(p4 + 8) / 10));
	goto Lbff6;
case 12:
	if (fb85f(3346, -1, 5, ((unsigned)p4[14] > 0 ? 1 : 0))) goto Lbc96;
	f8efc(l2, 0, 16, 0);
	f83f3(l2, (0 - (l6 + 1)), 3479, 10, l6, l8, 1, 4, 7, 0, (l6 * 10), 2, (l6 * 10), 0, 0);
Lbc96:
	l14 = (random(4) + (*(int *)(p4 + 8) / 10));
	goto Lbff6;
case 4:
	fb85f(3341, 3702, 15, 0);
	f8efc(l2, 0, 16, 0);
	f825f(l2, (0 - l6), 3475, 4, 3, l8, 0, (l6 << 1), 1, l6, 0, 0);
	l14 = (random(4) + (*(int *)(p4 + 8) / 10));
	goto Lbff6;
case 5:
	fb85f(3342, 3703, 14, 0);
	f8efc(l2, 0, 3, 0);
	f83f3(l2, (0 - (l6 + 1)), 3480, 5, l6, l8, 1, 6, 8, 0, l6, 4, l6, 0, 0);
	l14 = (random(4) + (*(int *)(p4 + 8) / 6));
	goto Lbff6;
case 6:
	fb85f(3340, 3704, 11, 0);
	f8efc(l2, 0, 3, 0);
	f83f3(l2, (0 - l6), 3477, 6, l6, l8, 1, 5, 5, 0, (l6 * 10), 2, l6, 0, 0);
	l14 = (random(3) + (*(int *)(p4 + 8) / 8));
	goto Lbff6;
case 7:
	fb85f(3343, -1, 5, 0);
	f8efc(l2, 0, 16, 0);
	f825f(l2, l4, 3498, 13, 6, 15, 0, 5, 5, 5, 5, 5);
	l14 = (random(2) + (*(int *)(p4 + 8) / 20));
	goto Lbff6;
case 9:
	fb85f(3344, 3707, 7, 0);
	f8efc(l2, 0, 16, 0);
	f825f(l2, (0 - (l6 + 1)), 3474, 9, 2, l8, 0, l6, 2, l6, 0, 0);
	l14 = (random(3) + (*(int *)(p4 + 8) / 10));
	goto Lbff6;
case 11:
	if (fb85f(3347, -1, 3, ((unsigned)p4[14] > 0 ? 1 : 0))) goto Lbfb0;
	f8efc(l2, 0, 16, 0);
	f825f(l2, -10, 3473, 10, 1, l8, 0, l6, 1, l6, 0, 0);
Lbfb0:
	l14 = (random(3) + (*(int *)(p4 + 8) / 8));
	goto Lbff6;
	}
Lbff6:
	if (g5116) goto Lc00b;
	combat_delay((g4fc8 / 2));
Lc00b:
	return l14;
}
