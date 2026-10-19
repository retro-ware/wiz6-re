/* Redraw the icon of spell realm r in normal colour. */
draw_realm_icon(win, realm)
{
	if (realm != -1) goto L67a9;
	draw_glyph_at_dopt(win, 13, 3, 34);
	goto L67d8;
L67a9:
	draw_glyph_at_dopt(win, (((realm / 3) * 6) + 1), (((realm % 3) << 1) + 1), (realm + 35));
L67d8:
	;
}
