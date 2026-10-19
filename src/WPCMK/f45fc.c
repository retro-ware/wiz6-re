extern int click_flag;
extern int menu_clicked;
/* Wait for a key or mouse click; returns hotspot index-1 with input_was_mouse set, else the mapped key. */
get_menu_input(keys, hotspots)
{
	int key;
	menu_clicked = 0;
L4608:
	if (key_available(1)) goto L4632;
	key = check_click_regions(hotspots);
	if (click_flag != 1) goto L4630;
	menu_clicked = 1;
	return (key - 1);
L4630:
	goto L4608;
L4632:
	if ((key = char_index(keys, (unsigned char)(get_key(1)))) < 0) goto L4650;
	return;
L4650:
	goto L4608;
#asm
	db 0ebh,0d8h
#endasm
}
