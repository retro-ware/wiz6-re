#asm
	extrn delay_tick_:near
#endasm
f4655()
{
	if (random(40) <= 0) goto L466a;
	delay_tick();
#asm
	call delay_tick_
	db 0ebh,010h
#endasm
L466a:
	play_sound((random(3) + 10));
L467a:
	;
}
