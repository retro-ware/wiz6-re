extern int cur_sound;
extern int g33ec;
extern int g33f2;
extern long cur_sound_size;
/* Load the single sound SOUNDnn.SND for sound number n. */
load_sound(n)
{
	char x0[13];
	char l14;
	char l15;
	char x15[3];
	int fname;
	char x20[4];
	long l28;
	char x28[2];
	int l32;
	int fd;
	cur_sound = n;
	stop_sound();
	access_scenario_record(9, 13292, n, 0);
	if (cur_sound_size != 0L) goto L4948;
	n = g33ec;
	access_scenario_record(9, &l32, n, 0);
	cur_sound_size = l28;
L4948:
	strcpy(&fname, 20484);
	l15 = (char)((n / 10) + 48);
	l14 = (char)((n % 10) + 48);
	if ((fd = open(make_data_path(&fname, 1), 0)) != -1) goto L4996;
	exit_game(15);
L4996:
	if (!load_sound_slot(fd, 0L, *(int *)&cur_sound_size, g33f2, 14)) goto L49bf;
	exit_game(16);
L49bf:
	close(fd);
}
