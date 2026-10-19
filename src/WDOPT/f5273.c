#asm
	extrn drv_op_ae_:near
#endasm
extern char g3812[];
extern char pic_slot_loaded[];
extern char pic_slot_monster[];
extern int pic_fd;
/* Load MONnn.PIC for monster mon into picture slot slot unless it is already there. */
load_monster_pic_dopt(mon, slot)
{
	int i;
	char x2[15];
	char l18;
	char l19;
	char x19[1];
	int fname;
	stop_sound();
	if ((unsigned char)pic_slot_monster[slot] == mon) goto L5353;
	access_scenario_record(8, ((314 * slot) + 14046), mon, 0);
	strcpy(&fname, 20474);
	l19 = (char)((mon / 10) + 48);
	l18 = (char)((mon % 10) + 48);
	pic_fd = open(make_data_path(&fname, 1), 0);
	if (pic_fd != -1) goto L52f5;
	exit_game(21);
L52f5:
	;
#asm
l52f5:
	db 0ffh,076h,006h,0b8h,03ah,001h,0f7h,06eh,006h,08bh,0d8h,0ffh,0b7h,0e4h,036h,0ffh
	db 0b7h,0e2h,036h,0b8h,000h,000h,0bah,000h,000h,052h,050h,0ffh,036h,0e8h,04fh
	call drv_op_ae_
	db 083h,0c4h,00ch
#endasm
	close(pic_fd);
	i = 0;
	goto L5340;
L5329:
	pic_slot_monster[(slot + i)] = *(char *)&mon;
	pic_slot_loaded[(slot + i)] = 1;
	i++;
L5340:
	if ((unsigned char)g3812[(314 * slot)] >= i) goto L5329;
L5353:
	;
}
