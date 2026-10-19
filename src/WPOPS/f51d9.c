extern int anim_phase;
extern int blink_state;
extern int click_flag;
extern int menu_clicked;
extern int view_anim_state;
/* Wait for a key or click while animating the combat view; returns click index-1 with input_was_mouse set. */
get_combat_input(keys, hotspots)
{
	int key;
	int l4;
	flush_keys();
	l4 = anim_phase;
	if (blink_state == -1) goto L51f2;
	blink_cursor_text();
L51f2:
	menu_clicked = 0;
L51f8:
	if (key_available(1)) goto L523e;
	key = check_click_regions(hotspots);
	if (click_flag != 1) goto L5220;
	menu_clicked = 1;
	return (key - 1);
L521c:
	;
L5220:
	animate_combat_step();
	if (((view_anim_state != -2) || (blink_state == -1)) || (anim_phase != l4)) goto L523c;
	blink_cursor_text();
L523c:
	goto L51f8;
L523e:
	if ((key = char_index(keys, (unsigned char)(get_key(1)))) < 0) goto L525c;
	return;
L525c:
	goto L51f8;
	return;
}
