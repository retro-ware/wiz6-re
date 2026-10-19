do_modify_menu(p4, p6, p8)
{
	int l2;
	int l4;
	char x4[8];
	int l14;
	char x14[2];
	int l18;
	int l24[3];
Lac89:
	fill_window(p6, 32, 3, 0);
	refresh_all_windows();
	for (l2 = 0; l2 <= 4; l2++) {
	l24[l2] = 1;
	}
	l18 = 0;
	l14 = -1;
	l4 = run_menu(p6, 650, l24, 2, 1, 18, 2, 5, count_enabled_before(l24, 4));
	switch (l4) {
case 0:
	do_rename(p6, p8);
	goto Lad3e;
case 1:
	do_choose_portrait(p6, p8);
	goto Lad3e;
case 2:
	do_change_class(p4, p6, p8);
	goto Lad3e;
	}
Lad3e:
	draw_sheet(p4, p6, p8);
	if (l4 != 4) goto Lac89;
}
