#asm
	extrn drv_op_ae_:near
#endasm
extern char g3812[];
extern char pic_slot_loaded[];
extern char pic_slot_monster[];
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
	pic_fd = open(make_data_path(&l22, 1), 0);
	if (pic_fd != -1) goto L557a;
	exit_game(21);
L557a:
	;
#asm
l557a:
	db 0ffh,076h,006h,0b8h,03ah,001h,0f7h,06eh,006h,08bh,0d8h,0ffh,0b7h,0e4h,036h,0ffh
	db 0b7h,0e2h,036h,0b8h,000h,000h,0bah,000h,000h,052h,050h,0ffh,036h,0e8h,04fh
	call drv_op_ae_
	db 083h,0c4h,00ch
#endasm
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
