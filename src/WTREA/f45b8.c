play_ambient_sound()
{
	if (random(40) <= 0) goto L45cd;
	delay_tick();
	delay_tick();
	goto L45dd;
L45cd:
	play_sound((random(3) + 10));
L45dd:
	;
}
