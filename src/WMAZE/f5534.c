extern int anim_phase;
extern int click_flag;
extern int g5036;
extern int menu_clicked;
get_maze_input(p4, p6)
{
	int l2;
	menu_clicked = 0;
L5540:
	if (key_available(1)) goto L5595;
	l2 = check_click_regions(p6);
	if (click_flag != 1) goto L5568;
	menu_clicked = 1;
	return (l2 - 1);
L5568:
	if (g5036) goto L5582;
	anim_phase = ((anim_phase + 1) % 2);
	redraw_maze_view();
	goto L5585;
L5582:
	f4655();
L5585:
	g5036 = ((g5036 + 1) % 10);
	goto L5540;
L5595:
	l2 = char_index(p4, (unsigned char)(get_key(1)));
	if (l2 < 0) goto L55b3;
	return;
L55b3:
	goto L5540;
#asm
	db 0ebh,0adh
#endasm
}
