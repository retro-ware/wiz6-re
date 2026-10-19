extern char char_class;
extern char char_race;
extern char g5589;
extern char g558a;
extern char g558b;
extern char g559f;
extern char spell_picks_left;
init_class_ratings()
{
	int l2;
	int l4;
	l2 = (unsigned char)g559f;
	l4 = 0;
	if (l2 <= 15) goto L8e62;
	l4++;
L8e62:
	if (char_race != 5) goto L8e6c;
	l4++;
L8e6c:
	if (char_race != 6) goto L8e76;
	l4--;
L8e76:
	switch ((unsigned char)char_class) {
case 0:
case 3:
	set_six_ratings((l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1));
	break;
case 1:
	spell_picks_left = 2;
	set_six_ratings((l4 + 3), (l4 + 3), (l4 + 2), (l4 + 2), (l4 + 2), (l4 + 3));
	break;
case 2:
	g5589 = 2;
	set_six_ratings((l4 + 2), (l4 + 2), (l4 + 3), (l4 + 3), (l4 + 2), (l4 + 3));
	break;
case 4:
	set_six_ratings((l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1));
	break;
case 5:
	g558a = 2;
	set_six_ratings((l4 + 3), (l4 + 2), (l4 + 3), (l4 + 3), (l4 + 2), (l4 + 2));
	break;
case 6:
	set_six_ratings((l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1));
	break;
case 7:
	g558b = 2;
	set_six_ratings((l4 + 2), (l4 + 2), (l4 + 2), (l4 + 2), (l4 + 4), (l4 + 2));
	break;
case 8:
	set_six_ratings((l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1));
	break;
case 9:
	spell_picks_left = 1;
	g5589 = 1;
	set_six_ratings((l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 3), (l4 + 3));
	break;
case 10:
	set_six_ratings((l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1));
	break;
case 11:
	set_six_ratings((l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1));
	break;
case 12:
	set_six_ratings((l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1));
	break;
case 13:
	set_six_ratings((l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1), (l4 + 1));
	break;
	}
}
