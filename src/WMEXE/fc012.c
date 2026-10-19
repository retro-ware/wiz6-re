extern char g505c;
extern int g435c;
extern int g435e;
extern int g4fc8;
do_change_equipment()
{
	get_combatant_name(20492, g435e, g435c);
	get_message(3311, 20652);
	g505c = 0;
	print_combat_line(20492, 20652, 20572, 1, 15, 0);
	combat_delay((g4fc8 / 2));
}
