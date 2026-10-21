extern char g450a[];
extern char g458c[];
extern char g4eda;
extern char pc_condition[];
extern int g4ed8;
extern int monster_groups[];
extern int party_count;
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_level[];
extern int pc_stamina[];
extern int pc_stamina_max[];
/* Copy the party members into combat group 0. */
fill_party_group()
{
	register int rsi;
	register int rdi;
	rdi = 0;
	(*(char **)((char *)monster_groups + (rdi << 1)))[413] = *(char *)&party_count;
	rsi = rdi;
	do {
	((char *)monster_groups[rdi] + rsi)[396] = 0;
	rsi++;
	} while (rsi < 6);
	if (g4ed8 > 0) {
	(*(char **)((char *)monster_groups + (rdi << 1)))[400] = g4eda;
	}
	for (rsi = 0; rsi < 4; rsi++) {
	((char *)monster_groups[rdi] + rsi)[402] = 0;
	}
	rsi = 0;
	goto L4ef6;
L4dbe:
	*(int *)((char *)monster_groups[rdi] + (44 * rsi)) = *(int *)((char *)pc_level + (432 * rsi));
	*(int *)(((char *)monster_groups[rdi] + (44 * rsi)) + 4) = *(int *)((char *)pc_hp_max + (432 * rsi));
	*(int *)(((char *)monster_groups[rdi] + (44 * rsi)) + 2) = *(int *)((char *)pc_hp + (432 * rsi));
	*(int *)(((char *)monster_groups[rdi] + (44 * rsi)) + 8) = *(int *)((char *)pc_stamina_max + (432 * rsi));
	*(int *)(((char *)monster_groups[rdi] + (44 * rsi)) + 6) = *(int *)((char *)pc_stamina + (432 * rsi));
	((char *)monster_groups[rdi] + (44 * rsi))[34] = pc_condition[(432 * rsi)];
	movmem(g450a + (432 * rsi), ((char *)monster_groups[rdi] + (44 * rsi)) + 14, 10);
	((char *)monster_groups[rdi] + (44 * rsi))[35] = g458c[(432 * rsi)];
	((char *)monster_groups[rdi] + (44 * rsi))[42] = -1;
	rsi++;
L4ef6:
	if (rsi < party_count) goto L4dbe;
}
