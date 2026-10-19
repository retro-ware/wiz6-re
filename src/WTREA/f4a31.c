extern int g0002;
extern int g502e;
extern int g5030;
extern int g5032;
extern int message_delay;
print_text_line(text)
char *text;
{
	int x;
	int l4;
L4a37:
	if ((l4 = char_index(20462, (unsigned char)*text)) < 0) goto L4ab7;
	switch (l4) {
case 0:
	text++;
	g5030++;
	goto L4ab5;
case 1:
	text++;
	wait_animating(message_delay);
	goto L4ab5;
case 2:
	*(int *)&text += 2;
	goto L4ab5;
case 3:
	text++;
	goto L4ab5;
case 4:
	text++;
	clear_window(g502e, 1);
	g5030 = 0;
	goto L4ab5;
case 5:
	text++;
	end_text_page(0);
	goto L4ab5;
	}
L4ab5:
	goto L4a37;
L4ab7:
	if (g5030 <= 4) goto L4ac6;
	end_text_page(0);
L4ac6:
	x = (20 - ((strlen(text) + 1) / 2));
	switch ((unsigned char)*text) {
case 36:
	text++;
	x = 0;
	goto L4b06;
case 94:
	text++;
	x = g5032;
	goto L4b06;
	}
L4b06:
	set_cursor(g502e, x, g5030);
	g5032 = x;
	g5030++;
	print_string(g502e, text, g0002);
}
