/* Read a text line into buf (max len) from the keyboard. */
input_text(win, buf, maxlen, color, mode)
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
L744e:
	key = (unsigned char)(get_key(1));
	if (key == 13) goto L7560;
	set_cursor(win, x, y);
	put_char(win, 32, 1);
	set_cursor(win, x, y);
	if (key != 8) goto L74e8;
	if (len <= 0) goto L74de;
	len--;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	x--;
	set_cursor(win, x, y);
	put_char(win, 32, 1);
	set_cursor(win, x, y);
	goto L74e6;
L74de:
	play_sound(0);
L74e6:
	goto L754c;
L74e8:
	if (len < maxlen) goto L74fa;
	play_sound(0);
	goto L754c;
L74fa:
	if (mode) goto L750d;
#asm
	db 08bh,046h,0feh,03dh,020h,000h,07ch,005h,03dh,07fh,000h,07eh,013h
#endasm
L750d:
	if (mode != 1) goto L754c;
#asm
	db 08bh,046h,0feh,03dh,030h,000h,07ch,031h,03dh,039h,000h,07fh,02ch
#endasm
L7520:
	;
#asm
l7520:
	db 08ah,046h,0feh,08bh,05eh,006h,08bh,076h,0fch,088h,000h
#endasm
	len++;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	put_char(win, (unsigned char)*(char *)&key, color);
	x++;
L754c:
	put_char(win, 97, 1);
	goto L744e;
L7560:
	set_cursor(win, x, y);
	put_char(win, 32, 1);
}
