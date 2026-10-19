extern int prompt_win;
wait_for_key()
{
	fill_window(prompt_win, 32, 3, 0);
	refresh_window(prompt_win);
	set_cursor(prompt_win, 12, 1);
	print_message(1110, prompt_win, 18);
L97ba:
	if (!check_screen_click()) goto L97c2;
	return;
L97c2:
	if (key_available(1) != 1) goto L97dd;
	if ((char)get_key(1) != 13) goto L97dd;
	return;
L97dd:
	goto L97ba;
#asm
	db 0ebh,0e0h
#endasm
}
