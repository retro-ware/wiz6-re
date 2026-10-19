extern char g453a[];
extern char pc_condition[];
extern char pc_sex[];
extern int message_delay;
extern int pc_hp[];
extern int pc_stamina[];
inflict_condition(member, msg, resist, condition)
{
	char x0[78];
	int l80;
	char x80[3];
	int l85;
	char x85[3];
	int l90;
	if (((resist) && (random(100) <= (unsigned char)g453a[((432 * member) + resist)])) || ((unsigned char)pc_condition[(432 * member)] >= condition)) goto L5cbf;
	pc_condition[(432 * member)] = *(char *)&condition;
	if (condition < 3) goto L5c79;
	*(int *)((char *)pc_hp + (432 * member)) = 0;
	*(int *)((char *)pc_stamina + (432 * member)) = 0;
	play_sound(((unsigned char)pc_sex[(432 * member)] + 8));
L5c79:
	get_message(msg, &l80);
	*(char *)&l85 = 0;
	*(char *)&l90 = 0;
	print_member_message(member, &l80, &l85, &l90, 1, 6, 0, 0);
	draw_member_status(member);
	wait_animating(message_delay);
L5cbf:
	;
}
