extern char *main_window;
extern int menu_clicked;
extern int mouse_present;
extern int party_count;
f62ee(p4, p6)
{
	int l2;
	char *l4;
	int l6;
	char x6[8];
	int l16;
	char x16[8];
	int l26;
	int l28;
	int l30;
	int l32;
	int l34;
	register int rsi;
	if (party_count >= 2) goto L6304;
	return 0;
L6304:
	l4 = create_window(0, 19, 19, 5, 25, -4, 0, 0);
	fill_window(l4, 32, 3, 0);
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	get_message(p4, 20948);
	f541a(20948, (p6 == 1 ? 5 : 0));
	refresh_all_windows();
	if (p6 != 1) goto L63e9;
	main_window[6]++;
	l28 = (unsigned char)main_window[6];
	l30 = (unsigned char)main_window[7];
	get_message(2027, &l16);
	get_message(2028, &l26);
	if (mouse_present != 1) goto L63d7;
	print_string_hi(main_window, &l16, 3);
	goto L63e9;
L63d7:
	print_string(main_window, &l26, -5);
L63e9:
	for (rsi = 0; rsi < party_count; rsi++) {
	l32 = (((rsi % 2) * 9) + 2);
	l34 = ((rsi / 2) + 1);
	set_cursor(l4, l32, l34);
	print_string_hi(l4, ((432 * rsi) + 17384), 3);
	set_click_region(rsi, ((unsigned char)l4[2] + l32), ((unsigned char)l4[3] + l34), (((strlen(((432 * rsi) + 17384)) + (unsigned char)l4[2]) + l32) - 1), ((unsigned char)l4[3] + l34));
	}
	set_click_region(party_count, 255, 0, 0, 0);
	if (p6 != 1) goto L64f2;
	set_click_region(party_count, ((unsigned char)main_window[2] + l28), ((unsigned char)main_window[3] + l30), (((strlen(&l26) + (unsigned char)main_window[2]) + l28) - 1), ((unsigned char)main_window[3] + l30));
	set_click_region((party_count + 1), 255, 0, 0, 0);
L64f2:
	l6 = (p6 == 1 ? -1 : 0);
L6501:
	if (mouse_present) goto L6570;
	if (l6 != -1) goto L6532;
	set_cursor(main_window, l28, l30);
	print_string(main_window, &l26, -5);
	goto L6570;
L6532:
	set_cursor(l4, (((l6 % 2) * 9) + 2), ((l6 / 2) + 1));
	print_string(l4, ((432 * l6) + 17384), -5);
L6570:
	l2 = f5994(21098, 13720);
	if (menu_clicked != 1) goto L65a1;
	l6 = (l2 < party_count ? l2 : -1);
	l2 = 5;
	goto L66a5;
L65a1:
	switch (l2) {
case 1:
	if ((l6 == -1) || ((l6 % 2) <= 0)) goto L65cc;
	f62a9(l4, l6);
	l6--;
L65cc:
	goto L66a5;
case 2:
	if (l6 == -1) goto L6607;
	if ((l6 - 2) < 0) goto L65f0;
	f62a9(l4, l6);
	l6 -= 2;
	goto L6607;
L65f0:
	if (p6 != 1) goto L6607;
	f62a9(l4, l6);
	l6 = -1;
L6607:
	goto L66a5;
case 3:
	if (((l6 == -1) || ((l6 % 2) >= 1)) || ((l6 + 1) >= party_count)) goto L6638;
	f62a9(l4, l6);
	l6++;
L6638:
	goto L66a5;
case 4:
	if (l6 != -1) goto L6669;
	set_cursor(main_window, l28, l30);
	print_string_hi(main_window, &l16, 3);
	l6 = 0;
	goto L6686;
L6669:
	if ((l6 + 2) >= party_count) goto L6686;
	f62a9(l4, l6);
	l6 += 2;
L6686:
	goto L66a5;
	}
L66a5:
	if (l2 != 5) goto L6501;
	erase_window(main_window, 0);
	destroy_window(l4, 0);
	return l6;
}
