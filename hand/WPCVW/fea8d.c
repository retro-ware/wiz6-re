extern char g4515[];
extern char g4516[];
extern char g4517[];
extern char g4518[];
extern char g4519[];
extern char pc_class[];
extern unsigned char pc_skill_points[];
roll_skill_points(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	l2 = (unsigned char)g4515[(432 * p4)];
	l4 = (unsigned char)g4516[(432 * p4)];
	l10 = (unsigned char)g4517[(432 * p4)];
	l6 = (unsigned char)g4518[(432 * p4)];
	l8 = (unsigned char)g4519[(432 * p4)];
	pc_skill_points[(432 * p4)] = (char)(random(6) + 5);
	l12 = 0;
	switch ((unsigned char)pc_class[(432 * p4)]) {
case 1:
	l12 = raise_skill(p4, l2, 3, 3, 28);
	goto Lecf6;
case 2:
	l12 = raise_skill(p4, l4, 3, 3, 26);
	goto Lecf6;
case 3:
	l12 = raise_skill(p4, ((l2 + l6) / 2), 4, 3, 15);
	l12 += raise_skill(p4, ((l6 + l8) / 2), 4, 2, 14);
	goto Lecf6;
case 4:
	l12 = raise_skill(p4, ((l6 + l8) / 2), 4, 2, 7);
	l12 += raise_skill(p4, ((l2 + l10) / 2), 4, 2, 11);
	goto Lecf6;
case 6:
	l12 = raise_skill(p4, ((l2 + l6) / 2), 3, 3, 12);
	goto Lecf6;
case 5:
	l12 = raise_skill(p4, l2, 3, 3, 25);
	goto Lecf6;
case 7:
	l12 = raise_skill(p4, ((l2 + l4) / 2), 3, 3, 27);
	goto Lecf6;
case 9:
	l12 = raise_skill(p4, l2, 4, 2, 28);
	l12 += raise_skill(p4, l4, 4, 2, 26);
	goto Lecf6;
case 11:
	l12 = raise_skill(p4, ((l6 + l8) / 2), 3, 3, 1);
	goto Lecf6;
case 13:
	l12 = raise_skill(p4, ((l6 + l8) / 2), 4, 3, 9);
	l12 += raise_skill(p4, ((l6 + l8) / 2), 4, 2, 16);
	goto Lecf6;
	}
Lecf6:
	if ((unsigned char)pc_skill_points[(432 * p4)] > l12) {
	pc_skill_points[(432 * p4)] -= l12;
	} else {
	pc_skill_points[(432 * p4)] = 0;
	}
	;
}
