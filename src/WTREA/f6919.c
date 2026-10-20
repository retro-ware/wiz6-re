extern char g452b[];
extern char pc_class[];
extern int game_state_arg;
extern int pc_level[];
inspect_chest(win, member)
{
	int letters;
	int accuracy;
	int l6;
	l6 = (*(int *)((char *)pc_level + (432 * member)) / 5);
	l6 = (l6 > 6 ? 6 : l6);
	if (pc_class[(432 * member)] != 3) goto L6987;
	letters = (((((unsigned char)g452b[(432 * member)] / 10) + l6) - game_state_arg) + 5);
	accuracy = (((((unsigned char)g452b[(432 * member)] / 2) + l6) + 50) - (game_state_arg << 1));
	goto L6a09;
L6987:
	if (((pc_class[(432 * member)] != 13) && (pc_class[(432 * member)] != 4)) && (pc_class[(432 * member)] != 6)) goto L69d9;
	letters = (((((unsigned char)g452b[(432 * member)] / 10) + l6) - game_state_arg) + 3);
	accuracy = (((((unsigned char)g452b[(432 * member)] / 2) + l6) + 35) - ((game_state_arg * 3) / 2));
	goto L6a09;
L69d9:
	letters = (((((unsigned char)g452b[(432 * member)] / 10) + l6) - game_state_arg) + 1);
	accuracy = (((((unsigned char)g452b[(432 * member)] / 2) + l6) + 15) - game_state_arg);
L6a09:
	if (letters < 1) {
	letters = 1;
	}
	if (accuracy < 5) {
	accuracy = 5;
	}
	if (accuracy > 95) {
	accuracy = 95;
	}
	reveal_trap_letters(win, member, letters, accuracy);
}
