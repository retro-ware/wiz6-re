extern char g0190[];
extern int g4ed8;
extern int g4eda;
extern int monster_groups[];
/* Count down timed effects of all combatants after a round. */
tick_combat_effects()
{
	int l2;
	int l4;
	int l6;
	int l8;
	l2 = 0;
L711f:
	l4 = 0;
L7124:
	l8 = (unsigned char)((char *)monster_groups[l2] + l4)[396];
	if (l8 <= 0) goto L71de;
	switch (l4) {
case 0:
	l6 = (l8 / 10);
	goto L71ad;
case 1:
	l6 = (l8 / 10);
	goto L71ad;
case 2:
	l6 = (l8 / 12);
	goto L71ad;
case 3:
	l6 = (l8 / 12);
	goto L71ad;
case 4:
	l6 = (l8 / 20);
	goto L71ad;
case 5:
	l6 = 1;
	goto L71ad;
	}
L71ad:
	if (l6 < 1) {
	l6 = 1;
	}
	l8 -= l6;
	if (l8 < 0) {
	l8 = 0;
	}
	((char *)monster_groups[l2] + l4)[396] = *(char *)&l8;
L71de:
	l4++;
	if (l4 < 6) goto L7124;
	l4 = 0;
L71f1:
	if ((unsigned)((char *)monster_groups[l2] + l4)[402] > 0) {
	((char *)monster_groups[l2] + l4)[402]--;
	}
	l4++;
	if (l4 < 4) goto L71f1;
	l2++;
	if (l2 < 7) goto L711f;
	if (g4ed8 > 0) {
	g4eda = (unsigned char)g0190[monster_groups[0]];
	}
	if (g4eda <= 0) {
	g4ed8 = 0;
	g4eda = 0;
	}
}
