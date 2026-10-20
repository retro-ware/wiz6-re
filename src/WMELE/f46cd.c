extern char g3812[];
extern char pic_slot_loaded[];
extern char pic_slot_monster[];
extern int g36e2[];
extern int g36e4[];
extern int pic_fd;
/* Load MONnn.PIC for monster mon into picture slot slot unless it is already there. */
load_monster_pic_mele(mon, slot)
{
	int i;
	char x2[15];
	char l18;
	char l19;
	char x19[1];
	int fname;
	stop_sound();
	if ((unsigned char)pic_slot_monster[slot] == mon) goto L47ad;
	access_scenario_record(8, ((314 * slot) + 14046), mon, 0);
	strcpy(&fname, 20474);
	l19 = (char)((mon / 10) + 48);
	l18 = (char)((mon % 10) + 48);
	if ((pic_fd = open(make_data_path(&fname, 1), 0)) == -1) {
	exit_game(21);
	}
	drv_op_ae(pic_fd, 0L, *(int *)((char *)g36e2 + (314 * slot)), *(int *)((char *)g36e4 + (314 * slot)), slot);
	close(pic_fd);
	for (i = 0; (unsigned char)g3812[(314 * slot)] >= i; i++) {
	pic_slot_monster[(slot + i)] = *(char *)&mon;
	pic_slot_loaded[(slot + i)] = 1;
	}
L47ad:
	;
}
