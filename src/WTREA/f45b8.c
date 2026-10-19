#asm
	extrn delay_tick_:near
#endasm
play_ambient_sound()
{
	if (random(40) <= 0) goto L45cd;
	delay_tick();
#asm
	call delay_tick_
	db 0ebh,010h
#endasm
L45cd:
	play_sound((random(3) + 10));
L45dd:
	;
}
