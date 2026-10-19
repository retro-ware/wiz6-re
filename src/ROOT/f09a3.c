/* Wait up to N seconds, returning early if Enter is pressed. */
wait_seconds_or_enter(seconds)
{
	seconds = (seconds * 10);
L09b6:
	if (seconds <= 0) goto L09e0;
	if ((!key_available(1)) || ((char)get_key(1) != 13)) goto L09d8;
	return;
L09d8:
	delay_tick();
	seconds--;
	goto L09b6;
L09e0:
	return;
}
