#asm
	extrn defer_window_draw_:near
#endasm
extern int realm_colors[];
f8c28(p4, p6, p8, p10, p12, p14, p16)
char *p4;
char *p16;
{
	register int rsi;
	f88c7(p4, 0);
#asm
	db 0ffh,076h,004h
	call defer_window_draw_
	db 059h,0beh,0feh,0ffh
#endasm
L8c44:
	if (((p10 + rsi) < 0) || ((p10 + rsi) >= p14)) goto L8ccb;
	set_cursor(p4, 2, (rsi + 2));
	print_message((*(int *)(p16 + ((p10 + rsi) << 1)) + 4000), p4, ((p12 == 1) && (!rsi) ? realm_colors[p8] : 18));
	if ((p12 != 1) || (rsi)) goto L8ccb;
L8ca8:
	if ((unsigned)p4[6] >= 17) goto L8ccb;
	put_char(p4, 32, realm_colors[p8]);
	goto L8ca8;
L8ccb:
	rsi++;
	if (rsi <= 2) goto L8c44;
	resume_window_draw(p4);
	refresh_window(p4);
}
