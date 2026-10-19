extern int member_portrait[];
draw_portrait(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	l6 = ((member_portrait[p6] * 9) + 72);
	for (l2 = 0; l2 < 3; l2++) {
	set_cursor(p4, p8, (p10 + l2));
	for (l4 = 0; l4 < 3; l4++) {
	put_char_hi(p4, (unsigned char)((((l2 * 3) + l6) + l4)), 2);
	}
	}
}
