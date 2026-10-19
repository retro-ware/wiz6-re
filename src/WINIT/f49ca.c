#asm
	extrn drv_op_ae_:near
#endasm
/* Load and display CREDITS.PIC in a full-screen window. */
show_credits()
{
	int win;
	int fd;
	if ((fd = open(make_data_path(20496, 1), 0)) != -1) goto L49f9;
	exit_game(3);
L49f9:
	;
#asm
l49f9:
	db 0b8h,000h,000h,050h,0b8h,0aah,051h,0bah,000h,000h,052h,050h,0b8h,000h,000h,0bah
	db 000h,000h,052h,050h,0ffh,076h,0fch
	call drv_op_ae_
	db 083h,0c4h,00ch
#endasm
	close(fd);
	win = create_window(0, 0, 40, 25, 1, -1, 2, 0);
	drv_op_be(win, 0);
	draw_big_char(10, 84, 52);
	draw_big_char(11, 84, 84);
	drv_op_c2(win);
	destroy_window(win, 0);
}
