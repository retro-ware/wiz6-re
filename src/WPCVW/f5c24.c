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
extern int g44d8[];
clear_hand_attack(p4, p6)
{
	int l2;
	int l4;
	g44e5[((432 * p4) + (p6 << 4))] = 0;
	g44e4[((432 * p4) + (p6 << 4))] = 0;
	for (l4 = 0; l4 < 8; l4++) {
	g44dc[(((432 * p4) + (p6 << 4)) + l4)] = 0;
	}
	g44e6[((432 * p4) + (p6 << 4))] = 0;
	g44da[((432 * p4) + (p6 << 4))] = 2;
	g44db[((432 * p4) + (p6 << 4))] = 2;
	*(int *)((char *)g44d8 + ((432 * p4) + (p6 << 4))) = 0;
	g44e7[((432 * p4) + (p6 << 4))] = 32;
	l2 = ((unsigned char)g4525[(432 * p4)] / 5);
	l4 = ((unsigned char)g4539[(432 * p4)] / 5);
	if ((pc_class[(432 * p4)] != 13) && (pc_class[(432 * p4)] != 12)) goto L5d00;
	g44db[((432 * p4) + (p6 << 4))] = (char)((l2 / 3) + 2);
	g44e7[((432 * p4) + (p6 << 4))] |= 64;
	g44e2[((432 * p4) + (p6 << 4))] = (char)(l4 + 5);
	goto L5d56;
L5d00:
	if (l2 <= 0) goto L5d31;
	g44db[((432 * p4) + (p6 << 4))] = (char)((l2 / 4) + 1);
	g44e7[((432 * p4) + (p6 << 4))] |= 64;
L5d31:
	if (l4 <= 0) goto L5d56;
	g44e2[((432 * p4) + (p6 << 4))] = *(char *)&l4;
L5d56:
	;
}
