extern int g502e;
extern int g5030;
extern int g5032;
extern int msg_not_found;
show_message_text(p4, p6)
{
	char x0[78];
	int l80;
	g5032 = 0;
	g5030 = 0;
	g502e = create_window(0, 19, 40, 5, 20, -1, 0, 1);
L4b71:
	get_message(p4, &l80);
	if (!msg_not_found) {
	print_text_line(&l80, p6);
	p4++;
	}
	if (!msg_not_found) goto L4b71;
	end_text_page(p6);
	destroy_window(g502e, 0);
}
