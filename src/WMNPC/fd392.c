fd392(p4, p6)
{
	int l2;
	for (l2 = 0; l2 < p6; l2++) {
	get_message(((l2 << 1) + p4), ((l2 * 20) + 25086));
	get_message((((l2 << 1) + p4) + 1), ((l2 * 20) + 25096));
	}
}
