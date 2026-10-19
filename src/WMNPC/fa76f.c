#asm
	extrn fa69b_:near
#endasm
extern int bottom_line_win;
fa76f(p4)
{
	int l2;
	int l4;
	l2 = create_window(0, 19, 40, 5, 25, -1, 0, 0);
	fill_window(l2, 32, 3, 0);
	erase_window(bottom_line_win, 0);
	l4 = 0;
	if ((l4 = do_npc_buy(l2, p4, l4)) == -1) goto La7e6;
#asm
	db 050h,0ffh,076h,004h
	call fa69b_
	db 083h,0c4h,004h,0ebh,0ddh
#endasm
La7e6:
	f0a42(bottom_line_win, 0);
	destroy_window(l2, 0);
}
