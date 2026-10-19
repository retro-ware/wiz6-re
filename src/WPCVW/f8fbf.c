extern char g00df[];
extern char g00e2[];
extern char pc_class[];
extern int g4eca;
extern int g578e;
extern int game_state_arg;
extern int pc_item_id[];
extern int pc_level[];
/* Use an inventory item: read scroll/book, learn spell, cast its spell, etc. */
do_use_item(p4, p6, p8, p10)
{
	char x0[4];
	char l5;
	char x5[13];
	int l20;
	char x20[24];
	int l46;
	char l47;
	char l48;
	int l50;
	char x50[6];
	int l58;
	char x58[14];
	int l74;
	int l76;
	int l78;
	int l80;
	access_scenario_record(1, &l74, *(int *)((char *)pc_item_id + ((432 * p8) + (p10 << 3))), 0);
	if ((unsigned)l5 <= 0) goto L922b;
	switch ((unsigned char)l5) {
case 1:
	l80 = choose_item(p4, p6, 408, p8, 0);
	if (*(int *)((char *)pc_item_id + ((432 * p8) + (l80 << 3))) != 395) goto L9043;
	show_text_pages(p6, 11350);
	goto L906b;
L9043:
	if (*(int *)((char *)pc_item_id + ((432 * p8) + (l80 << 3))) != 403) goto L906b;
	show_text_pages(p6, 12200);
L906b:
	goto L9229;
case 2:
	show_text_pages(p6, l58);
	goto L9229;
case 3:
	if (test_bit(&l20, (unsigned char)pc_class[(432 * p8)]) != 1) goto L910e;
	l76 = (l46 % 256);
	if (((unsigned char)g00df[(l76 * 6)] << 1) <= *(int *)((char *)pc_level + (432 * p8))) goto L90dc;
	show_text_pages(p6, 725);
	goto L910c;
L90dc:
	set_bit(((432 * p8) + 17776), l76, 1);
	show_text_pages(p6, 720);
	remove_item(p8, p10);
L910c:
	goto L911b;
L910e:
	show_text_pages(p6, 730);
L911b:
	goto L9229;
case 4:
	if (game_state_arg != l50) goto L91b9;
	set_bit(((l50 * 10) + 20204), (unsigned char)l48, 0);
	set_bit(((l50 * 10) + 13304), (unsigned char)l48, 0);
	set_bit(((l50 * 10) + 20204), (unsigned char)l47, 1);
	set_bit(((l50 * 10) + 13304), (unsigned char)l47, 1);
	use_item_charge(p8, p10);
L91b9:
	goto L9229;
case 5:
	if (game_state_arg != 8) goto L91c8;
	g4eca = 1;
L91c8:
	goto L9229;
case 6:
	l80 = choose_item(p4, p6, 408, p8, 0);
	if (*(int *)((char *)pc_item_id + ((432 * p8) + (l80 << 3))) != 388) goto L920c;
	show_text_pages(p6, 18520);
L920c:
	goto L9229;
	}
L9229:
	goto L9298;
L922b:
	if (!l46) goto L9298;
	l78 = (l46 / 256);
	l76 = (l46 % 256);
	if ((g00e2[(l76 * 6)] != 1) || ((g578e = choose_member(p4, p6, 504, -1)) != -1)) goto L9273;
	return;
L9273:
	cast_spell(p8, l76, l78, g578e, p4, p6);
	use_item_charge(p8, p10);
L9298:
	return;
}
