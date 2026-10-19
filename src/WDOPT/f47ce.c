extern int anim_phase;
extern int g506a;
/* Animate the view for ticks; a click or Enter ends early. */
wait_animated_dopt(ticks)
{
	flush_keys();
	ticks = (ticks * 5);
L47e2:
	if (ticks <= 0) goto L483d;
	if (!check_screen_click()) goto L47f3;
	return;
L47f3:
	if ((!key_available(1)) || ((char)get_key(1) != 13)) goto L480d;
	return;
L480d:
	if (g506a) goto L4827;
	anim_phase = ((anim_phase + 1) % 2);
	redraw_maze_view();
	goto L482a;
L4827:
	play_random_drip();
L482a:
	g506a = ((g506a + 1) % 10);
	ticks--;
	goto L47e2;
L483d:
	return;
}
