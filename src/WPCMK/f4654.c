/* Line editor: read up to maxlen chars into buf; mode 0 printable, mode 1 digits only. */
input_text(win, buf, maxlen, color, mode)
char *win;
char *buf;
{
	int ch;
	int len;
	int x;
	int y;
	x = (unsigned char)win[6];
	y = (unsigned char)win[7];
	len = 0;
	*buf = 0;
	put_char(win, 97, 1);
L468a:
	ch = (unsigned char)(get_key(1));
	if (ch == 13) goto L479c;
	set_cursor(win, x, y);
	put_char(win, 32, 1);
	set_cursor(win, x, y);
	if (ch != 8) goto L4724;
	if (len <= 0) goto L471a;
	len--;
	*(buf + len) = 0;
	x--;
	set_cursor(win, x, y);
	put_char(win, 32, 1);
	set_cursor(win, x, y);
	goto L4722;
L471a:
	play_sound(0);
L4722:
	goto L4788;
L4724:
	if (len < maxlen) goto L4736;
	play_sound(0);
	goto L4788;
L4736:
	if (mode) goto L4749;
#asm
	db 08bh,046h,0feh,03dh,020h,000h,07ch,005h,03dh,07fh,000h,07eh,013h
#endasm
L4749:
	if (mode != 1) goto L4788;
#asm
	db 08bh,046h,0feh,03dh,030h,000h,07ch,031h,03dh,039h,000h,07fh,02ch
#endasm
L475c:
	*(buf + len) = *(char *)&ch;
	len++;
	*(buf + len) = 0;
	put_char(win, (unsigned char)*(char *)&ch, color);
	x++;
L4788:
	put_char(win, 97, 1);
	goto L468a;
L479c:
	set_cursor(win, x, y);
	put_char(win, 32, 1);
}
