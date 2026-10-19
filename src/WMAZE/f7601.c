extern int g363c;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g4fa2;
extern int g4fa4;
extern int g4faa;
f7601(p4, p6)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	register int rsi;
	register int rdi;
	rsi = (((g4f9c << 6) + (g4f9e << 3)) + g4fa0);
	l6 = f2925((g4faa + 504), rsi, 4);
	if (l6 == 1) goto L7644;
	if (l6 != 2) goto L7664;
L7644:
	if (f2925((g4faa + 888), rsi, 2) != p4) goto L7664;
	return 1;
L7664:
	l8 = g4fa4;
	l10 = g4fa2;
	f55ef(p4, 1);
	if (!f7b1b(20384, 20382, 20380, g4fa4, g4fa2)) goto L76ac;
	f75d7(l8, l10);
	return 1;
L76ac:
	rsi = (((g4f9c << 6) + (g4f9e << 3)) + g4fa0);
	if (f28af(p6, rsi) == 1) goto L76e7;
	if (f28af(19976, rsi) != 1) goto L76f9;
L76e7:
	f75d7(l8, l10);
	return 1;
L76f9:
	l2 = f28af((g4faa + 1082), rsi);
	l4 = f28af((g4faa + 1178), rsi);
	if (l2 != 1) goto L776f;
	switch (g363c) {
case 0:
case 1:
case 2:
case 3:
case 4:
case 6:
case 8:
case 10:
case 12:
	if (g363c != 12) goto L7734;
	if (g4f9c >= 9) goto L7746;
L7734:
	f75d7(l8, l10);
	return 1;
L7746:
	goto L776f;
	}
L776f:
	if (l4 != 1) goto L7791;
	switch (g363c) {
case 2:
	f75d7(l8, l10);
	return 1;
	}
L7791:
	;
#asm
l7791:
	db 08bh,01eh,0a8h,04fh,08bh,03eh,09ch,04fh,08ah,081h,0c0h,006h,02ah,0e4h,0a3h,0e8h
	db 04eh
#endasm
	return 0;
}
