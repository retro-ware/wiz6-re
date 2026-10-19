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
	if (g502c) goto L49dd;
	anim_phase = ((anim_phase + 1) % 2);
	animate_treasure_view();
	set_cursor(g502e, 39, 4);
	if (l2 >= 2) goto L49bc;
	put_char(g502e, 32, 1);
	goto L49ce;
L49bc:
	put_char_hi(g502e, 126, 1);
L49ce:
	l2 = ((l2 + 1) % 4);
	goto L49e0;
L49dd:
	play_ambient_sound();
L49e0:
	g502c = ((g502c + 1) % 10);
	goto L495e;
L49f1:
	if ((char)get_key(1) != 13) goto L495e;
	return;
}
