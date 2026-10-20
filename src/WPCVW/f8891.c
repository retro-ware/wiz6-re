extern int anim_phase;
extern int click_flag;
extern int g553c;
extern int menu_clicked;
/* Wait for a key or mouse click; g4fc4 is set when a hotspot was clicked. */
get_menu_input(p4, p6)
{
	int l2;
	int l4;
	int l6;
	l6 = 0;
	l4 = anim_phase;
	if (g553c != -1) {
	blink_cursor();
	}
	menu_clicked = 0;
L88b2:
	if (key_available(1)) goto L8914;
	l2 = check_click_regions(p6);
	if (click_flag != 1) goto L88da;
	menu_clicked = 1;
	return (l2 - 1);
L88d6:
	;
L88da:
	if (!l6) {
	anim_phase = ((anim_phase + 1) % 2);
	if ((g553c != -1) && (anim_phase == l4)) {
	blink_cursor();
	}
	} else {
	delay_tick();
	delay_tick();
	}
	l6 = ((l6 + 1) % 10);
	goto L88b2;
L8914:
	if ((l2 = char_index(p4, (unsigned char)(get_key(1)))) < 0) goto L8932;
	return;
L8932:
	goto L88b2;
	return;
}
