extern char g02ca[];
extern char g02cb[];
extern char g02cc[];
extern char g02cd[];
/* Draw the frame of the spell book window. */
draw_spell_window_frame(p4)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	rdi = 0;
L688b:
	l2 = ((unsigned char)g02cd[(rdi << 2)] % 128);
	l4 = ((unsigned char)g02cd[(rdi << 2)] / 128);
	if (l2) goto L68cc;
	f685a(p4, (unsigned char)g02ca[(rdi << 2)], (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	goto L6944;
L68cc:
	if (l4) goto L690c;
#asm
	db 08bh,0c7h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,08ah,087h,0cah,002h,02ah,0e4h,08bh,0f0h
	db 0ebh,021h
#endasm
L68e4:
	f685a(p4, rsi, (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L6905:
	if (rsi < l2) goto L68e4;
	goto L6944;
L690c:
	;
#asm
l690c:
	db 08bh,0c7h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,08ah,087h,0cbh,002h,02ah,0e4h,08bh,0f0h
	db 0ebh,021h
#endasm
L691e:
	f685a(p4, (unsigned char)g02ca[(rdi << 2)], rsi, (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L693f:
	if (rsi < l2) goto L691e;
L6944:
	rdi++;
	if (rdi < 49) goto L688b;
}
