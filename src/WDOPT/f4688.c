#asm
	extrn delay_tick_:near
#endasm
/* Occasionally wait and play a random ambient sound. */
play_random_drip()
{
	if (random(40) <= 0) goto L469d;
	delay_tick();
#asm
	call delay_tick_
	db 0ebh,010h
#endasm
L469d:
	play_sound((random(3) + 10));
L46ad:
	;
}
