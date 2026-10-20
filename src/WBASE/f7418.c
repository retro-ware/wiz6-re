/* Read a text line into buf (max len) from the keyboard. */
input_text(win, buf, maxlen, color, mode)
char *win;
char *buf;
{
	int key;
	int len;
	int x;
	int y;
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
	if (len > 0) {
	len--;
	*(buf + len) = 0;
	x--;
	set_cursor(win, x, y);
	put_char(win, 32, 1);
	set_cursor(win, x, y);
	} else {
	play_sound(0);
	}
	goto L754c;
L74e8:
	if (len < maxlen) goto L74fa;
	play_sound(0);
	goto L754c;
L74fa:
	if (((mode) || ((key < 32) || (key > 127))) && ((mode != 1) || ((key < 48) || (key > 57)))) goto L754c;
	*(buf + len) = *(char *)&key;
	len++;
	*(buf + len) = 0;
	put_char(win, (unsigned char)*(char *)&key, color);
	x++;
L754c:
	put_char(win, 97, 1);
	goto L744e;
L7560:
	set_cursor(win, x, y);
	put_char(win, 32, 1);
}
