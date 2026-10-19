/* Print message number p4 centered in the combat message window. */
print_msg_centered(p4, p6, p8)
{
	char x0[78];
	int l80;
	get_message(p4, &l80);
	print_combat_centered(&l80, p6, p8);
}
