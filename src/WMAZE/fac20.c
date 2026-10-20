extern char pc_condition[];
extern int message_delay;
extern int pc_hp[];
struct s4 { int w[2]; };
struct s4 format_dice();
trap_damage_member(p4, p6, p8)
{
	int l2;
	char x2[18];
	int l22;
	char x22[18];
	int l42;
	char x42[18];
	int l62;
	l2 = roll_dice(format_dice(p6, p8, 0));
	if (!l2) goto Lac67;
	if ((unsigned)pc_condition[(432 * p4)] < 3) goto Lac6d;
Lac67:
	return;
Lac6d:
	int_to_string(l2, &l42);
	get_message(5231, &l22);
	get_message(5232, &l62);
	if (*(int *)((char *)pc_hp + (432 * p4)) < l2) {
	l2 = *(int *)((char *)pc_hp + (432 * p4));
	}
	*(int *)((char *)pc_hp + (432 * p4)) -= l2;
	print_member_message(p4, &l22, &l42, &l62, 1, 5, 5, 5);
	draw_member_status_m(p4);
	if (*(int *)((char *)pc_hp + (432 * p4)) <= 0) {
	wait_animating_m(2);
	inflict_condition(p4, 5264, 0, 3);
	} else {
	play_sound(2);
	wait_animating_m(message_delay);
	}
	return;
}
