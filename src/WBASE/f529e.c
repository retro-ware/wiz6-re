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
	*(buf + len) = 0;
	x--;
	set_cursor(win, x, y);
	put_char(win, 32, 1);
	set_cursor(win, x, y);
	goto L536a;
L5362:
	play_sound(0);
L536a:
	goto L53dd;
L536d:
	if (len < maxlen) goto L537f;
	play_sound(0);
	goto L53dd;
L537f:
	if (((mode) || ((key < 32) || (key > 127))) && ((mode != 1) || ((key < 48) || (key > 57)))) goto L53dd;
	*(buf + len) = *(char *)&key;
	len++;
	*(buf + len) = 0;
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
