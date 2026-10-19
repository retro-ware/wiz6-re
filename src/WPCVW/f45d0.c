extern int g0846;
extern int g4fc4;
rename_test_fn(win, p6, p8, p10, p12, p14, p16, p18, p20)
char *win;
{
	int l2;
	int row;
	char rows[405];
	int l411;
	int l413;
	char x413[1];
	register int i;
	row = 0;
	l2 = 0;
L45e2:
	;
#asm
l45e2:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h
#endasm
	goto L4715;
L45f4:
	;
#asm
l45f4:
	db 083h,038h,001h,074h,003h
#endasm
	goto L470f;
L45fc:
	l411 = (((row / p16) * p14) + p10);
	l413 = ((row % p16) + p12);
	f030b(win, l411, l413);
	f075b((p6 + l2), ((row * 25) + rows));
	if (g0846) goto L4685;
	if (p20 != row) goto L4685;
	f24e9(win, ((row * 25) + rows), (0 - p18));
	goto L46a8;
L4685:
	f251d(win, ((row * 25) + rows), 3);
L46a8:
	*(int *)(rows + ((row << 1) + 375)) = l2;
	f0c16(row, ((unsigned char)win[2] + l411), ((unsigned char)win[3] + l413), (((strlen(((row * 25) + rows)) + (unsigned char)win[2]) + l411) - 1), ((unsigned char)win[3] + l413));
	row++;
L470f:
	l2++;
	goto L45e2;
L4715:
	f0c16(row, 255, 0, 0, 0);
L4728:
	if (g0846) goto L4779;
	f030b(win, (((p20 / p16) * p14) + p10), ((p20 % p16) + p12));
	f24e9(win, ((p20 * 25) + rows), (0 - p18));
L4779:
	l2 = f8891(21822, 13720);
	if (g4fc4 != 1) goto L479c;
	p20 = l2;
	l2 = 5;
	goto L48ce;
L479c:
	switch (l2) {
case 1:
	if ((p20 - p16) < 0) goto L47de;
	f4595(win, p20, p14, p16, p10, p12, ((p20 * 25) + rows));
	p20 -= p16;
L47de:
	goto L48ce;
case 2:
	if ((p20 % p16) <= 0) goto L4820;
	f4595(win, p20, p14, p16, p10, p12, ((p20 * 25) + rows));
	p20--;
L4820:
	goto L48ce;
case 3:
	if ((p20 + p16) >= row) goto L4862;
	f4595(win, p20, p14, p16, p10, p12, ((p20 * 25) + rows));
	p20 += p16;
L4862:
	goto L48ce;
case 4:
	if ((p20 % p16) >= (p16 - 1)) goto L48af;
	if ((p20 + 1) >= row) goto L48af;
	f4595(win, p20, p14, p16, p10, p12, ((p20 * 25) + rows));
	p20++;
L48af:
	goto L48ce;
	}
L48ce:
	if (l2 != 5) goto L4728;
	return *(int *)(rows + ((p20 << 1) + 375));
}
