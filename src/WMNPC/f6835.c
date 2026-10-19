extern char g4548[];
extern char g454a[];
extern char pc_equipped[];
extern char pc_item_count[];
extern char pc_swag_count[];
extern int pc_item_id[];
f6835(p4, p6)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (p6 >= 10) goto L6978;
	l4 = 0;
L684b:
	if ((unsigned char)pc_equipped[((432 * p4) + l4)] != p6) goto L68c5;
	switch (l4) {
case 0:
case 1:
	f66fe(p4, l4);
	goto L68b5;
case 2:
	g454a[(432 * p4)] = 0;
	goto L68b5;
case 3:
case 4:
case 5:
case 6:
case 7:
	g4548[((432 * p4) + l4)] = g4548[(432 * p4)];
	goto L68b5;
	}
L68b5:
	pc_equipped[((432 * p4) + l4)] = 255;
L68c5:
	l4++;
	if (l4 < 8) goto L684b;
	*(int *)((char *)pc_item_id + ((432 * p4) + (p6 << 3))) = 0;
	pc_item_count[(432 * p4)]--;
	l2 = p6;
	goto L6963;
L6900:
	rsi = (((432 * p4) + (l2 << 3)) + 17456);
	rdi = (((432 * p4) + (l2 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,0c7h,046h,0fch,000h,000h
#endasm
L6935:
	if ((unsigned char)pc_equipped[((432 * p4) + l4)] != (l2 + 1)) goto L6955;
	pc_equipped[((432 * p4) + l4)] = *(char *)&l2;
L6955:
	l4++;
	if (l4 < 8) goto L6935;
	l2++;
L6963:
	if ((unsigned char)pc_item_count[(432 * p4)] > l2) goto L6900;
#asm
	db 0ebh,05dh
#endasm
L6978:
	pc_swag_count[(432 * p4)]--;
	l2 = p6;
	goto L69bf;
L698c:
	rsi = (((432 * p4) + (l2 << 3)) + 17456);
	rdi = (((432 * p4) + (l2 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,0ffh,046h,0feh
#endasm
L69bf:
	if (((unsigned char)pc_swag_count[(432 * p4)] + 10) > l2) goto L698c;
L69d5:
	;
}
