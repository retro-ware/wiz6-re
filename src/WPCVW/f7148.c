unhighlight_realm(p4, p6, p8)
{
	if (p8 != -1) goto L7168;
	put_glyph_at(p6, 1, 12, 34);
	goto L719b;
L7168:
	put_glyph_at(p4, (((p8 / 3) * 10) + 1), (((p8 % 3) << 1) + 14), (p8 + 35));
L719b:
	;
}
