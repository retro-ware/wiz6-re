extern int anim_phase;
extern int g502c;
extern int g502e;
wait_more_prompt()
{
	int l2;
	l2 = 3;
	flush_keys();
L495e:
	if (key_available(1)) goto L49f1;
	if (!check_screen_click()) goto L4978;
	return;
L4978:
	if (!g502c) {
	anim_phase = ((anim_phase + 1) % 2);
	animate_treasure_view();
	set_cursor(g502e, 39, 4);
	if (l2 < 2) {
	put_char(g502e, 32, 1);
	} else {
	put_char_hi(g502e, 126, 1);
	}
	l2 = ((l2 + 1) % 4);
	} else {
	play_ambient_sound();
	}
	g502c = ((g502c + 1) % 10);
	goto L495e;
L49f1:
	if ((char)get_key(1) != 13) goto L495e;
	return;
}
