extern char g00df[];
calc_spell_level_value(p4, p6)
{
	return ((((unsigned char)g00df[(p4 * 6)] * 3) + (p6 * 3)) + -6);
}
