#asm
	extrn format_dice_:near
	extrn roll_dice_:near
#endasm
extern char pc_condition[];
extern int message_delay;
extern int pc_hp[];
trap_damage_member(p4)
{
	int l2;
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
	if (!l2) goto Lac67;
	if ((unsigned)pc_condition[(432 * p4)] < 3) goto Lac6d;
Lac67:
	return;
Lac6d:
	int_to_string(l2, &l42);
	get_message(5231, &l22);
	get_message(5232, &l62);
	if (*(int *)((char *)pc_hp + (432 * p4)) >= l2) goto Lacaa;
	l2 = *(int *)((char *)pc_hp + (432 * p4));
Lacaa:
	*(int *)((char *)pc_hp + (432 * p4)) -= l2;
	print_member_message(p4, &l22, &l42, &l62, 1, 5, 5, 5);
	draw_member_status_m(p4);
	if (*(int *)((char *)pc_hp + (432 * p4)) > 0) goto Lad05;
	wait_animating_m(2);
	inflict_condition(p4, 5264, 0, 3);
	goto Lad15;
Lad05:
	play_sound(2);
	wait_animating_m(message_delay);
Lad15:
	return;
}
