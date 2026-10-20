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
#asm
	db 08bh,0c7h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,08ah,087h,0cah,002h,02ah,0e4h,08bh,0f0h
	db 0ebh,021h
#endasm
L7651:
	put_frame_piece(p4, rsi, (unsigned char)g02cb[(rdi << 2)], (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L7672:
	if (rsi < l2) goto L7651;
	goto L76b1;
L7679:
	;
#asm
l7679:
	db 08bh,0c7h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,08ah,087h,0cbh,002h,02ah,0e4h,08bh,0f0h
	db 0ebh,021h
#endasm
L768b:
	put_frame_piece(p4, (unsigned char)g02ca[(rdi << 2)], rsi, (unsigned char)g02cc[(rdi << 2)]);
	rsi++;
L76ac:
	if (rsi < l2) goto L768b;
L76b1:
	rdi++;
	if (rdi < 49) goto L75f8;
}
