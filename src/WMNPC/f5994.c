extern int anim_phase;
extern int click_flag;
extern int g522c;
extern int menu_clicked;
extern int view_anim_state;
f5994(p4, p6)
{
	int l2;
	int l4;
	l4 = anim_phase;
	if (g522c == -1) goto L59aa;
	f591a();
L59aa:
	flush_keys();
	menu_clicked = 0;
L59b3:
	if ((l2 = key_available(1))) goto L59fc;
	l2 = check_click_regions(p6);
	if (click_flag != 1) goto L59de;
	menu_clicked = 1;
	return (l2 - 1);
L59da:
	;
L59de:
	f55dc();
	if (((view_anim_state != -2) || (g522c == -1)) || (anim_phase != l4)) goto L59fa;
	f591a();
L59fa:
	goto L59b3;
L59fc:
	if ((l2 = char_index(p4, (unsigned char)(get_key(1)))) < 0) goto L5a1a;
	return;
L5a1a:
	goto L59b3;
	return;
}
