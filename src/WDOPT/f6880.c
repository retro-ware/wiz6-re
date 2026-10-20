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
	for (rsi = (unsigned char)g02ca[(rdi << 2)]; rsi < l2; rsi++) {
	f685a(p4, rsi, (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	}
	goto L6944;
L690c:
	for (rsi = (unsigned char)g02cb[(rdi << 2)]; rsi < l2; rsi++) {
	f685a(p4, (unsigned char)g02ca[(rdi << 2)], rsi, (unsigned char)g02cc[(rdi << 2)]);
	}
L6944:
	rdi++;
	if (rdi < 49) goto L688b;
}
