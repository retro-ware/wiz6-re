extern int g5262;
extern int g5264;
extern int view_anim_state;
f5a69()
{
	int l2;
	l2 = 3;
	flush_keys();
L5a77:
	if (key_available(1)) goto L5ae5;
	if (!check_screen_click()) goto L5a8e;
	return;
L5a8e:
	f55dc();
	if (view_anim_state != -2) goto L5ae3;
	set_cursor(g5264, 39, g5262);
	if (l2 >= 2) goto L5ac4;
	put_char(g5264, 32, 1);
	goto L5ad6;
L5ac4:
	put_char_hi(g5264, 126, 1);
L5ad6:
	l2 = ((l2 + 1) % 4);
L5ae3:
	goto L5a77;
L5ae5:
	if ((char)get_key(1) != 13) goto L5a77;
	return;
}
