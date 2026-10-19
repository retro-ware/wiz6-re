extern char *g43b8;
extern char g019b[];
extern char g4326[];
extern int cur_sound;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
/* Load the pictures for all active monster groups and their sound. */
load_group_pics()
{
	int g;
	int i;
	i = 0;
L557f:
	g4326[i] = 0;
	i++;
	if (i < 3) goto L557f;
	g = 1;
	goto L55c1;
L5599:
	g019b[monster_groups[g]] = (char)f4858((unsigned char)(*(char **)((char *)group_monster_rec + (g << 1)))[209]);
	g++;
L55c1:
	if (g <= monster_group_count) goto L5599;
	if ((unsigned)g43b8[210] <= 0) goto L55e6;
	if ((unsigned char)g43b8[210] == cur_sound) goto L55e6;
	load_sound_mele((unsigned char)g43b8[210]);
L55e6:
	;
}
