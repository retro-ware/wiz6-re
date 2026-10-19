f46e4(p4)
{
	int l2;
	l2 = open(make_data_path(p4, 0), 0);
	if (l2 != -1) goto L470f;
	exit_game(6);
L470f:
	load_misc_table(l2);
	close(l2);
}
