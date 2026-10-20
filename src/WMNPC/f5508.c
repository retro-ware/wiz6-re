extern char g3812[];
extern char pic_slot_loaded[];
extern char pic_slot_monster[];
extern int g36e2[];
extern int g36e4[];
extern int pic_fd;
f5508(p4, p6)
{
	int l2;
	char x2[15];
	char l18;
	char l19;
	char x19[1];
	int l22;
	stop_sound();
	access_scenario_record(8, ((314 * p6) + 14046), p4, 0);
	strcpy(&l22, 20474);
	l19 = (char)((p4 / 10) + 48);
	l18 = (char)((p4 % 10) + 48);
	if ((pic_fd = open(make_data_path(&l22, 1), 0)) == -1) {
	exit_game(21);
	}
	drv_op_ae(pic_fd, 0L, *(int *)((char *)g36e2 + (314 * p6)), *(int *)((char *)g36e4 + (314 * p6)), p6);
	close(pic_fd);
	l2 = 0;
	goto L55c5;
L55ae:
	pic_slot_monster[(p6 + l2)] = *(char *)&p4;
	pic_slot_loaded[(p6 + l2)] = 1;
	l2++;
L55c5:
	if ((unsigned char)g3812[(314 * p6)] >= l2) goto L55ae;
}
