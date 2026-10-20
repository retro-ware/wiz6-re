extern char g44da[];
extern char g44db[];
extern char g44dc[];
extern char g44e2[];
extern char g44e4[];
extern char g44e5[];
extern char g44e6[];
extern char g44e7[];
extern char g44f6[];
extern char g4515[];
extern char g4517[];
extern char g4518[];
extern char g4519[];
extern char g4525[];
extern char g452c[];
extern char g4539[];
extern char g4548[];
extern char g4549[];
extern char g454a[];
extern char pc_class[];
extern char pc_race[];
extern char pc_stats[];
extern int g44d8[];
extern int pc_level[];
fcdb3(p4)
{
	int l2;
	int l4;
	switch ((unsigned char)pc_class[(432 * p4)]) {
case 0:
	fcc36(p4, 20885, 20900);
	goto Lceb6;
case 4:
case 8:
	fcc36(p4, 20915, 20930);
	goto Lceb6;
case 10:
	fcc36(p4, 20945, 20960);
	goto Lceb6;
case 11:
	fcc36(p4, 20975, 20990);
	goto Lceb6;
case 13:
	fcc36(p4, 21005, 21020);
	goto Lceb6;
case 1:
case 5:
	fcc36(p4, 21035, 21050);
	goto Lceb6;
case 7:
	fcc36(p4, 21065, 21080);
	goto Lceb6;
case 2:
case 9:
	fcc36(p4, 21095, 21110);
	goto Lceb6;
case 12:
	fcc36(p4, 21125, 21140);
	goto Lceb6;
case 3:
case 6:
	fcc36(p4, 21155, 21170);
	goto Lceb6;
	}
Lceb6:
	switch ((unsigned char)pc_race[(432 * p4)]) {
case 0:
	add_skill_bonus(p4, 11, 20);
	goto Ld04f;
case 2:
case 4:
	add_skill_bonus(p4, 6, (((unsigned char)g4517[(432 * p4)] / 5) * 5));
case 3:
	add_skill_bonus(p4, 12, (((unsigned char)g4517[(432 * p4)] / 5) * 5));
	goto Ld04f;
case 1:
	add_skill_bonus(p4, 9, 20);
	goto Ld04f;
case 5:
	add_skill_bonus(p4, 12, 25);
	add_skill_bonus(p4, 4, 25);
	add_skill_bonus(p4, 7, 25);
	add_skill_bonus(p4, 10, 25);
	add_skill_bonus(p4, 11, 25);
	goto Ld04f;
case 6:
case 7:
	add_skill_bonus(p4, 10, 25);
	add_skill_bonus(p4, 8, 10);
	add_skill_bonus(p4, 3, -20);
	goto Ld04f;
case 8:
	add_skill_bonus(p4, 7, 15);
	add_skill_bonus(p4, 4, 20);
case 9:
	add_skill_bonus(p4, 3, 20);
	goto Ld04f;
case 10:
	add_skill_bonus(p4, 12, 25);
	add_skill_bonus(p4, 3, 15);
	goto Ld04f;
	}
Ld04f:
	if ((unsigned)g4517[(432 * p4)] > 15) {
	add_skill_bonus(p4, 6, 5);
	add_skill_bonus(p4, 11, 5);
	}
	if ((unsigned)g4515[(432 * p4)] > 15) {
	add_skill_bonus(p4, 9, 5);
	}
	if ((unsigned)g4519[(432 * p4)] > 15) {
	add_skill_bonus(p4, 7, 5);
	add_skill_bonus(p4, 4, 5);
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
	goto Ld161;
case 1:
case 5:
case 7:
case 9:
	fccd2(p4, 2, 12, 12, 7, 7);
	goto Ld161;
case 2:
case 3:
case 6:
	fccd2(p4, 3, 10, 8, 7, 5);
	goto Ld161;
	}
Ld161:
	for (l2 = 0; l2 < 2; l2++) {
	g44e5[((432 * p4) + (l2 << 4))] = 0;
	g44e4[((432 * p4) + (l2 << 4))] = 0;
	for (l4 = 0; l4 < 8; l4++) {
	g44dc[(((432 * p4) + (l2 << 4)) + l4)] = 0;
	}
	g44e6[((432 * p4) + (l2 << 4))] = 0;
	g44da[((432 * p4) + (l2 << 4))] = 2;
	g44db[((432 * p4) + (l2 << 4))] = 2;
	*(int *)((char *)g44d8 + ((432 * p4) + (l2 << 4))) = 0;
	g44e7[((432 * p4) + (l2 << 4))] = 32;
	}
	l2 = ((unsigned char)g4525[(432 * p4)] / 5);
	l4 = ((unsigned char)g4539[(432 * p4)] / 5);
	if ((pc_class[(432 * p4)] == 13) || (pc_class[(432 * p4)] == 12)) {
	g44db[(432 * p4)] = (char)((l2 / 3) + 2);
	g44e7[(432 * p4)] |= 64;
	g44e2[(432 * p4)] = (char)(l4 + 5);
	} else {
	if (l2 > 0) {
	g44db[(432 * p4)] = (char)((l2 / 4) + 1);
	g44e7[(432 * p4)] |= 64;
	}
	if (l4 > 0) {
	g44e2[(432 * p4)] = *(char *)&l4;
	}
	}
	if ((unsigned)pc_stats[(432 * p4)] > 15) {
	(*(int *)((char *)g44d8 + (432 * p4)))++;
	}
	if ((unsigned)pc_stats[(432 * p4)] > 17) {
	(*(int *)((char *)g44d8 + (432 * p4)))++;
	}
	if ((unsigned)g4518[(432 * p4)] > 15) {
	g44e6[(432 * p4)] += -5;
	}
	if ((unsigned)g4518[(432 * p4)] > 17) {
	g44e6[(432 * p4)] += -5;
	g44f6[(432 * p4)] += -5;
	}
	g4548[(432 * p4)] = 10;
	if ((unsigned)g4519[(432 * p4)] > 15) {
	g4548[(432 * p4)]--;
	}
	if ((unsigned)g4519[(432 * p4)] > 17) {
	g4548[(432 * p4)]--;
	}
	if (pc_race[(432 * p4)] == 5) {
	g4548[(432 * p4)] -= 2;
	}
	if ((pc_class[(432 * p4)] == 13) || (pc_class[(432 * p4)] == 12)) {
	l2 = (*(int *)((char *)pc_level + (432 * p4)) <= 20 ? (*(int *)((char *)pc_level + (432 * p4)) / 2) : 20);
	l2 += ((unsigned char)g452c[(432 * p4)] / 10);
	g4548[(432 * p4)] = (char)(g4548[(432 * p4)] - l2);
	}
	g4549[(432 * p4)] = 0;
	g454a[(432 * p4)] = 0;
	for (l2 = 3; l2 < 8; l2++) {
	g4548[((432 * p4) + l2)] = g4548[(432 * p4)];
	}
}
