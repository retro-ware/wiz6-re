extern char char_class;
extern char char_race;
extern char char_stats;
extern char g5562[];
extern char g5563[];
extern char g5564[];
extern char g556a;
extern char g556c[];
extern char g556d[];
extern char g556e[];
extern char g556f[];
extern char g557e;
extern char g559d;
extern char g559f;
extern char g55a0;
extern char g55a1;
extern char g55ad;
extern char g55c1;
extern char g55d0[];
extern char g55d2;
extern int g5560[];
init_class_race_modifiers()
{
	int l2;
	int l4;
	switch ((unsigned char)char_class) {
case 0:
	init_ratings_from_string(21308);
	goto L848d;
case 4:
case 8:
	init_ratings_from_string(21323);
	goto L848d;
case 10:
	init_ratings_from_string(21338);
	goto L848d;
case 11:
	init_ratings_from_string(21353);
	goto L848d;
case 13:
	init_ratings_from_string(21368);
	goto L848d;
case 1:
case 5:
	init_ratings_from_string(21383);
	goto L848d;
case 7:
	init_ratings_from_string(21398);
	goto L848d;
case 2:
case 9:
	init_ratings_from_string(21413);
	goto L848d;
case 12:
	init_ratings_from_string(21428);
	goto L848d;
case 3:
case 6:
	init_ratings_from_string(21443);
	goto L848d;
	}
L848d:
	switch ((unsigned char)char_race) {
case 0:
	add_class_rating(11, 20);
	goto L85d8;
case 2:
case 4:
	add_class_rating(6, (((unsigned char)g559f / 5) * 5));
case 3:
	add_class_rating(12, (((unsigned char)g559f / 5) * 5));
	goto L85d8;
case 1:
	add_class_rating(9, 20);
	goto L85d8;
case 5:
	add_class_rating(12, 25);
	add_class_rating(4, 25);
	add_class_rating(7, 25);
	add_class_rating(10, 25);
	add_class_rating(11, 25);
	goto L85d8;
case 6:
case 7:
	add_class_rating(10, 25);
	add_class_rating(8, 10);
	add_class_rating(3, -20);
	goto L85d8;
case 8:
	add_class_rating(7, 15);
	add_class_rating(4, 20);
case 9:
	add_class_rating(3, 20);
	goto L85d8;
case 10:
	add_class_rating(12, 25);
	add_class_rating(3, 15);
	goto L85d8;
	}
L85d8:
	if ((unsigned)g559f > 15) {
	add_class_rating(6, 5);
	add_class_rating(11, 5);
	}
	if ((unsigned)g559d > 15) {
	add_class_rating(9, 5);
	}
	if ((unsigned)g55a1 > 15) {
	add_class_rating(7, 5);
	add_class_rating(4, 5);
	}
	for (l2 = 0; l2 < 2; l2++) {
	g556d[(l2 << 4)] = 0;
	g556c[(l2 << 4)] = 0;
	for (l4 = 0; l4 < 8; l4++) {
	g5564[((l2 << 4) + l4)] = 0;
	}
	g556e[(l2 << 4)] = 0;
	g5562[(l2 << 4)] = 2;
	g5563[(l2 << 4)] = 2;
	*(int *)((char *)g5560 + (l2 << 4)) = 0;
	g556f[(l2 << 4)] = 32;
	}
	l2 = ((unsigned char)g55ad / 5);
	l4 = ((unsigned char)g55c1 / 5);
	if ((char_class == 13) || (char_class == 12)) {
	g5563[0] = (char)((l2 / 3) + 2);
	g556f[0] |= 64;
	g556a = (char)(l4 + 5);
	} else {
	if (l2 > 0) {
	g5563[0] = (char)((l2 / 4) + 1);
	g556f[0] |= 64;
	}
	if (l4 > 0) {
	g556a = *(char *)&l4;
	}
	}
	if ((unsigned)char_stats > 15) {
	g5560[0]++;
	}
	if ((unsigned)char_stats > 17) {
	g5560[0]++;
	}
	if ((unsigned)g55a0 > 15) {
	g556e[0] += -5;
	}
	if ((unsigned)g55a0 > 17) {
	g556e[0] += -5;
	g557e += -5;
	}
	g55d0[0] = 10;
	if ((unsigned)g55a1 > 15) {
	g55d0[0]--;
	}
	if ((unsigned)g55a1 > 17) {
	g55d0[0]--;
	}
	if (char_race == 5) {
	g55d0[0] -= 2;
	}
	g55d2 = 0;
	for (l2 = 3; l2 < 8; l2++) {
	g55d0[l2] = g55d0[0];
	}
}
