extern char g00df[];
extern char g00e2[];
extern char g019d[];
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
/* Choose an action and target for each monster of a group (attack, spell, breath). */
choose_group_actions(group, target_group)
{
	int i;
	int l4;
	char x4[2];
	char *monster;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	int l22;
	int l24;
	int l26;
	i = 0;
	goto L8a27;
L848f:
	;
#asm
l848f:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0c8h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 087h,0a8h,043h,003h,0c1h,089h,046h,0f8h
#endasm
	l10 = ((random(10) + ((char *)monster_groups[group] + (44 * i))[41]) + (unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[211]);
	if (l10 >= 1) goto L84f0;
	l10 = 1;
L84f0:
	l12 = (l10 / (unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[213]);
	if (!((unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[220] & 2)) goto L8515;
	monster[36] = 1;
L8515:
	if ((unsigned)monster[36] <= 0) goto L854f;
	monster[37] = (char)((random((l10 / 2)) + random(20)) + (l10 / 2));
L854f:
	monster[33] = 0;
	monster[28] = (char)pick_random_row(group);
	l22 = 0;
L8568:
	monster[29] = (char)pick_random_row(group);
	l22++;
	if (monster[29] != monster[28]) goto L858b;
	if (l22 < 3) goto L8568;
L858b:
	l14 = 0;
L8590:
	if ((unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[213] <= l14) goto L85bb;
	if ((unsigned)monster[34] >= 2) goto L85bb;
	if ((unsigned)monster[17] > 0) goto L85bb;
	if ((unsigned)monster[16] <= 0) goto L85c7;
L85bb:
	(monster + l14)[24] = 0;
	goto L85d9;
L85c7:
	(monster + l14)[24] = *(char *)&l10;
	l10 -= l12;
L85d9:
	l14++;
	if (l14 < 4) goto L8590;
	l24 = -1;
	monster[31] = *(char *)&target_group;
L85f2:
	monster[32] = (char)random((unsigned char)g019d[monster_groups[target_group]]);
	if ((unsigned)((char *)monster_groups[(unsigned char)monster[31]] + ((unsigned char)monster[32] * 44))[34] >= 3) goto L85f2;
	if (random(100) >= (unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[168]) goto L878b;
	l24 = 3;
	monster[30] = 3;
	l18 = random(100);
	l22 = 5;
	l16 = 0;
	l26 = -1;
L867a:
	if (l18 >= l22) goto L8699;
	l26 = (unsigned char)((char *)group_monster_rec[group] + l16)[138];
L8699:
	l16++;
	if (l22 >= 15) goto L86a8;
	l22 += 5;
	goto L86b8;
L86a8:
	if (l22 >= 55) goto L86b4;
	l22 += 10;
	goto L86b8;
L86b4:
	l22 += 15;
L86b8:
	if (l26 == -1) goto L867a;
	if (g00e2[(l26 * 6)] != 1) goto L872d;
	if (group != 6) goto L8701;
	if (find_most_wounded(monster, 0)) goto L86ff;
	if (find_most_wounded(monster, 6)) goto L86ff;
	l24 = -1;
L86ff:
	goto L872d;
L8701:
	if (find_most_wounded(monster, group)) goto L872d;
	if (find_most_wounded(monster, (random(monster_group_count) + 1))) goto L872d;
	l24 = -1;
L872d:
	l18 = ((*(int *)monster - (unsigned char)g00df[(l26 * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0eeh,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L8764:
	;
#asm
l8764:
	db 089h,046h,0eeh
#endasm
L8767:
	if ((random(*(int *)monster) + 1) >= l18) goto L877b;
	l18--;
	goto L8767;
L877b:
	*(int *)(monster + 10) = ((l18 << 8) + l26);
L878b:
	if (l24 != -1) goto L87d5;
	if (random(100) >= (unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[170]) goto L87d5;
	l24 = 8;
	monster[30] = 8;
	*(int *)(monster + 10) = (unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[216];
L87d5:
	if (l24 != -1) goto L8958;
	l18 = 0;
	if ((unsigned)monster[34] >= 2) goto L886f;
	if (monster[17]) goto L886f;
	if (monster[16]) goto L886f;
	l20 = (unsigned char)monster[28];
	if (group != 6) goto L8816;
	l18 = 9;
	goto L886f;
L8816:
	if (group < 3) goto L8837;
	if ((unsigned)((char *)group_monster_rec[group] + (l20 << 4))[81] <= 1) goto L886f;
L8837:
	l18 = 3;
	if ((group < 3 ? 0 : 2) >= (unsigned char)((char *)group_monster_rec[group] + (l20 << 4))[81]) goto L886f;
	l18 = 6;
L886f:
	if ((unsigned char)g019d[monster_groups[target_group]] >= l18) goto L8888;
	l18 = (unsigned char)g019d[monster_groups[target_group]];
L8888:
	l16 = 0;
	l22 = 0;
	goto L88b3;
L8894:
	if ((unsigned)((char *)monster_groups[target_group] + (44 * l22))[34] >= 3) goto L88b0;
	l16++;
L88b0:
	l22++;
L88b3:
	if (l22 < l18) goto L8894;
	if (l16 <= 0) goto L8951;
	monster[30] = 0;
	monster[31] = *(char *)&target_group;
	monster[32] = (char)random(l16);
	l20 = (unsigned char)monster[28];
	if (((char *)group_monster_rec[group] + l20)[128] != 2) goto L890b;
	*(int *)(monster + 10) = 4;
	goto L894f;
L890b:
	if (((char *)group_monster_rec[group] + l20)[128] != 3) goto L892a;
	*(int *)(monster + 10) = 8;
	goto L894f;
L892a:
	*(int *)(monster + 10) = pick_random_set_bit(((group_monster_rec[group] + (l20 << 4)) + 83));
L894f:
	goto L8958;
L8951:
	monster[24] = 0;
L8958:
	*(int *)(monster + 12) = -1;
	if (monster[30]) goto L8a0a;
	l20 = (unsigned char)monster[29];
	if (group < 3) goto L8995;
	if ((unsigned)((char *)group_monster_rec[group] + (l20 << 4))[81] <= 1) goto L89fa;
L8995:
	if (((char *)group_monster_rec[group] + l20)[128] != 2) goto L89b4;
	*(int *)(monster + 12) = 4;
	goto L89f8;
L89b4:
	if (((char *)group_monster_rec[group] + l20)[128] != 3) goto L89d3;
	*(int *)(monster + 12) = 8;
	goto L89f8;
L89d3:
	*(int *)(monster + 12) = pick_random_set_bit(((group_monster_rec[group] + (l20 << 4)) + 83));
L89f8:
	goto L8a08;
L89fa:
	monster[25] = 0;
	monster[27] = 0;
L8a08:
	goto L8a24;
L8a0a:
	l4 = 1;
L8a0f:
	(monster + l4)[24] = 0;
	l4++;
	if (l4 < 4) goto L8a0f;
L8a24:
	i++;
L8a27:
	if ((unsigned char)g019d[monster_groups[group]] > i) goto L848f;
}
