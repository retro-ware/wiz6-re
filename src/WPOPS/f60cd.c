extern char g02ca[];
extern char g02cb[];
extern char g02cc[];
extern char g02cd[];
draw_spell_frame(p4)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	rdi = 0;
L60d8:
	l2 = ((unsigned char)g02cd[(rdi << 2)] % 128);
	l4 = ((unsigned char)g02cd[(rdi << 2)] / 128);
	if (l2) goto L6119;
	f60a7(p4, (unsigned char)g02ca[(rdi << 2)], (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	goto L6191;
L6119:
	if (l4) goto L6159;
#asm
	db 08bh,0c7h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,08ah,087h,0cah,002h,02ah,0e4h,08bh,0f0h
	db 0ebh,021h
#endasm
L6131:
	f60a7(p4, rsi, (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L6152:
	if (rsi < l2) goto L6131;
	goto L6191;
L6159:
	;
#asm
l6159:
	db 08bh,0c7h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,08ah,087h,0cbh,002h,02ah,0e4h,08bh,0f0h
	db 0ebh,021h
#endasm
L616b:
	f60a7(p4, (unsigned char)g02ca[(rdi << 2)], rsi, (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L618c:
	if (rsi < l2) goto L616b;
L6191:
	rdi++;
	if (rdi < 49) goto L60d8;
}
