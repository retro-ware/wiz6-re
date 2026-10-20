f46e4(p4)
{
	int l2;
	if ((l2 = open(make_data_path(p4, 0), 0)) == -1) {
	exit_game(6);
	}
	load_misc_table(l2);
	close(l2);
}
