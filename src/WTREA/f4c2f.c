extern int anim_phase;
extern int click_flag;
extern int g501c;
extern int g502c;
extern int menu_clicked;
get_chest_input(keys, hotspots)
{
	int key;
	int l4;
	l4 = anim_phase;
	if (g501c == -1) goto L4c45;
	blink_selection();
L4c45:
	menu_clicked = 0;
L4c4b:
	if (key_available(1)) goto L4cb2;
	key = check_click_regions(hotspots);
	if (click_flag != 1) goto L4c73;
	menu_clicked = 1;
	return (key - 1);
L4c73:
	if (g502c) goto L4c9f;
	anim_phase = ((anim_phase + 1) % 2);
	animate_treasure_view();
	if (g501c == -1) goto L4c9d;
	if (anim_phase != l4) goto L4c9d;
	blink_selection();
L4c9d:
	goto L4ca2;
L4c9f:
	play_ambient_sound();
L4ca2:
	g502c = ((g502c + 1) % 10);
	goto L4c4b;
L4cb2:
	if ((key = char_index(keys, (unsigned char)(get_key(1)))) < 0) goto L4cd0;
	return;
L4cd0:
	goto L4c4b;
#asm
	db 0ebh,09ah
#endasm
}
