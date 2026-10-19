extern int cur_sound;
extern int g33ec;
extern int g33f2;
extern long cur_sound_size;
f4def(p4)
{
	char x0[13];
	char l14;
	char l15;
	char x15[3];
	int l20;
	char x20[4];
	long l28;
	char x28[2];
	int l32;
	int l34;
	cur_sound = p4;
	stop_sound();
	access_scenario_record(9, 13292, p4, 0);
	if (cur_sound_size != 0L) goto L4e49;
	p4 = g33ec;
	access_scenario_record(9, &l32, p4, 0);
	cur_sound_size = l28;
L4e49:
	strcpy(&l20, 20462);
	l15 = (char)((p4 / 10) + 48);
	l14 = (char)((p4 % 10) + 48);
	if ((l34 = open(make_data_path(&l20, 1), 0)) != -1) goto L4e97;
	exit_game(15);
L4e97:
	if (!load_sound_slot(l34, 0L, *(int *)&cur_sound_size, g33f2, 14)) goto L4ec0;
	exit_game(16);
L4ec0:
	close(l34);
}
