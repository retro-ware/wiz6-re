f45a3(p4, p6)
{
	int l2;
	l2 = open(make_data_path(p4, 0), 0);
	if (l2 != -1) goto L45ce;
	exit_game(3);
L45ce:
	load_font(l2, p6);
	close(l2);
}
