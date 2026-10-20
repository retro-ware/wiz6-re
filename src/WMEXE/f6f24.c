extern char *monster_groups;
extern char g44da[];
extern char g44db[];
extern char g44dc[];
extern char g44e2[];
extern char g44e4[];
extern char g44e5[];
extern char g44e6[];
extern char g44e7[];
extern char g4525[];
extern char g4539[];
extern char pc_class[];
extern int g435c;
extern int g44d8[];
clear_hand_attack_x(p4)
{
	int l2;
	int l4;
	g44e5[((432 * g435c) + (p4 << 4))] = 0;
	g44e4[((432 * g435c) + (p4 << 4))] = 0;
	for (l4 = 0; l4 < 8; l4++) {
	g44dc[(((432 * g435c) + (p4 << 4)) + l4)] = 0;
	}
	g44e6[((432 * g435c) + (p4 << 4))] = 0;
	g44da[((432 * g435c) + (p4 << 4))] = 2;
	g44db[((432 * g435c) + (p4 << 4))] = 2;
	*(int *)((char *)g44d8 + ((432 * g435c) + (p4 << 4))) = 0;
	g44e7[((432 * g435c) + (p4 << 4))] = 32;
	l2 = ((unsigned char)g4525[(432 * g435c)] / 5);
	l4 = ((unsigned char)g4539[(432 * g435c)] / 5);
	if ((pc_class[(432 * g435c)] == 13) || (pc_class[(432 * g435c)] == 12)) {
	g44db[((432 * g435c) + (p4 << 4))] = (char)((l2 / 3) + 2);
	g44e7[((432 * g435c) + (p4 << 4))] |= 64;
	g44e2[((432 * g435c) + (p4 << 4))] = (char)(l4 + 5);
	} else {
	if (l2 > 0) {
	g44db[((432 * g435c) + (p4 << 4))] = (char)((l2 / 4) + 1);
	g44e7[((432 * g435c) + (p4 << 4))] |= 64;
	}
	if (l4 > 0) {
	g44e2[((432 * g435c) + (p4 << 4))] = *(char *)&l4;
	}
	}
	(monster_groups + (44 * g435c))[30] = 10;
	for (l2 = 0; l2 < 4; l2++) {
	(monster_groups + ((44 * g435c) + l2))[24] = 0;
	}
}
