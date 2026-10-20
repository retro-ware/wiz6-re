extern char g4504[];
extern char g450a[];
extern char g450c[];
extern char g450f[];
extern char g458a[];
extern char g458b[];
extern char g458c[];
extern char pc_condition[];
extern char pc_sex[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
heal_member(p4, p6, p8, p10, p12)
{
	char x0[2];
	int l4;
	int l6;
	if ((unsigned)pc_condition[(432 * p4)] >= 3) goto L63f0;
	*(int *)((char *)pc_hp + (432 * p4)) += (((random(p6) + ((unsigned char)g458a[(432 * p4)] * p10)) - ((unsigned char)g458b[(432 * p4)] * p10)) - ((unsigned char)g458c[(432 * p4)] * p10));
	if (*(int *)((char *)pc_hp + (432 * p4)) > *(int *)((char *)pc_hp_max + (432 * p4))) {
	*(int *)((char *)pc_hp + (432 * p4)) = *(int *)((char *)pc_hp_max + (432 * p4));
	}
	if (*(int *)((char *)pc_hp + (432 * p4)) > 0) goto L628b;
	*(int *)((char *)pc_hp + (432 * p4)) = 0;
	*(int *)((char *)pc_stamina + (432 * p4)) = 0;
	pc_condition[(432 * p4)] = 3;
	play_sound(((unsigned char)pc_sex[(432 * p4)] + 8));
	goto L63e9;
L628b:
	if (*(int *)((char *)pc_stamina + (432 * p4)) <= 0) {
	*(int *)((char *)pc_stamina + (432 * p4)) = 0;
	g450c[(432 * p4)] = (char)(random(6) + 6);
	}
	if (p8 <= 0) goto L631f;
	l6 = (int)(((long)*(int *)((char *)pc_stamina_max + (432 * p4)) * p8) / 100L);
	*(int *)((char *)pc_stamina + (432 * p4)) += ((random((l6 / 2)) + (l6 / 2)) + 1);
	if (*(int *)((char *)pc_stamina + (432 * p4)) <= *(int *)((char *)pc_stamina_max + (432 * p4))) goto L631f;
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((char *)pc_stamina_max + (432 * p4));
L631f:
	l4 = 0;
L6324:
	if (((l6 = (unsigned char)g450a[((432 * p4) + l4)]) > 0) && (l6 != 255)) {
	l6 -= p10;
	if (l6 < 0) {
	l6 = 0;
	}
	g450a[((432 * p4) + l4)] = *(char *)&l6;
	}
	l4++;
	if (l4 < 10) goto L6324;
	if ((!g450f[(432 * p4)]) || (!g458c[(432 * p4)])) {
	g450f[(432 * p4)] = 0;
	g458c[(432 * p4)] = 0;
	}
	if (p12 <= 0) goto L63e9;
	l4 = 0;
L6390:
	if ((unsigned)g4504[((432 * p4) + l4)] < 1) {
	g4504[((432 * p4) + l4)] = 1;
	}
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l4 << 2))) += random(((unsigned char)g4504[((432 * p4) + l4)] + 1));
	if (*(int *)((char *)pc_spell_pts + ((432 * p4) + (l4 << 2))) > *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l4 << 2)))) {
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l4 << 2))) = *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l4 << 2)));
	}
	l4++;
	if (l4 < 6) goto L6390;
L63e9:
	draw_member_status_m(p4);
L63f0:
	;
}
