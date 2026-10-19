extern char pc_item_icon[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int message_delay;
extern int pc_item_id[];
extern int pc_item_weight[];
replace_item(p4, p6, p8, p10, p12)
{
	char x0[12];
	char l13;
	char l14;
	char x14[28];
	int l44;
	char x44[6];
	int l52;
	int l54;
	char x54[18];
	int l74;
	access_scenario_record(1, &l74, p8, 0);
	strcpy(((p10 << 4) + 21982), &l74);
	*(int *)((char *)pc_item_id + ((432 * p6) + (p10 << 3))) = p8;
	pc_item_icon[((432 * p6) + (p10 << 3))] = l13;
	pc_item_type[((432 * p6) + (p10 << 3))] = l14;
	*(int *)((char *)pc_item_weight + ((432 * p6) + (p10 << 3))) = l44;
	pc_item_qty[((432 * p6) + (p10 << 3))] = (char)roll_dice(l54, l52);
	remove_item(p6, p12);
	defer_window_draw(p4);
	draw_inventory_panel(p4, p6);
	resume_window_draw(p4);
	refresh_all_windows();
	if (p10 <= p12) goto L9bfe;
	p10--;
L9bfe:
	set_cursor(p4, 22, (p10 + 9));
	print_string(p4, ((p10 << 4) + 21982), -5);
	pad_to_column(p4, 37, 0);
	set_cursor(p4, 38, (p10 + 9));
	put_char_hi(p4, (unsigned char)(((unsigned char)pc_item_icon[((432 * p6) + (p10 << 3))] + 1)), 4);
	play_sound(0);
	wait_seconds_or_enter(message_delay);
}
