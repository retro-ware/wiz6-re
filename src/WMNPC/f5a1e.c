f5a1e(p4)
{
	flush_keys();
	p4 = (p4 * 10);
L5a34:
	if (p4 <= 0) goto L5a67;
	if (!check_screen_click()) goto L5a45;
	return;
L5a45:
	if ((!key_available(1)) || ((char)get_key(1) != 13)) goto L5a5f;
	return;
L5a5f:
	f55dc();
	p4--;
	goto L5a34;
L5a67:
	return;
}
