/* Place the first group from g onward that fits at row, col. */
place_first_group_from(g, row, col)
{
	goto L6bee;
L6bd4:
	if (place_group_at(g, row, col)) goto L6beb;
	return;
L6beb:
	g++;
L6bee:
	if (g <= 3) goto L6bd4;
	return;
}
