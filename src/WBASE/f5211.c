/* Print an error text, beep, optionally wait, then pause. */
show_error_text(text, wait)
{
	show_status_text(text);
	play_sound(0);
	if (!wait) goto L5233;
	wait_animated(12);
	goto L523b;
L5233:
	wait_seconds_or_enter(12);
L523b:
	;
}
