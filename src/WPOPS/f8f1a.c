extern char g507d[];
extern char g50a1[];
extern char g50ac[];
extern char g50c4[];
extern char g50cc[];
extern char g50e5[];
extern int g363c;
extern int g433c;
extern int g4f9a;
extern int g4faa;
extern int g507a;
extern int g508a[];
extern int g50f2[];
f8f1a(p4, p6, p8, p10, p12, p14)
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	register int rsi;
	register int rdi;
	if (!p14) goto L8fac;
	if (!f8e99(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L8fac;
	if (g507a) goto L8f63;
	if (p14) goto L8f63;
	g433c = 0;
L8f63:
	if (g363c == 10) goto L8f71;
	if (g363c != 12) goto L8fa7;
L8f71:
	g507d[((g507a * 3) + p14)] = 1;
	*(int *)((char *)g508a + ((g507a * 6) + (p14 << 1))) = 1;
	return 0;
L8fa7:
	return 2;
L8fac:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (f28af((g4faa + 1082), rsi) != 1) goto L90e3;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto L900b;
	if (p12 >= 9) goto L900b;
	*(int *)((char *)g508a + ((g507a * 6) + (p14 << 1))) = 1;
	goto L906d;
L900b:
	g50a1[((g507a * 3) + p14)] = 1;
	switch (p14) {
case -1:
	g50ac[g507a] = 0;
#asm
	db 0c6h,087h,0b4h,050h,000h,0c6h,087h,0bch,050h,000h
#endasm
	goto L9067;
case 0:
	g50c4[g507a] = 0;
	goto L9067;
case 1:
	g50cc[g507a] = 0;
#asm
	db 0c6h,087h,0d4h,050h,000h,0c6h,087h,0dch,050h,000h
#endasm
	goto L9067;
	}
L9067:
	return 0;
L906d:
	goto L90e3;
case 1:
	g50e5[((g507a * 3) + p14)] = 1;
#asm
	db 0c6h,087h,07dh,050h,001h
#endasm
	goto L90e3;
case 2:
case 3:
case 6:
case 11:
case 13:
	g50e5[((g507a * 3) + p14)] = 1;
	goto L90e3;
case 8:
case 10:
	*(int *)((char *)g508a + ((g507a * 6) + (p14 << 1))) = 1;
	goto L90e3;
	}
L90e3:
	if (f28af((g4faa + 1178), rsi) != 1) goto L9139;
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
case 13:
	g507d[((g507a * 3) + p14)] = 1;
	goto L9139;
	}
L9139:
	l4 = 0;
	switch (g4f9a) {
case 0:
	l4 = f2925((g4faa + 96), rsi, 2);
	goto L91b9;
case 1:
	l4 = f2925((g4faa + 288), rsi, 2);
	goto L91b9;
case 2:
	l4 = f8dcf(p4, p6, p8, p10, p12);
	goto L91b9;
case 3:
	l4 = f8e34(p4, p6, p8, p10, p12);
	goto L91b9;
	}
L91b9:
	l6 = f2925((g4faa + 504), rsi, 4);
	l8 = f2925((g4faa + 888), rsi, 2);
	if (l8 == g4f9a) goto L91f8;
	if (l6 == 6) goto L91f8;
	if (l6 <= 12) goto L92e4;
L91f8:
	switch (l6) {
case 1:
	l4 = 5;
	goto L92e4;
case 2:
	l4 = 6;
	goto L92e4;
case 3:
	l4 = 8;
	goto L92e4;
case 4:
	l4 = 9;
	goto L92e4;
case 5:
	l4 = 14;
	goto L92e4;
case 6:
	*(int *)((char *)g50f2 + ((g507a * 6) + (p14 << 1))) = 1;
	goto L92e4;
case 7:
	l4 = 4;
	goto L92e4;
case 8:
	l4 = 7;
	goto L92e4;
case 9:
	l4 = 10;
	goto L92e4;
case 10:
	l4 = 11;
	goto L92e4;
case 11:
	l4 = 12;
	goto L92e4;
case 12:
	l4 = 13;
	goto L92e4;
case 13:
	*(int *)((char *)g508a + ((g507a * 6) + (p14 << 1))) = 1;
	goto L92e4;
case 14:
	g50e5[((g507a * 3) + p14)] = 1;
	goto L92e4;
case 15:
	g507d[((g507a * 3) + p14)] = 1;
	goto L92e4;
	}
L92e4:
	if (!l4) goto L92fd;
	if (g507a) goto L92fd;
	if (p14) goto L92fd;
	g433c = 0;
L92fd:
	return l4;
}
