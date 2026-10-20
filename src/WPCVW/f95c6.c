long atol();
input_number(p4, p6, p8)
char *p4;
{
	int l2;
	int l4;
	char l23[19];
	char x23[1];
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
	set_cursor(p4, 2, 1);
	print_message(p6, p4, 18);
	l2 = (unsigned char)p4[6];
	l4 = (unsigned char)p4[7];
	setmem(((char *)l23 + 4), (p8 + 1), 32);
	l23[(p8 + 5)] = 0;
	print_string(p4, ((char *)l23 + 4), 1);
	resume_window_draw(p4);
	refresh_all_windows();
	set_cursor(p4, l2, l4);
	input_line(p4, ((char *)l23 + 4), p8, 5, 1);
	*(int *)(l23 + (0 + 2)) = 0;
	*(int *)(l23 + 0) = 0;
	if (!l23[(0 + 4)]) goto L9698;
	*(long *)(l23 + 0) = atol(((char *)l23 + 4));
L9698:
	;
#asm
l9698:
	db 08bh,046h,0e9h,08bh,056h,0ebh
#endasm
}
