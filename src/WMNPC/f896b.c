extern char g02ca[];
extern char g02cb[];
extern char g02cc[];
extern char g02cd[];
f896b(p4)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	rdi = 0;
L8976:
	l2 = ((unsigned char)g02cd[(rdi << 2)] % 128);
	l4 = ((unsigned char)g02cd[(rdi << 2)] / 128);
	if (l2) goto L89b7;
	f8945(p4, (unsigned char)g02ca[(rdi << 2)], (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	goto L8a2f;
L89b7:
	if (l4) goto L89f7;
#asm
	db 08bh,0c7h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,08ah,087h,0cah,002h,02ah,0e4h,08bh,0f0h
	db 0ebh,021h
#endasm
L89cf:
	f8945(p4, rsi, (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L89f0:
	if (rsi < l2) goto L89cf;
	goto L8a2f;
L89f7:
	;
#asm
l89f7:
	db 08bh,0c7h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,08ah,087h,0cbh,002h,02ah,0e4h,08bh,0f0h
	db 0ebh,021h
#endasm
L8a09:
	f8945(p4, (unsigned char)g02ca[(rdi << 2)], rsi, (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L8a2a:
	if (rsi < l2) goto L8a09;
L8a2f:
	rdi++;
	if (rdi < 49) goto L8976;
}
