unhighlight_realm_slot(p4, p6)
{
	if (p6 != -1) goto L7516;
	put_glyph_at_c2(p4, 13, 3, 34);
	goto L7545;
L7516:
	put_glyph_at_c2(p4, (((p6 / 3) * 6) + 1), (((p6 % 3) << 1) + 1), (p6 + 35));
L7545:
	;
}
