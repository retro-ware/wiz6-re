#asm
	extrn load_sound_slot_:near
#endasm
extern int cur_sound;
extern int g33ec;
extern long cur_sound_size;
/* Load sound n from SOUNDnn.SND. */
load_sound_dopt(n)
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
	if (cur_sound_size != 0L) goto L4606;
	n = g33ec;
	access_scenario_record(9, &l32, n, 0);
	cur_sound_size = l28;
L4606:
	strcpy(&fname, 20462);
	l15 = (char)((n / 10) + 48);
	l14 = (char)((n % 10) + 48);
	if ((fd = open(make_data_path(&fname, 1), 0)) != -1) goto L4654;
	exit_game(15);
L4654:
	;
#asm
l4654:
	db 0b8h,00eh,000h,050h,0ffh,036h,0f2h,033h,0ffh,036h,0f0h,033h,0b8h,000h,000h,0bah
	db 000h,000h,052h,050h,0ffh,076h,0deh
	call load_sound_slot_
	db 083h,0c4h,00ch,085h,0c0h,074h,008h
#endasm
	exit_game(16);
L467d:
	close(fd);
}
