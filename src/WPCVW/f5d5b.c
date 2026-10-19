#asm
	extrn strcpy_:near
#endasm
extern char g44f8[];
extern char g4548[];
extern char g454a[];
extern char g4594[];
extern int g4428[];
extern int g567e[];
extern int g5680[];
f5d5b(p4, p6)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	l4 = 0;
L5d68:
	if ((unsigned char)g44f8[((432 * p4) + l4)] != p6) goto L5de2;
	switch (l4) {
case 0:
case 1:
	f5c24(p4, l4);
	goto L5dd2;
case 2:
	g454a[(432 * p4)] = 0;
	goto L5dd2;
case 3:
case 4:
case 5:
case 6:
case 7:
	g4548[((432 * p4) + l4)] = g4548[(432 * p4)];
	goto L5dd2;
	}
L5dd2:
	g44f8[((432 * p4) + l4)] = 255;
L5de2:
	l4++;
	if (l4 < 8) goto L5d68;
	*(int *)((char *)g4428 + ((432 * p4) + (p6 << 3))) = 0;
	g4594[(432 * p4)]--;
	l2 = p6;
	goto L5eab;
L5e1e:
	rsi = (((432 * p4) + (l2 << 3)) + 17456);
	rdi = (((432 * p4) + (l2 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,08bh,046h,0feh,0b9h,004h,000h,0d3h
	db 0e0h,005h,0eeh,055h,050h,08bh,046h,0feh,0d3h,0e0h,005h,0deh,055h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	g567e[l2] = g5680[l2];
	l4 = 0;
L5e7d:
	if ((unsigned char)g44f8[((432 * p4) + l4)] != (l2 + 1)) goto L5e9d;
	g44f8[((432 * p4) + l4)] = *(char *)&l2;
L5e9d:
	l4++;
	if (l4 < 8) goto L5e7d;
	l2++;
L5eab:
	if ((unsigned char)g4594[(432 * p4)] > l2) goto L5e1e;
}
