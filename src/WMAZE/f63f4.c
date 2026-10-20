extern char cfg_level;
extern char g450c[];
extern char g458c[];
extern char g458e[];
extern char g458f[];
extern int g5038;
extern int game_state;
extern int party_count;
extern int pc_stamina[];
extern int pc_stamina_max[];
extern long g4f78;
extern long g4f7c;
extern long g4f80;
/* Rest the party, regenerating hp and stamina; returns 1 if interrupted by an encounter. */
rest_party()
{
	int l2;
	char x2[4];
	int l8;
	int l10;
	int l12;
	int l14;
	show_maze_message(2036);
	g5038 = 0;
	l8 = 8;
	g4f78 += (g4f80 - g4f7c);
	l10 = (int)(g4f78 / 60L);
	l12 = 0;
L643c:
	if (l10 < 4) goto L6456;
	l12++;
	l10 += -4;
	g4f78 += -240L;
	goto L643c;
L6456:
	g4f7c = g4f80;
L6464:
	if (((l8 <= 0) || (g5038)) || (game_state != 5)) goto L658a;
	for (l2 = 0; l2 < party_count; l2++) {
	g450c[(432 * l2)] = 10;
	draw_member_status_m(l2);
	}
	wait_animating_m(10);
	l8--;
	g4f80 += 60L;
	tick_effect_timers(60);
	l2 = 0;
	goto L6521;
L64cc:
	heal_member(l2, (l12 > 0 ? ((unsigned char)g458e[(432 * l2)] + 1) : 0), (unsigned char)g458f[(432 * l2)], 6, 1);
	g450c[(432 * l2)] = (char)random(5);
	if ((unsigned)g458c[(432 * l2)] > 0) {
	g458c[(432 * l2)]--;
	}
	l2++;
L6521:
	if (l2 < party_count) goto L64cc;
	l12--;
	g450c[(random(party_count) * 432)] = 0;
	l14 = (cfg_level == 1 ? 990 : 975);
	if (random(1000) < l14) goto L6569;
	return 1;
L6569:
	if ((key_available(1)) && ((char)get_key(1) == 13)) {
	g5038 = 1;
	}
	goto L6464;
L658a:
	for (l2 = 0; l2 < party_count; l2++) {
	if ((long)*(int *)((char *)pc_stamina + (432 * l2)) > (((long)*(int *)((char *)pc_stamina_max + (432 * l2)) * 3) / 4L)) {
	g450c[(432 * l2)] = 0;
	}
	draw_member_status_m(l2);
	}
	return 0;
}
