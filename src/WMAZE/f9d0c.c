extern int cur_sound;
extern int g0002;
extern int g522a;
extern int g522c;
extern int g522e;
extern int message_delay;
print_text_line_m(p4)
char *p4;
{
	int l2;
	int l4;
L9d12:
	l4 = char_index(20488, (unsigned char)*p4);
	if (l4 < 0) goto L9dd2;
	switch (l4) {
case 0:
	p4++;
	g522c++;
	goto L9dcf;
case 1:
	p4++;
	wait_animating_m(message_delay);
	goto L9dcf;
case 2:
	*(int *)&p4 += 2;
	goto L9dcf;
case 3:
	p4++;
	goto L9dcf;
case 4:
	p4++;
	clear_window(g522a, 1);
	g522c = 0;
	goto L9dcf;
case 5:
	p4++;
	end_text_page_m(0);
	goto L9dcf;
case 6:
	p4++;
	if (*(unsigned char *)p4 >= 14) {
	if ((unsigned char)*p4 != cur_sound) {
	load_sound_bank((unsigned char)*p4);
	}
	play_sound(14);
	} else {
	play_sound((unsigned char)*p4);
	}
	p4++;
	goto L9dcf;
	}
L9dcf:
	goto L9d12;
L9dd2:
	if (g522c > 4) {
	end_text_page_m(0);
	}
	l2 = (20 - ((strlen(p4) + 1) / 2));
	switch ((unsigned char)*p4) {
case 36:
	p4++;
	l2 = 0;
	goto L9e21;
case 94:
	p4++;
	l2 = g522e;
	goto L9e21;
	}
L9e21:
	set_cursor(g522a, l2, g522c);
	g522e = l2;
	g522c++;
	print_string(g522a, p4, g0002);
}
