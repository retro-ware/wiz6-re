extern int anim_phase;
extern int click_flag;
extern int g502e;
extern int g506a;
extern int menu_clicked;
/* Wait for a key or mouse region while blinking the cursor and animating the view. */
get_menu_choice_blink(keys, regions)
{
	int choice;
	int frame0;
	frame0 = anim_phase;
	if (g502e != -1) {
	blink_cursor_text();
	}
	menu_clicked = 0;
L4744:
	if (key_available(1)) goto L47ab;
	choice = check_click_regions(regions);
	if (click_flag != 1) goto L476c;
	menu_clicked = 1;
	return (choice - 1);
L4768:
	;
L476c:
	if (!g506a) {
	anim_phase = ((anim_phase + 1) % 2);
	redraw_maze_view();
	if ((g502e != -1) && (anim_phase == frame0)) {
	blink_cursor_text();
	}
	} else {
	play_random_drip();
	}
	g506a = ((g506a + 1) % 10);
	goto L4744;
L47ab:
	if ((choice = char_index(keys, (unsigned char)(get_key(1)))) < 0) goto L47c9;
	return;
L47c9:
	goto L4744;
	return;
}
