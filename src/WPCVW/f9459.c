input_line(p4, p6, p8, p10, p12)
char *p4;
char *p6;
{
	int l2;
	int l4;
	int l6;
	int l8;
	l6 = (unsigned char)p4[6];
	l8 = (unsigned char)p4[7];
	l4 = 0;
	*p6 = 0;
	put_char(p4, 97, 1);
L948f:
	l2 = (unsigned char)(get_key(1));
	if (l2 == 13) goto L95a1;
	set_cursor(p4, l6, l8);
	put_char(p4, 32, 1);
	set_cursor(p4, l6, l8);
	if (l2 != 8) goto L9529;
	if (l4 <= 0) goto L951f;
	l4--;
	*(p6 + l4) = 0;
	l6--;
	set_cursor(p4, l6, l8);
	put_char(p4, 32, 1);
	set_cursor(p4, l6, l8);
	goto L9527;
L951f:
	play_sound(0);
L9527:
	goto L958d;
L9529:
	if (l4 < p8) goto L953b;
	play_sound(0);
	goto L958d;
L953b:
	if (((p12) || ((l2 < 32) || (l2 > 127))) && ((p12 != 1) || ((l2 < 48) || (l2 > 57)))) goto L958d;
	*(p6 + l4) = *(char *)&l2;
	l4++;
	*(p6 + l4) = 0;
	put_char(p4, (unsigned char)*(char *)&l2, p10);
	l6++;
L958d:
	put_char(p4, 97, 1);
	goto L948f;
L95a1:
	set_cursor(p4, l6, l8);
	put_char(p4, 32, 1);
}
