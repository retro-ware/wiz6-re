extern char g511b[];
extern char g513f[];
extern char g514a[];
extern char g5162[];
extern char g516a[];
extern char g5183[];
extern int g363c;
extern int g433c;
extern int g4f9a;
extern int g4faa;
extern int g5118;
extern int g5128[];
extern int g5190[];
f779d(p4, p6, p8, p10, p12, p14)
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	register int rsi;
	register int rdi;
	if (!p14) goto L782f;
	if (!f771c(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L782f;
	if (g5118) goto L77e6;
	if (p14) goto L77e6;
	g433c = 0;
L77e6:
	if (g363c == 10) goto L77f4;
	if (g363c != 12) goto L782a;
L77f4:
	g511b[((g5118 * 3) + p14)] = 1;
	*(int *)((char *)g5128 + ((g5118 * 6) + (p14 << 1))) = 1;
	return 0;
L782a:
	return 2;
L782f:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (f28af((g4faa + 1082), rsi) != 1) goto L7966;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto L788e;
	if (p12 >= 9) goto L788e;
	*(int *)((char *)g5128 + ((g5118 * 6) + (p14 << 1))) = 1;
	goto L78f0;
L788e:
	g513f[((g5118 * 3) + p14)] = 1;
	switch (p14) {
case -1:
	g514a[g5118] = 0;
#asm
	db 0c6h,087h,052h,051h,000h,0c6h,087h,05ah,051h,000h
#endasm
	goto L78ea;
case 0:
	g5162[g5118] = 0;
	goto L78ea;
case 1:
	g516a[g5118] = 0;
#asm
	db 0c6h,087h,072h,051h,000h,0c6h,087h,07ah,051h,000h
#endasm
	goto L78ea;
	}
L78ea:
	return 0;
L78f0:
	goto L7966;
case 1:
	g5183[((g5118 * 3) + p14)] = 1;
#asm
	db 0c6h,087h,01bh,051h,001h
#endasm
	goto L7966;
case 2:
case 3:
case 6:
case 11:
case 13:
	g5183[((g5118 * 3) + p14)] = 1;
	goto L7966;
case 8:
case 10:
	*(int *)((char *)g5128 + ((g5118 * 6) + (p14 << 1))) = 1;
	goto L7966;
	}
L7966:
	if (f28af((g4faa + 1178), rsi) != 1) goto L79bc;
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
	g511b[((g5118 * 3) + p14)] = 1;
	goto L79bc;
	}
L79bc:
	l4 = 0;
	switch (g4f9a) {
case 0:
	l4 = f2925((g4faa + 96), rsi, 2);
	goto L7a3c;
case 1:
	l4 = f2925((g4faa + 288), rsi, 2);
	goto L7a3c;
case 2:
	l4 = f7652(p4, p6, p8, p10, p12);
	goto L7a3c;
case 3:
	l4 = f76b7(p4, p6, p8, p10, p12);
	goto L7a3c;
	}
L7a3c:
	l6 = f2925((g4faa + 504), rsi, 4);
	l8 = f2925((g4faa + 888), rsi, 2);
	if (l8 == g4f9a) goto L7a7b;
	if (l6 == 6) goto L7a7b;
	if (l6 <= 12) goto L7b67;
L7a7b:
	switch (l6) {
case 1:
	l4 = 5;
	goto L7b67;
case 2:
	l4 = 6;
	goto L7b67;
case 3:
	l4 = 8;
	goto L7b67;
case 4:
	l4 = 9;
	goto L7b67;
case 5:
	l4 = 14;
	goto L7b67;
case 6:
	*(int *)((char *)g5190 + ((g5118 * 6) + (p14 << 1))) = 1;
	goto L7b67;
case 7:
	l4 = 4;
	goto L7b67;
case 8:
	l4 = 7;
	goto L7b67;
case 9:
	l4 = 10;
	goto L7b67;
case 10:
	l4 = 11;
	goto L7b67;
case 11:
	l4 = 12;
	goto L7b67;
case 12:
	l4 = 13;
	goto L7b67;
case 13:
	*(int *)((char *)g5128 + ((g5118 * 6) + (p14 << 1))) = 1;
	goto L7b67;
case 14:
	g5183[((g5118 * 3) + p14)] = 1;
	goto L7b67;
case 15:
	g511b[((g5118 * 3) + p14)] = 1;
	goto L7b67;
	}
L7b67:
	if (!l4) goto L7b80;
	if (g5118) goto L7b80;
	if (p14) goto L7b80;
	g433c = 0;
L7b80:
	return l4;
}
