extern int g334a[];
extern int g4f84;
extern int sound_table[];
/* Load SOUNDnn.SND for each of the first count sound table entries that has a size. */
load_sounds(count)
{
	char x0[13];
	char l14;
	char l15;
	char x15[3];
	int fname;
	int fd;
	int i;
	stop_sound();
	i = 0;
	goto L48df;
L4806:
	access_scenario_record(9, ((i * 12) + 13124), i, 0);
	if (*(long *)((char *)sound_table + (i * 12)) > 0L) {
	strcpy(&fname, 20472);
	l15 = (char)((i / 10) + 48);
	l14 = (char)((i % 10) + 48);
	g4f84 = 20428;
	if ((fd = open(make_data_path(&fname, 1), 0)) == -1) {
	exit_game(10);
	}
	if (load_sound_slot(fd, 0L, *(int *)((char *)sound_table + (i * 12)), *(int *)((char *)g334a + (i * 12)), i)) {
	exit_game(11);
	}
	close(fd);
	}
	i++;
L48df:
	if (i < count) goto L4806;
}
