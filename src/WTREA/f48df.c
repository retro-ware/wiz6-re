extern int anim_phase;
extern int g502c;
wait_animating(seconds)
{
	flush_keys();
	seconds = (seconds * 5);
L48f3:
	if (seconds <= 0) goto L494e;
	if (!check_screen_click()) goto L4904;
	return;
L4904:
	if ((!key_available(1)) || ((char)get_key(1) != 13)) goto L491e;
	return;
L491e:
	if (!g502c) {
	anim_phase = ((anim_phase + 1) % 2);
	animate_treasure_view();
	} else {
	play_ambient_sound();
	}
	g502c = ((g502c + 1) % 10);
	seconds--;
	goto L48f3;
L494e:
	return;
}
