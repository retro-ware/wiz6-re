#asm
	extrn movmem_:near
#endasm
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
L4d73:
	((char *)monster_groups[rdi] + rsi)[396] = 0;
	rsi++;
	if (rsi < 6) goto L4d73;
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
#asm
	db 0b8h,00ah,000h,050h,08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,087h,0a8h,043h,003h,0c2h
	db 005h,00eh,000h,050h,0b8h,0b0h,001h,0f7h,0eeh,005h,00ah,045h,050h
	call movmem_
	db 083h,0c4h,006h
#endasm
	((char *)monster_groups[rdi] + (44 * rsi))[35] = g458c[(432 * rsi)];
	((char *)monster_groups[rdi] + (44 * rsi))[42] = -1;
	rsi++;
L4ef6:
	if (rsi < party_count) goto L4dbe;
}
