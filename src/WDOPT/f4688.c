/* Occasionally wait and play a random ambient sound. */
play_random_drip()
{
	if (random(40) <= 0) goto L469d;
	delay_tick();
	delay_tick();
	goto L46ad;
L469d:
	play_sound((random(3) + 10));
L46ad:
	;
}
