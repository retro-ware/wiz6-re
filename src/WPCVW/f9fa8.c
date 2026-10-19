draw_portrait_frame(p4)
{
	int l2;
	put_char_c1(p4, 0, 0, 20);
	put_char_c1(p4, 19, 0, 8);
	l2 = 1;
L9fda:
	put_char_c1(p4, l2, 0, 7);
	l2++;
	if (l2 < 19) goto L9fda;
	l2 = 1;
L9ffe:
	put_char_c1(p4, 0, l2, 5);
	l2++;
	if (l2 < 15) goto L9ffe;
	put_char_c1(p4, 0, 9, 10);
	put_char_c1(p4, 0, 11, 10);
	put_char_c1(p4, 0, 13, 10);
	put_char_c1(p4, 0, 15, 8);
}
