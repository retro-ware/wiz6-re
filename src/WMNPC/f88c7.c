#asm
	extrn f884b_:near
#endasm
f88c7(p4, p6)
{
	register int rsi;
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
#asm
	db 0b8h,045h,000h,050h,0b8h,000h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,004h
	call f884b_
	db 083h,0c4h,008h,0beh,001h,000h
#endasm
L88ff:
	f884b(p4, 1, rsi, 71);
	rsi++;
	if (rsi < 4) goto L88ff;
	f884b(p4, 1, 4, 70);
	resume_window_draw(p4);
	if (p6) {
	refresh_window(p4);
	}
}
