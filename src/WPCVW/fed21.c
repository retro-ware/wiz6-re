extern char g4517[];
extern char g4597[];
extern char pc_class[];
extern char pc_stats[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_level[];
extern int pc_stamina[];
extern int pc_stamina_max[];
fed21(p4, p6, p8)
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	l8 = (unsigned char)pc_stats[(432 * p8)];
	l10 = (unsigned char)g4517[(432 * p8)];
	switch ((unsigned char)pc_class[(432 * p8)]) {
case 0:
case 4:
case 10:
	l4 = (random(5) + 6);
	goto Lede3;
case 1:
	l4 = (random(3) + 2);
	goto Lede3;
case 2:
case 5:
case 12:
	l4 = (random(4) + 4);
	goto Lede3;
case 3:
	l4 = (random(4) + 3);
	goto Lede3;
case 6:
case 7:
case 9:
	l4 = (random(3) + 3);
	goto Lede3;
case 8:
case 11:
	l4 = (random(5) + 5);
	goto Lede3;
case 13:
	l4 = (random(5) + 4);
	goto Lede3;
	}
Lede3:
	l6 = (random(4) + ((l8 + l10) / 6));
	if (l10 >= 8) goto Lee09;
	l4--;
Lee09:
	if (l10 <= 15) goto Lee12;
	l4++;
Lee12:
	if (l10 <= 17) goto Lee1b;
	l4++;
Lee1b:
	if (l4 >= 1) goto Lee26;
	l4 = 1;
Lee26:
	if (*(int *)((char *)pc_level + (432 * p8)) >= (unsigned char)g4597[(432 * p8)]) goto Lee4a;
	l4 = 1;
	l6 = 1;
Lee4a:
	*(int *)((char *)pc_hp + (432 * p8)) += l4;
	*(int *)((char *)pc_hp_max + (432 * p8)) += l4;
	*(int *)((char *)pc_stamina + (432 * p8)) += l6;
	*(int *)((char *)pc_stamina_max + (432 * p8)) += l6;
	get_message(5013, 21902);
	set_cursor(p4, 15, 8);
	if ((l12 = ((*(int *)((char *)pc_stamina + (432 * p8)) * 100) / *(int *)((char *)pc_stamina_max + (432 * p8)))) >= 1) goto Leeab;
	if (*(int *)((char *)pc_stamina + (432 * p8)) <= 0) goto Leeab;
	l12 = 1;
Leeab:
	print_int(p4, l12, 3, -6);
	show_centered_msg(p6, 21902, 1);
	set_cursor(p4, 15, 8);
	print_int(p4, l12, 3, 6);
	get_message((l4 == 1 ? 5011 : 5012), 21902);
	int_to_string(l4, 22416);
	replace_char_with_string(21902, 22416, 36);
	set_cursor(p4, 14, 5);
	print_int(p4, *(int *)((char *)pc_hp + (432 * p8)), 4, -6);
	set_cursor(p4, 14, 6);
	print_int(p4, *(int *)((char *)pc_hp_max + (432 * p8)), 4, -6);
	show_centered_msg(p6, 21902, 1);
	set_cursor(p4, 14, 5);
	print_int(p4, *(int *)((char *)pc_hp + (432 * p8)), 4, 6);
	set_cursor(p4, 14, 6);
	print_int(p4, *(int *)((char *)pc_hp_max + (432 * p8)), 4, 6);
}
