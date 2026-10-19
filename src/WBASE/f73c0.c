extern int click_flag;
extern int menu_clicked;
/* Wait for a key or mouse region; return the region (menu_hit=1) or key mapping. */
get_menu_choice(keys, regions)
{
	int choice;
	menu_clicked = 0;
L73cc:
	if (key_available(1)) goto L73f6;
	choice = check_click_regions(regions);
	if (click_flag != 1) goto L73f4;
	menu_clicked = 1;
	return (choice - 1);
L73f4:
	goto L73cc;
L73f6:
	if ((choice = char_index(keys, (unsigned char)(get_key(1)))) < 0) goto L7414;
	return;
L7414:
	goto L73cc;
#asm
	db 0ebh,0d8h
#endasm
}
