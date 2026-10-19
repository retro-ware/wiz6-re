extern int anim_phase;
extern int g5036;
wait_key_animating(p4)
{
L9a69:
	if (key_available(p4)) goto L9aa1;
	if (g5036) goto L9a8e;
	anim_phase = ((anim_phase + 1) % 2);
	redraw_maze_view();
	goto L9a91;
L9a8e:
	f4655();
L9a91:
	g5036 = ((g5036 + 1) % 10);
	goto L9a69;
L9aa1:
	return (unsigned char)(get_key(p4));
}
