unhighlight_combat_realm(p4, p6)
{
	if (p6 != -1) goto L5ff6;
	put_combat_glyph_at(p4, 13, 3, 34);
	goto L6025;
L5ff6:
	put_combat_glyph_at(p4, (((p6 / 3) * 6) + 1), (((p6 % 3) << 1) + 1), (p6 + 35));
L6025:
	;
}
