extern char g4500[];
extern char g4504[];
extern char g4515[];
extern char g4516[];
extern char g4517[];
extern char g451a[];
extern char g4597[];
extern char pc_class[];
extern char pc_skills[];
extern char spell_table[];
extern int pc_level[];
extern int pc_spell_pts_max[];
ff201(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	int l22;
	l4 = (unsigned char)g4515[(432 * p4)];
	l6 = (unsigned char)g4516[(432 * p4)];
	l8 = (unsigned char)g4517[(432 * p4)];
	l10 = (unsigned char)g451a[(432 * p4)];
	switch ((unsigned char)pc_class[(432 * p4)]) {
case 1:
	l12 = ((l4 + l6) / 2);
	l18 = 0;
	l20 = 28;
	l22 = 1;
	goto Lf413;
case 2:
	l12 = ((l6 + l8) / 2);
	l18 = 1;
	l20 = 26;
	l22 = 1;
	goto Lf413;
case 4:
	l12 = ((l4 + l6) / 2);
	l18 = 2;
	l20 = 25;
	l22 = 3;
	goto Lf413;
case 5:
	l12 = ((l4 + l6) / 2);
	l18 = 2;
	l20 = 25;
	l22 = 1;
	goto Lf413;
case 6:
	l12 = ((l4 + l6) / 2);
	l18 = 0;
	l20 = 28;
	l22 = 3;
	goto Lf413;
case 7:
	l12 = ((l4 + l6) / 2);
	l18 = 3;
	l20 = 27;
	l22 = 1;
	goto Lf413;
case 8:
	l12 = ((l6 + l8) / 2);
	l18 = 1;
	l20 = 26;
	l22 = 3;
	goto Lf413;
case 9:
	l12 = ((l4 + l6) / 2);
	l18 = (*(int *)((char *)pc_level + (432 * p4)) % 2);
	l20 = (l18 == 0 ? (l20 = 28) : 26);
	l22 = 1;
	goto Lf413;
case 10:
	l12 = ((l10 + l6) / 2);
	l18 = 1;
	l20 = 26;
	l22 = 3;
	goto Lf413;
case 11:
	l12 = ((l4 + l6) / 2);
	l18 = 0;
	l20 = 28;
	l22 = 3;
	goto Lf413;
case 12:
	l12 = ((l4 + l6) / 2);
	l18 = 3;
	l20 = 27;
	l22 = 3;
	goto Lf413;
case 13:
	l12 = ((l4 + l6) / 2);
	l18 = 2;
	l20 = 25;
	l22 = 5;
	goto Lf413;
default:
	l22 = 0;
	goto Lf413;
	}
Lf413:
	if (l22) goto Lf41d;
	return;
Lf41d:
	if (*(int *)((char *)pc_level + (432 * p4)) < l22) goto Lf565;
	g4500[((432 * p4) + l18)]++;
	l2 = 0;
Lf43d:
	l16 = 0;
	if (*(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2))) <= 0) goto Lf49d;
	l4 = 0;
Lf45f:
	if (((unsigned char)spell_table[(l4 * 6)] == l2) && (test_bit(((432 * p4) + 17776), l4) == 1)) {
	l16++;
	}
	l4++;
	if (l4 < 82) goto Lf45f;
Lf49d:
	if (l16 <= 0) goto Lf557;
	l14 = 0;
	if (l12 > 13) {
	l14++;
	}
	if (l12 > 16) {
	l14++;
	}
	if (*(int *)((char *)pc_level + (432 * p4)) >= (unsigned char)g4597[(432 * p4)]) goto Lf4e6;
	(*(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2))))++;
	goto Lf557;
Lf4e6:
	*(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2))) = ((((random(((unsigned char)pc_skills[((432 * p4) + l20)] / 20)) + *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)))) + (unsigned char)g4504[((432 * p4) + l2)]) + (l16 << 1)) + l14);
Lf557:
	l2++;
	if (l2 < 6) goto Lf43d;
Lf565:
	return;
}
