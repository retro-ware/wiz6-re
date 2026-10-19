#asm
	extrn load_sound_slot_:near
#endasm
extern int cur_sound;
extern int g33ec;
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
	l34 = open(make_data_path(&l20, 1), 0);
	if (l34 != -1) goto L4e97;
	exit_game(15);
L4e97:
	;
#asm
l4e97:
	db 0b8h,00eh,000h,050h,0ffh,036h,0f2h,033h,0ffh,036h,0f0h,033h,0b8h,000h,000h,0bah
	db 000h,000h,052h,050h,0ffh,076h,0deh
	call load_sound_slot_
	db 083h,0c4h,00ch,085h,0c0h,074h,008h
#endasm
	exit_game(16);
L4ec0:
	close(l34);
}
