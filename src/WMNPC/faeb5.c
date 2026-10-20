extern char g51d3;
extern int g527a;
extern int g54b2;
faeb5(p4)
{
	char x0[2];
	int l4;
	char x4[10];
	int l16;
	int l24[4];
	int l26;
	char x26[6];
	int l34;
	char x34[18];
	int l54;
	for (l4 = 0; l4 <= 3; l4++) {
	l24[l4] = 1;
	}
	if (((unsigned char)g51d3 & 2)) {
	l24[0] = 0;
	l24[1] = 0;
	}
	l16 = -1;
	l4 = 0;
	l26 = create_window(0, 19, 19, 5, 20, -4, 0, 0);
	get_message(1508, &l54);
	f80d2(((432 * p4) + 17384), &l34);
	replace_char_with_string(&l54, &l34, 36);
	g527a = 1;
Laf54:
	fa206();
	if (g54b2 <= 0) {
	l24[0] = 0;
	}
	f5078(p4, g527a);
	fill_window(l26, 32, 3, 0);
	f541a(&l54, 0);
	refresh_all_windows();
	l4 = f5e0c(l26, 1520, l24, 4, 1, 7, 2, 5, 0, fae76(l24, l4));
	switch (l4) {
case 0:
	fa76f(p4);
	goto Lb01a;
case 1:
	if (faae4(l26, p4) == 1) {
	l4 = 3;
	}
	goto Lb01a;
case 2:
	if (do_npc_give_gold(l26, p4) == 1) {
	l4 = 3;
	}
	goto Lb01a;
	}
Lb01a:
	if (l4 != 3) goto Laf54;
	destroy_window(l26, 0);
	g527a = 0;
	f5078(p4, g527a);
}
