extern char pc_condition[];
extern int message_delay;
extern int pc_hp[];
struct s4 { int w[2]; };
struct s4 format_dice();
trap_damage_member(member, p6, p8)
{
	int damage;
	char x2[18];
	int l22;
	char x22[18];
	int l42;
	char x42[18];
	int l62;
	damage = roll_dice(format_dice(p6, p8, 0));
	if (!damage) goto L5d0a;
	if ((unsigned)pc_condition[(432 * member)] < 3) goto L5d10;
L5d0a:
	return;
L5d10:
	int_to_string(damage, &l42);
	get_message(5231, &l22);
	get_message(5232, &l62);
	if (*(int *)((char *)pc_hp + (432 * member)) < damage) {
	damage = *(int *)((char *)pc_hp + (432 * member));
	}
	*(int *)((char *)pc_hp + (432 * member)) -= damage;
	print_member_message(member, &l22, &l42, &l62, 1, 5, 5, 5);
	draw_member_status(member);
	if (*(int *)((char *)pc_hp + (432 * member)) <= 0) {
	wait_animating(4);
	inflict_condition(member, 5264, 0, 3);
	} else {
	play_sound(2);
	wait_animating(message_delay);
	}
	return;
}
