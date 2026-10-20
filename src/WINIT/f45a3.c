f45a3(p4, p6)
{
	int l2;
	if ((l2 = open(make_data_path(p4, 0), 0)) == -1) {
	exit_game(3);
	}
	load_font(l2, p6);
	close(l2);
}
