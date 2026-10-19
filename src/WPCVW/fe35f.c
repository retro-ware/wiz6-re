extern char g55a0;
extern char pc_class[];
extern char pc_skill_points[];
extern char pc_skills[];
extern int g57fe[];
/* Draw a page of the skills screen of member p8. */
draw_skills_page(p4, p6, p8, p10, p12)
char *p12;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	switch ((unsigned char)pc_class[(432 * p8)]) {
case 0:
	fdd93(p8, 21185, 21196, 21204, 21210);
	goto Le524;
case 1:
	fdd93(p8, 21219, 21230, 21238, 21244);
	goto Le524;
case 2:
	fdd93(p8, 21253, 21264, 21272, 21278);
	goto Le524;
case 3:
	fdd93(p8, 21287, 21298, 21306, 21312);
	goto Le524;
case 4:
	fdd93(p8, 21321, 21332, 21340, 21346);
	goto Le524;
case 5:
	fdd93(p8, 21355, 21366, 21374, 21380);
	goto Le524;
case 6:
	fdd93(p8, 21389, 21400, 21408, 21414);
	goto Le524;
case 7:
	fdd93(p8, 21423, 21434, 21442, 21448);
	goto Le524;
case 8:
	fdd93(p8, 21457, 21468, 21476, 21482);
	goto Le524;
case 9:
	fdd93(p8, 21491, 21502, 21510, 21516);
	goto Le524;
case 10:
	fdd93(p8, 21525, 21536, 21544, 21550);
	goto Le524;
case 11:
	fdd93(p8, 21559, 21570, 21578, 21584);
	goto Le524;
case 12:
	fdd93(p8, 21593, 21604, 21612, 21618);
	goto Le524;
case 13:
	fdd93(p8, 21627, 21638, 21646, 21652);
	goto Le524;
	}
Le524:
	fill_window(p4, 0, 1, 0);
	fb139(p4, 0, 0, 14);
	fb139(p4, 19, 0, 10);
	fb139(p4, 0, 15, 11);
	fb139(p4, 19, 15, 8);
	for (l2 = 1; l2 < 19; l2++) {
	fb139(p4, l2, 0, 12);
	fb139(p4, l2, 2, 12);
	fb139(p4, l2, 13, 12);
	fb139(p4, l2, 15, 7);
	}
	for (l2 = 1; l2 < 15; l2++) {
	fb139(p4, 0, l2, 13);
	fb139(p4, 19, l2, 5);
	}
	fb139(p4, 0, 2, 33);
	fb139(p4, 0, 9, 15);
	fb139(p4, 0, 11, 15);
	fb139(p4, 0, 13, 16);
	fb139(p4, 19, 2, 10);
	fb139(p4, 19, 13, 10);
	defer_window_draw(p4);
	set_cursor(p4, 1, 1);
	setmem(21902, 20, 32);
	g55a0 = 0;
	print_string_hi(p4, 21902, 3);
	set_cursor(p4, 6, 1);
	print_message((p10 + 600), p4, 18);
	switch (p10) {
case 0:
	l4 = 1;
	l6 = 1;
	l8 = 0;
	l10 = 9;
	l12 = 2;
	goto Le787;
case 1:
	l4 = 36;
	l6 = 37;
	l8 = 10;
	l10 = 16;
	l12 = 14;
	goto Le787;
case 2:
	l4 = 36;
	l6 = 37;
	l8 = 17;
	l10 = 21;
	l12 = 12;
	goto Le787;
case 3:
	l4 = 33;
	l6 = 33;
	l8 = 22;
	l10 = 29;
	l12 = 11;
	goto Le787;
	}
Le787:
	put_icon_at2(p4, 2, 1, (l4 + 1));
	put_icon_at2(p4, 17, 1, (l6 + 1));
	l14 = 0;
	l2 = l8;
	goto Le842;
Le7c1:
	if (g57fe[l2] != 1) goto Le83f;
	set_cursor(p4, 1, (l14 + 3));
	print_message((l2 + 5500), p4, l12);
	set_cursor(p4, 16, (l14 + 3));
	print_int(p4, (unsigned char)pc_skills[((432 * p8) + l2)], 3, 1);
	*(int *)(p12 + (l14 << 1)) = l2;
	l14++;
Le83f:
	l2++;
Le842:
	if (l2 <= l10) goto Le7c1;
	set_cursor(p4, 1, 14);
	print_message(5530, p4, 9);
	set_cursor(p4, 16, 14);
	print_int(p4, (unsigned char)pc_skill_points[(432 * p8)], 3, 1);
	resume_window_draw(p4);
	refresh_window(p4);
	return l14;
}
