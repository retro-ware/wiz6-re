extern char g44f8[];
extern char g4548[];
extern char g454a[];
extern char g4594[];
extern char g4595[];
extern int g4428[];
f4e09(p4, p6)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (p6 >= 10) goto L4f4c;
	l4 = 0;
L4e1f:
	if ((unsigned char)g44f8[((432 * p4) + l4)] != p6) goto L4e99;
	switch (l4) {
case 0:
case 1:
	f4cd2(p4, l4);
	goto L4e89;
case 2:
	g454a[(432 * p4)] = 0;
	goto L4e89;
case 3:
case 4:
case 5:
case 6:
case 7:
	g4548[((432 * p4) + l4)] = g4548[(432 * p4)];
	goto L4e89;
	}
L4e89:
	g44f8[((432 * p4) + l4)] = 255;
L4e99:
	l4++;
	if (l4 < 8) goto L4e1f;
	*(int *)((char *)g4428 + ((432 * p4) + (p6 << 3))) = 0;
	g4594[(432 * p4)]--;
	l2 = p6;
	goto L4f37;
L4ed4:
	rsi = (((432 * p4) + (l2 << 3)) + 17456);
	rdi = (((432 * p4) + (l2 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,0c7h,046h,0fch,000h,000h
#endasm
L4f09:
	if ((unsigned char)g44f8[((432 * p4) + l4)] != (l2 + 1)) goto L4f29;
	g44f8[((432 * p4) + l4)] = *(char *)&l2;
L4f29:
	l4++;
	if (l4 < 8) goto L4f09;
	l2++;
L4f37:
	if ((unsigned char)g4594[(432 * p4)] > l2) goto L4ed4;
#asm
	db 0ebh,05dh
#endasm
L4f4c:
	g4595[(432 * p4)]--;
	l2 = p6;
	goto L4f93;
L4f60:
	rsi = (((432 * p4) + (l2 << 3)) + 17456);
	rdi = (((432 * p4) + (l2 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,0ffh,046h,0feh
#endasm
L4f93:
	if (((unsigned char)g4595[(432 * p4)] + 10) > l2) goto L4f60;
L4fa9:
	;
}
