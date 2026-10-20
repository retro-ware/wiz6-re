extern int anim_phase;
extern int g5036;
extern int g522a;
wait_more_prompt_m()
{
	int l2;
	l2 = 3;
	flush_keys();
L9c27:
	if (key_available(1)) goto L9ccc;
	if (!check_screen_click()) goto L9c41;
	return;
L9c41:
	if (g5036) goto L9cb8;
	anim_phase = ((anim_phase + 1) % 2);
	redraw_maze_view();
	if (l2 < 2) {
	set_cursor(g522a, 39, 4);
	put_char(g522a, 32, 1);
	} else {
	set_cursor(g522a, 39, 4);
	put_char_hi(g522a, 126, 1);
	}
	l2 = ((l2 + 1) % 4);
	goto L9cbb;
L9cb8:
	f4655();
L9cbb:
	g5036 = ((g5036 + 1) % 10);
	goto L9c27;
L9ccc:
	if ((char)get_key(1) != 13) goto L9c27;
	return;
}
