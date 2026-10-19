extern int anim_phase;
extern int camp_anim_dx;
extern int camp_anim_dy;
extern int camp_anim_tick;
extern int click_flag;
extern int menu_clicked;
extern int picture_win;
/* Wait for a key or mouse region while animating; return the region (menu_hit=1) or key mapping. */
get_menu_choice_animated(keys, regions)
{
	int choice;
	menu_clicked = 0;
L46ab:
	if (key_available(1)) goto L4717;
	choice = check_click_regions(regions);
	if (click_flag != 1) goto L46d3;
	menu_clicked = 1;
	return (choice - 1);
L46d3:
	if (camp_anim_tick) goto L4701;
	anim_phase = ((anim_phase + 1) % 2);
	draw_camp_scene(anim_phase, camp_anim_dx, camp_anim_dy);
	drv_op_c2(picture_win);
	goto L4707;
L4701:
	delay_tick();
	delay_tick();
L4707:
	camp_anim_tick = ((camp_anim_tick + 1) % 10);
	goto L46ab;
L4717:
	choice = char_index(keys, (unsigned char)(get_key(1)));
	if (choice < 0) goto L4735;
	return;
L4735:
	goto L46ab;
#asm
	db 0ebh,095h
#endasm
}
