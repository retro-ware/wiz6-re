extern int anim_phase;
shake_view(p4, p6)
{
	int l2;
	l2 = 0;
	goto Lb531;
Lb50d:
	if (p6 <= 0) goto Lb52e;
	anim_phase = ((anim_phase + 1) % 2);
	redraw_maze_view();
	play_sound(p6);
	delay_long();
Lb52e:
	l2++;
Lb531:
	if (l2 < p4) goto Lb50d;
}
