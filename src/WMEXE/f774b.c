extern int g5116;
/* Wait p4 tenths, animating, returning early on a key or click. */
combat_delay(p4)
{
	g5116 = 1;
	flush_keys();
	p4 = (p4 * 10);
L7767:
	if (p4 <= 0) goto L779a;
	if (!check_screen_click()) goto L7778;
	return;
L7778:
	if (!key_available(1)) goto L7792;
	if ((char)get_key(1) != 13) goto L7792;
	return;
L7792:
	animate_step();
	p4--;
	goto L7767;
L779a:
	return;
}
