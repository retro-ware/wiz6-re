extern char g453a[];
extern char pc_condition[];
extern char pc_sex[];
extern int message_delay;
extern int pc_hp[];
extern int pc_stamina[];
inflict_condition(p4, p6, p8, p10)
{
	char x0[78];
	int l80;
	char x80[3];
	int l85;
	char x85[3];
	int l90;
	if (((p8) && (random(100) <= (unsigned char)g453a[((432 * p4) + p8)])) || ((unsigned char)pc_condition[(432 * p4)] >= p10)) goto Lac1c;
	pc_condition[(432 * p4)] = *(char *)&p10;
	if (p10 < 3) goto Labd6;
	*(int *)((char *)pc_hp + (432 * p4)) = 0;
	*(int *)((char *)pc_stamina + (432 * p4)) = 0;
	play_sound(((unsigned char)pc_sex[(432 * p4)] + 8));
Labd6:
	get_message(p6, &l80);
	*(char *)&l85 = 0;
	*(char *)&l90 = 0;
	print_member_message(p4, &l80, &l85, &l90, 1, 6, 0, 0);
	draw_member_status_m(p4);
	wait_animating_m(message_delay);
Lac1c:
	;
}
