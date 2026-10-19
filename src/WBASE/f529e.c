extern int g4f84;
/* Read a text line into buf (max len) with the camp scene animating. */
input_text_animated(win, buf, maxlen, color, mode)
char *win;
char *buf;
{
	int key;
	int len;
	int x;
	int y;
	register int rsi;
	x = (unsigned char)win[6];
	y = (unsigned char)win[7];
	len = 0;
	*buf = 0;
	put_char(win, 97, 1);
L52d4:
	key = wait_key_animated(1);
	if (key == 13) goto L53f1;
	set_cursor(win, x, y);
	put_char(win, 32, 1);
	set_cursor(win, x, y);
	if (key != 8) goto L536d;
	if (len <= 0) goto L5362;
	len--;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	x--;
	set_cursor(win, x, y);
	put_char(win, 32, 1);
	set_cursor(win, x, y);
	goto L536a;
L5362:
	play_sound(0);
L536a:
	;
#asm
l536a:
	db 0e9h,070h,000h
#endasm
L536d:
	if (len < maxlen) goto L537f;
	play_sound(0);
	goto L53dd;
L537f:
	if (mode) goto L5392;
#asm
	db 08bh,046h,0feh,03dh,020h,000h,07ch,005h,03dh,07fh,000h,07eh,013h
#endasm
L5392:
	if (mode != 1) goto L53dd;
#asm
	db 08bh,046h,0feh,03dh,030h,000h,07ch,03dh,03dh,039h,000h,07fh,038h
#endasm
L53a5:
	;
#asm
l53a5:
	db 08ah,046h,0feh,08bh,05eh,006h,08bh,076h,0fch,088h,000h
#endasm
	len++;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	put_char(win, (unsigned char)*(char *)&key, color);
	x++;
	if (len <= 2) goto L53dd;
	g4f84 = 17210;
L53dd:
	put_char(win, 97, 1);
	goto L52d4;
L53f1:
	set_cursor(win, x, y);
	put_char(win, 32, 1);
}
