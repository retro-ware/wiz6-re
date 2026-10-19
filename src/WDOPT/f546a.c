extern int g363c;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g4faa;
extern int g50c6[];
extern int g50f8;
extern int g50fa;
extern int g50fc;
extern int g50fe[];
extern int g5130;
extern int g5132[];
extern int g5164;
extern int g5166;
extern int g5168;
extern int g516a;
extern int g516c;
extern int g516e;
extern int g5170;
extern int g5172;
extern int g5174;
extern int g5176;
f546a(p4, p6, p8, p10)
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	register int rsi;
	l14 = -1;
	l8 = g4fa0;
	l10 = g4f9e;
	l12 = g4f9c;
	if (!f80d3(&l8, &l10, &l12, p4, p6)) goto L5509;
	if (g363c == 10) goto L54b2;
	if (g363c != 12) goto L54d8;
L54b2:
	*(int *)((char *)g50c6 + ((p8 * 10) + (p10 << 1))) = g50f8;
	return;
L54d8:
	*(int *)((char *)g50c6 + ((p8 * 10) + (p10 << 1))) = g50fa;
	*(int *)((char *)g50fe + ((p8 * 10) + (p10 << 1))) = g50fc;
	*(int *)((char *)g5132 + ((p8 * 10) + (p10 << 1))) = g5130;
	return;
L5509:
	rsi = (((l12 << 6) + (l10 << 3)) + l8);
	if (f2925((g4faa + 504), rsi, 4) != 1) goto L5560;
	l20 = f2925((g4faa + 888), rsi, 2);
	f5357(l20, g5164, p8, p10);
L5560:
	if (f2925((g4faa + 504), rsi, 4) != 2) goto L559d;
	l20 = f2925((g4faa + 888), rsi, 2);
	f5357(l20, g5166, p8, p10);
L559d:
	if (f2925((g4faa + 504), rsi, 4) != 13) goto L55ba;
	l14 = g50f8;
L55ba:
	if (f2925((g4faa + 504), rsi, 4) != 14) goto L55d7;
	l14 = g5168;
L55d7:
	l2 = f28af((g4faa + 1082), rsi);
	if (l2 != 1) goto L55f3;
	l14 = g516a;
L55f3:
	l4 = f28af((g4faa + 1178), rsi);
	if (l4 != 1) goto L560f;
	l14 = g50fa;
L560f:
	if (l2 != 1) goto L5676;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto L562f;
	if (l12 >= 9) goto L562f;
	l14 = g50f8;
	goto L5635;
L562f:
	l14 = g516a;
L5635:
	goto L5676;
case 1:
	l14 = g5168;
	goto L5676;
case 2:
case 3:
case 6:
case 11:
	l14 = g5168;
	goto L5676;
case 8:
case 10:
	l14 = g50f8;
	goto L5676;
	}
L5676:
	if (l4 != 1) goto L56aa;
	switch (g363c) {
case 0:
case 1:
case 3:
case 4:
case 6:
case 8:
case 10:
case 11:
case 12:
	goto L56aa;
	}
L56aa:
	if (l14 == -1) goto L56d1;
	*(int *)((char *)g50c6 + ((p8 * 10) + (p10 << 1))) = l14;
L56d1:
	l16 = -1;
	l18 = f53c4(0, l12, l8, l10, p4, p6);
	goto L570c;
	l16 = g516c;
#asm
	db 0ebh,01fh
#endasm
	l16 = g50fc;
#asm
	db 0ebh,017h
#endasm
	l16 = g516e;
#asm
	db 0ebh,00fh
#endasm
L570c:
	;
#asm
l570c:
	db 03dh,001h,000h,074h,0e3h,03dh,002h,000h,074h,0e6h,03dh,003h,000h,074h,0e9h
#endasm
L571b:
	if (f2925((g4faa + 504), rsi, 4) != 7) goto L574e;
	if (f2925((g4faa + 888), rsi, 2)) goto L574e;
	l16 = g5170;
L574e:
	if (l16 == -1) goto L5775;
	*(int *)((char *)g50fe + ((p8 * 10) + (p10 << 1))) = l16;
L5775:
	l16 = -1;
	l18 = f53c4(3, l12, l8, l10, p4, p6);
	goto L57b0;
	l16 = g5172;
#asm
	db 0ebh,01fh
#endasm
	l16 = g5130;
#asm
	db 0ebh,017h
#endasm
	l16 = g5174;
#asm
	db 0ebh,00fh
#endasm
L57b0:
	;
#asm
l57b0:
	db 03dh,001h,000h,074h,0e3h,03dh,002h,000h,074h,0e6h,03dh,003h,000h,074h,0e9h
#endasm
L57bf:
	if (f2925((g4faa + 504), rsi, 4) != 7) goto L57f3;
	if (f2925((g4faa + 888), rsi, 2) != 3) goto L57f3;
	l16 = g5176;
L57f3:
	if (l16 == -1) goto L581a;
	*(int *)((char *)g5132 + ((p8 * 10) + (p10 << 1))) = l16;
L581a:
	return;
}
