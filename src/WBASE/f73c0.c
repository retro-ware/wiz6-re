#asm
	extrn key_available_:near
#endasm
extern int click_flag;
extern int menu_clicked;
/* Wait for a key or mouse region; return the region (menu_hit=1) or key mapping. */
get_menu_choice(keys, regions)
{
	int choice;
	menu_clicked = 0;
L73cc:
	;
#asm
l73cc:
	db 0b8h,001h,000h,050h
	call key_available_
	db 059h,085h,0c0h,075h,01eh
#endasm
	choice = check_click_regions(regions);
	if (click_flag != 1) goto L73f4;
	menu_clicked = 1;
	return (choice - 1);
L73f4:
	goto L73cc;
	if ((choice = char_index(keys, (unsigned char)(get_key(1)))) < 0) goto L7414;
	return;
L7414:
	goto L73cc;
#asm
	db 0ebh,0d8h
#endasm
}
