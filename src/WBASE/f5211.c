#asm
	extrn wait_animated_:near
#endasm
/* Print an error text, beep, optionally wait, then pause. */
show_error_text(text, wait)
{
	show_status_text(text);
	play_sound(0);
	if (!wait) goto L5233;
#asm
	db 0b8h,00ch,000h,050h
	call wait_animated_
	db 059h,0ebh,008h
#endasm
L5233:
	wait_seconds_or_enter(12);
L523b:
	;
}
