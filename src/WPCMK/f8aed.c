extern char char_class;
extern char char_race;
extern char char_stats;
extern char g559f;
extern char g5616;
extern char g5617;
extern int char_carry_capacity;
extern int char_hp;
extern int char_hp_max;
extern int char_load;
extern int char_stamina;
extern int char_stamina_max;
extern long char_age_days;
init_hp_stamina()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	g5616 = 1;
	g5617 = 10;
	char_age_days = (long)(random(1000) + 6570);
	l8 = (unsigned char)char_stats;
	l10 = (unsigned char)g559f;
	switch ((unsigned char)char_class) {
case 0:
	l2 = (random(5) + 6);
	init_class_skills(4, 0, 0);
	goto L8d43;
case 1:
	l2 = (random(3) + 2);
	init_class_skills(1, 0, 3);
	goto L8d43;
case 2:
	l2 = (random(4) + 4);
	init_class_skills(1, 0, 3);
	goto L8d43;
case 3:
	l2 = (random(4) + 3);
	init_class_skills(1, 2, 1);
	goto L8d43;
case 4:
	l2 = ((random(4) + random(4)) + 6);
	init_class_skills(2, 2, 0);
	goto L8d43;
case 5:
	l2 = (random(4) + 3);
	init_class_skills(0, 1, 3);
	goto L8d43;
case 6:
	l2 = (random(4) + 2);
	init_class_skills(1, 2, 1);
	goto L8d43;
case 7:
	l2 = (random(3) + 3);
	init_class_skills(0, 1, 3);
	goto L8d43;
case 8:
	l2 = (random(5) + 5);
	init_class_skills(3, 1, 0);
	goto L8d43;
case 9:
	l2 = (random(4) + 3);
	init_class_skills(0, 0, 4);
	goto L8d43;
case 10:
	l2 = (random(7) + 8);
	init_class_skills(2, 1, 2);
	goto L8d43;
case 11:
	l2 = ((random(4) + random(4)) + 6);
	init_class_skills(2, 1, 1);
	goto L8d43;
case 12:
	l2 = (random(4) + 4);
	init_class_skills(1, 2, 1);
	goto L8d43;
case 13:
	l2 = (random(5) + 4);
	init_class_skills(2, 2, 1);
	goto L8d43;
	}
L8d43:
	l4 = (((l10 << 1) + l8) * 3);
	l6 = (((l8 << 1) + l10) * 3);
	if (l10 >= 8) goto L8d6e;
	l2--;
L8d6e:
	if (l10 <= 15) goto L8d7d;
	l2++;
	l4 += l10;
L8d7d:
	if (l10 <= 17) goto L8d8c;
	l2++;
	l4 += l10;
L8d8c:
	if (l8 <= 15) goto L8d98;
	l6 += l8;
L8d98:
	if (l8 <= 17) goto L8da4;
	l6 += l8;
L8da4:
	char_hp = l2;
	char_hp_max = char_hp;
	char_stamina = l4;
	char_stamina_max = char_stamina;
	char_load = 0;
	char_carry_capacity = (l6 * 15);
	if (char_race != 5) goto L8ddc;
	char_carry_capacity = ((char_carry_capacity << 1) / 3);
L8ddc:
	;
}
