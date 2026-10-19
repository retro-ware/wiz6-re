extern char pc_skills[];
do_skills_menu(p4, p6)
{
	int l2;
	int l4;
	char x4[8];
	int l14;
	char x14[4];
	int l20;
	int l24[2];
	int l26;
	int l28;
	char x28[18];
	int l48;
	int l50;
	int l52;
	l26 = 0;
	l52 = 0;
	l2 = 17;
L92af:
	if ((unsigned)pc_skills[((432 * p6) + l2)] <= 0) goto L92c6;
	l52 = 1;
L92c6:
	l2++;
	if (l2 < 22) goto L92af;
	l4 = create_window(20, 4, 20, 16, 25, -1, 0, 0);
L92f7:
	l28 = draw_skills_page(l4, p4, p6, l26, &l48);
	l2 = 0;
L9315:
	l24[l2] = 1;
	l2++;
	if (l2 <= 4) goto L9315;
	l24[l26] = 0;
	l14 = -1;
	if (l52) goto L934c;
	l20 = 0;
L934c:
	if (((l26 + 1) != 2) || (l52)) goto L9370;
	l50 = count_enabled_before(l24, (l26 + 2));
	goto L9382;
L9370:
	l50 = count_enabled_before(l24, (l26 + 1));
L9382:
	fill_window(p4, 32, 3, 0);
	refresh_window(p4);
	l26 = run_menu(p4, 600, l24, 2, 1, 10, 2, 5, l50);
#asm
	db 083h,07eh,0e6h,004h,074h,003h
#endasm
	goto L92f7;
L93d2:
	fill_window(p4, 32, 3, 0);
	destroy_window(l4, 1);
}
