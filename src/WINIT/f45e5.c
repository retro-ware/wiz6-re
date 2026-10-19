extern char g3592;
f45e5(p4)
{
	int l2;
	char x2[18];
	int l22;
	int l24;
	l24 = 0;
	if (g3592 != 3) goto L4623;
	copy_through_char(&l22, 13632, 58);
	prompt_insert_disk(&l22, 1, 0, 0);
	l24 = 1;
#asm
	db 0ebh,02ch
#endasm
L4623:
	;
#asm
l4623:
	db 080h,03eh,092h,035h,005h,075h,025h
#endasm
	copy_through_char(&l22, 13652, 58);
	prompt_insert_disk(&l22, 1, 0, 0);
	if ((l2 = open(make_data_path(p4, 1), 0)) != -1) goto L4677;
	exit_game(4);
L4677:
	drv_load_from_file(l2);
	close(l2);
	if (l24 != 1) goto L469b;
	prompt_insert_disk(&l22, 0, 0, 0);
L469b:
	;
}
