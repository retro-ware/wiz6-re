extern int g4fc8;
show_combat_msg(p4)
{
	clear_msg_line(2);
	print_msg_centered(p4, 5, 2);
	combat_delay((g4fc8 / 2));
}
