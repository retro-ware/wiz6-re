#asm
	extrn load_sound_slot_:near
#endasm
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
	if (*(long *)((char *)sound_table + (i * 12)) <= 0L) goto L48dc;
	strcpy(&fname, 20472);
	l15 = (char)((i / 10) + 48);
	l14 = (char)((i % 10) + 48);
	g4f84 = 20428;
	if ((fd = open(make_data_path(&fname, 1), 0)) != -1) goto L489e;
	exit_game(10);
L489e:
	;
#asm
l489e:
	db 0ffh,076h,0e8h,08bh,046h,0e8h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h
	db 08bh,0d8h,0ffh,0b7h,04ah,033h,0ffh,0b7h,048h,033h,0b8h,000h,000h,0bah,000h,000h
	db 052h,050h,0ffh,076h,0eah
	call load_sound_slot_
	db 083h,0c4h,00ch,085h,0c0h,074h,008h
#endasm
	exit_game(11);
L48d5:
	close(fd);
L48dc:
	i++;
L48df:
	if (i < count) goto L4806;
}
