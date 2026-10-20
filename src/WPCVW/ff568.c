extern char pc_stats[];
ff568(p4, p6, p8)
char *p4;
{
	int l2;
	int l4;
	int l20[8];
	for (l2 = 0; l2 < 8; l2++) {
	l20[l2] = 0;
	}
Lf58c:
	l4 = 0;
	do {
	l2 = random(7);
	l4++;
	} while ((((unsigned)pc_stats[((432 * p8) + l2)] >= 18) || (l20[l2])) && (l4 < 3));
	if (((unsigned)pc_stats[((432 * p8) + l2)] < 18) && (!l20[l2])) {
	l20[l2] = 1;
	pc_stats[((432 * p8) + l2)]++;
	get_message(5014, 21902);
	get_message((l2 + 5050), 22416);
	replace_char_with_string(21902, 22416, 36);
	print_msg_at2((l2 + 204), p4, 1, (l2 + 5), -5);
	p4[6]++;
	print_int(p4, (unsigned char)pc_stats[((432 * p8) + l2)], 2, -1);
	show_centered_msg(p6, 21902, 1);
	print_msg_at2((l2 + 204), p4, 1, (l2 + 5), 5);
	p4[6]++;
	print_int(p4, (unsigned char)pc_stats[((432 * p8) + l2)], 2, 1);
	}
	if (random(2)) goto Lf58c;
}
