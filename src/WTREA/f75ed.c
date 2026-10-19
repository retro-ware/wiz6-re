extern char g02ca[];
extern char g02cb[];
extern char g02cc[];
extern char g02cd[];
draw_chest_spell_frame(p4)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	rdi = 0;
L75f8:
	l2 = ((unsigned char)g02cd[(rdi << 2)] % 128);
	l4 = ((unsigned char)g02cd[(rdi << 2)] / 128);
	if (l2) goto L7639;
	put_frame_piece(p4, (unsigned char)g02ca[(rdi << 2)], (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	goto L76b1;
L7639:
	if (l4) goto L7679;
	rsi = (unsigned char)g02ca[(rdi << 2)];
	goto L7672;
L7651:
	put_frame_piece(p4, rsi, (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L7672:
	if (rsi < l2) goto L7651;
	goto L76b1;
L7679:
	rsi = (unsigned char)g02cb[(rdi << 2)];
	goto L76ac;
L768b:
	put_frame_piece(p4, (unsigned char)g02ca[(rdi << 2)], rsi, (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L76ac:
	if (rsi < l2) goto L768b;
L76b1:
	rdi++;
	if (rdi < 49) goto L75f8;
}
