/* Animate the view for tenths of seconds; a click or Enter ends early. */
wait_animating_view(tenths)
{
	flush_keys();
	tenths = (tenths * 10);
L45bc:
	if (tenths <= 0) goto L45ef;
	if (!check_screen_click()) goto L45cd;
	return;
L45cd:
	if ((!key_available(1)) || ((char)get_key(1) != 13)) goto L45e7;
	return;
L45e7:
	animate_view_step();
	tenths--;
	goto L45bc;
L45ef:
	return;
}
