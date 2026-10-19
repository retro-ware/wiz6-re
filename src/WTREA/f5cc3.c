#asm
	extrn format_dice_:near
	extrn roll_dice_:near
#endasm
extern char pc_condition[];
extern int message_delay;
extern int pc_hp[];
trap_damage_member(member)
{
	int damage;
	char x2[18];
	int l22;
	char x22[18];
	int l42;
	char x42[18];
	int l62;
	register int rsi;
	register int rdi;
#asm
	db 0b8h,000h,000h,050h,0ffh,076h,008h,0ffh,076h,006h
	call format_dice_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,089h,046h,0feh
#endasm
	if (!damage) goto L5d0a;
	if ((unsigned)pc_condition[(432 * member)] < 3) goto L5d10;
L5d0a:
	return;
L5d10:
	int_to_string(damage, &l42);
	get_message(5231, &l22);
	get_message(5232, &l62);
	if (*(int *)((char *)pc_hp + (432 * member)) >= damage) goto L5d4d;
	damage = *(int *)((char *)pc_hp + (432 * member));
L5d4d:
	*(int *)((char *)pc_hp + (432 * member)) -= damage;
	print_member_message(member, &l22, &l42, &l62, 1, 5, 5, 5);
	draw_member_status(member);
	if (*(int *)((char *)pc_hp + (432 * member)) > 0) goto L5da8;
	wait_animating(4);
	inflict_condition(member, 5264, 0, 3);
	goto L5db8;
L5da8:
	play_sound(2);
	wait_animating(message_delay);
L5db8:
	return;
}
