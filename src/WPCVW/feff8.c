extern char g4518[];
extern char g4519[];
extern char g452c[];
extern char g4548[];
extern char g4596[];
extern char g4597[];
extern char pc_class[];
extern char pc_race[];
extern int pc_level[];
feff8(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	if (*(int *)((char *)pc_level + (432 * p4)) <= 20) goto Lf011;
	return;
Lf011:
	l6 = (unsigned char)g4518[(432 * p4)];
	l4 = 0;
	switch ((unsigned char)pc_class[(432 * p4)]) {
case 0:
case 4:
case 8:
case 10:
case 12:
	l4 = (random(4) + 2);
	goto Lf08b;
case 1:
case 5:
case 7:
case 9:
	l4 = (random(3) + 1);
	goto Lf08b;
case 2:
case 3:
case 6:
	l4 = (random(4) + 1);
	goto Lf08b;
case 11:
case 13:
	l4 = (random(4) + 3);
	goto Lf08b;
	}
Lf08b:
	if (l6 < 8) {
	l4--;
	}
	if (*(int *)((char *)pc_level + (432 * p4)) < (unsigned char)g4597[(432 * p4)]) {
	l4 = 0;
	}
	g4596[(432 * p4)] -= l4;
	if (g4596[(432 * p4)] < 0) {
	g4596[(432 * p4)] = 0;
	}
	switch ((unsigned char)pc_class[(432 * p4)]) {
case 0:
case 4:
case 8:
case 10:
case 11:
case 12:
case 13:
	fccd2(p4, 4, 7, 5, 6, 3);
	goto Lf153;
case 1:
case 5:
case 7:
case 9:
	fccd2(p4, 2, 12, 12, 7, 7);
	goto Lf153;
case 2:
case 3:
case 6:
	fccd2(p4, 3, 10, 8, 7, 5);
	goto Lf153;
	}
Lf153:
	l8 = 10;
	if ((unsigned)g4519[(432 * p4)] > 15) {
	l8--;
	}
	if ((unsigned)g4519[(432 * p4)] > 17) {
	l8--;
	}
	if (pc_race[(432 * p4)] == 5) {
	l8 -= 2;
	}
	if ((pc_class[(432 * p4)] == 13) || (pc_class[(432 * p4)] == 12)) {
	l2 = (*(int *)((char *)pc_level + (432 * p4)) <= 20 ? (*(int *)((char *)pc_level + (432 * p4)) / 2) : 20);
	l2 += ((unsigned char)g452c[(432 * p4)] / 10);
	l8 -= l2;
	}
	l10 = (l8 - g4548[(432 * p4)]);
	if (!l10) goto Lf1fe;
	g4548[(432 * p4)] = *(char *)&l8;
	for (l2 = 3; l2 < 8; l2++) {
	g4548[((432 * p4) + l2)] = (char)(g4548[((432 * p4) + l2)] + l10);
	}
Lf1fe:
	return;
}
