/* Wait up to secs seconds (tenths ticks); return 1 if Enter was pressed. */
wait_enter_key(secs)
{
	secs = (secs * 10);
L4f25:
	if (secs <= 0) goto L4f52;
	if (!key_available(1)) goto L4f4a;
	if ((char)get_key(1) != 13) goto L4f4a;
	return 1;
L4f4a:
	delay_tick();
	secs--;
	goto L4f25;
L4f52:
	return 0;
}
