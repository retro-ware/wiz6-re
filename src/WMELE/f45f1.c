#asm
	extrn load_sound_slot_:near
#endasm
extern int cur_sound;
extern int g33ec;
extern long cur_sound_size;
/* Load sound n from SOUNDnn.SND. */
load_sound_mele(n)
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
	if (cur_sound_size != 0L) goto L464b;
	n = g33ec;
	access_scenario_record(9, &l32, n, 0);
	cur_sound_size = l28;
L464b:
	strcpy(&fname, 20462);
	l15 = (char)((n / 10) + 48);
	l14 = (char)((n % 10) + 48);
	fd = open(make_data_path(&fname, 1), 0);
	if (fd != -1) goto L4699;
	exit_game(15);
L4699:
	;
#asm
l4699:
	db 0b8h,00eh,000h,050h,0ffh,036h,0f2h,033h,0ffh,036h,0f0h,033h,0b8h,000h,000h,0bah
	db 000h,000h,052h,050h,0ffh,076h,0deh
	call load_sound_slot_
	db 083h,0c4h,00ch,085h,0c0h,074h,008h
#endasm
	exit_game(16);
L46c2:
	close(fd);
}
