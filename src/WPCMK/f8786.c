extern char char_class;
extern char g559d;
extern char g559e;
extern char g559f;
extern char g55a0;
extern char g55a1;
extern char g55a5;
extern char g55a8;
extern char g55ab;
extern char g55ad;
extern char g55af;
extern char g55b0;
extern char g55b3;
extern char g55b4;
extern char g55bd;
extern char g55be;
extern char g55bf;
extern char g55c0;
extern char skill_points_left;
init_class_skills()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	l2 = (unsigned char)g559d;
	l4 = (unsigned char)g559e;
	l10 = (unsigned char)g559f;
	l6 = (unsigned char)g55a0;
	l8 = (unsigned char)g55a1;
	skill_points_left = (char)(random(9) + 10);
	l12 = 0;
	switch ((unsigned char)char_class) {
case 1:
	l12 = ((random(4) + (l2 / 3)) + 3);
	g55c0 = *(char *)&l12;
	goto L8ad2;
case 2:
	l12 = ((random(4) + (l4 / 3)) + 3);
	g55be = *(char *)&l12;
	goto L8ad2;
case 3:
	l12 = ((random(4) + (((l2 + l6) / 2) / 3)) + 3);
	g55b3 = *(char *)&l12;
	goto L8ad2;
case 4:
	l12 = ((random(3) + (((l2 + l10) / 2) / 5)) + 2);
	g55af = *(char *)&l12;
	skill_points_left = (char)((unsigned char)skill_points_left - l12);
	l12 = ((random(3) + (((l6 + l8) / 2) / 5)) + 2);
	g55ab = *(char *)&l12;
	goto L8ad2;
case 6:
	l12 = ((random(4) + (((l2 + l6) / 2) / 3)) + 3);
	g55b0 = *(char *)&l12;
	goto L8ad2;
case 5:
	l12 = ((random(4) + (l2 / 3)) + 3);
	g55bd = *(char *)&l12;
	goto L8ad2;
case 7:
	l12 = ((random(4) + (((l2 + l4) / 2) / 3)) + 3);
	g55bf = *(char *)&l12;
	goto L8ad2;
case 9:
	l12 = ((random(3) + (l2 / 5)) + 2);
	g55c0 = *(char *)&l12;
	skill_points_left = (char)((unsigned char)skill_points_left - l12);
	l12 = ((random(3) + (l4 / 5)) + 2);
	g55be = *(char *)&l12;
	goto L8ad2;
case 8:
	l12 = ((random(4) + (((l6 + l8) / 2) / 3)) + 3);
	g55a8 = *(char *)&l12;
	goto L8ad2;
case 10:
case 11:
	l12 = ((random(4) + (((l6 + l8) / 2) / 3)) + 3);
	g55a5 = *(char *)&l12;
	goto L8ad2;
case 12:
	l12 = ((random(3) + (((l6 + l8) / 2) / 5)) + 2);
	g55ad = *(char *)&l12;
	skill_points_left = (char)((unsigned char)skill_points_left - l12);
	l12 = ((random(3) + (((l2 + l4) / 2) / 5)) + 2);
	g55bf = *(char *)&l12;
	goto L8ad2;
case 13:
	l12 = ((random(3) + (((l6 + l8) / 2) / 5)) + 2);
	g55ad = *(char *)&l12;
	skill_points_left = (char)((unsigned char)skill_points_left - l12);
	l12 = ((random(3) + (((l6 + l8) / 2) / 5)) + 2);
	g55b4 = *(char *)&l12;
	goto L8ad2;
	}
L8ad2:
	if ((unsigned char)skill_points_left <= l12) goto L8ae4;
	skill_points_left = (char)((unsigned char)skill_points_left - l12);
	goto L8ae9;
L8ae4:
	skill_points_left = 0;
L8ae9:
	;
}
