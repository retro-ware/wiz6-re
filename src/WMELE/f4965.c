extern char cfg_level;
extern int cur_sound;
extern int g4338;
extern int game_state_arg;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
struct s4 { int w[2]; };
/* Read monster record mon into group n, roll its members and maybe chain a companion group. */
generate_monster_group(mon, n)
{
	int i;
	int l4;
	monster_group_count++;
	access_scenario_record(4, group_monster_rec[n], mon, 0);
	(*(char **)((char *)monster_groups + (n << 1)))[410] = *(char *)&mon;
	(*(char **)((char *)monster_groups + (n << 1)))[411] = (char)f4858((unsigned char)(*(char **)((char *)group_monster_rec + (n << 1)))[209]);
	if (n != 1) goto L49ef;
	if ((unsigned)(*(char **)((char *)group_monster_rec + (n << 1)))[210] <= 0) goto L49e9;
	load_sound_mele((unsigned char)(*(char **)((char *)group_monster_rec + (n << 1)))[210]);
	goto L49ef;
L49e9:
	cur_sound = -1;
L49ef:
	switch ((unsigned char)cfg_level) {
case 1:
	if (*(int *)((*(char **)((char *)group_monster_rec + (n << 1))) + 116) > 0) {
	(*(int *)((*(char **)((char *)group_monster_rec + (n << 1))) + 116))--;
	}
	goto L4a26;
case 2:
	(*(int *)((*(char **)((char *)group_monster_rec + (n << 1))) + 116))++;
	goto L4a26;
	}
L4a26:
	(*(char **)((char *)monster_groups + (n << 1)))[413] = (char)roll_dice(*(struct s4 *)((char *)group_monster_rec[n] + 116));
	if ((unsigned)(*(char **)((char *)monster_groups + (n << 1)))[413] < 1) {
	(*(char **)((char *)monster_groups + (n << 1)))[413] = 1;
	}
	if ((unsigned)(*(char **)((char *)monster_groups + (n << 1)))[413] > 9) {
	(*(char **)((char *)monster_groups + (n << 1)))[413] = 9;
	}
	(*(char **)((char *)monster_groups + (n << 1)))[412] = 1;
	for (i = 0; i < 6; i++) {
	((char *)monster_groups[n] + i)[396] = 0;
	}
	for (i = 0; i < 4; i++) {
	((char *)monster_groups[n] + i)[402] = 0;
	}
	if (cfg_level == 2) {
	(*(char **)((char *)group_monster_rec + (n << 1)))[122]++;
	}
	i = 0;
	goto L4c85;
L4af9:
	*(int *)((char *)monster_groups[n] + (44 * i)) = (unsigned char)(*(char **)((char *)group_monster_rec + (n << 1)))[122];
	*(int *)(((char *)monster_groups[n] + (44 * i)) + 4) = roll_dice(*(struct s4 *)((char *)group_monster_rec[n] + 120));
	*(int *)(((char *)monster_groups[n] + (44 * i)) + 2) = *(int *)(((char *)monster_groups[n] + (44 * i)) + 4);
	*(int *)(((char *)monster_groups[n] + (44 * i)) + 8) = roll_dice(*(struct s4 *)((char *)group_monster_rec[n] + 124));
	*(int *)(((char *)monster_groups[n] + (44 * i)) + 6) = *(int *)(((char *)monster_groups[n] + (44 * i)) + 8);
	((char *)monster_groups[n] + (44 * i))[42] = -1;
	switch ((unsigned char)cfg_level) {
case 1:
	((char *)monster_groups[n] + (44 * i))[38] = 2;
	((char *)monster_groups[n] + (44 * i))[39] = 2;
	((char *)monster_groups[n] + (44 * i))[41] = -5;
	goto L4c82;
case 2:
	((char *)monster_groups[n] + (44 * i))[38] = -2;
	((char *)monster_groups[n] + (44 * i))[39] = -2;
	((char *)monster_groups[n] + (44 * i))[41] = 5;
	goto L4c82;
	}
L4c82:
	i++;
L4c85:
	if ((unsigned char)(*(char **)((char *)monster_groups + (n << 1)))[413] > i) goto L4af9;
	i = (((game_state_arg + 1) / 2) + 1);
	if (g4338 > 0) {
	i++;
	}
	i = (i < 5 ? i : 5);
	l4 = (cfg_level != 1 ? (cfg_level == 2 ? 75 : 100) : 150);
	if (n >= i) goto L4d55;
	i = 0;
	mon = -1;
	do {
	if (((unsigned)((char *)group_monster_rec[n] + i)[166] > 0) && (random(l4) < (unsigned char)((char *)group_monster_rec[n] + i)[166])) {
	mon = (unsigned char)((char *)group_monster_rec[n] + i)[164];
	}
	i++;
	} while ((i < 2) && (mon == -1));
	if (mon == -1) goto L4d55;
	generate_monster_group(mon, (n + 1));
L4d55:
	;
}
