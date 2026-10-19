#asm
	extrn f5a1e_:near
	extrn f5a69_:near
	extrn f5c61_:near
	extrn f69db_:near
	extrn f6de9_:near
	extrn random_:near
	extrn test_bit_:near
#endasm
extern char *g4fa8;
extern char g00cc[];
extern char g450c[];
extern char g4511[];
extern char g51cc;
extern char pc_condition[];
extern char pc_item_type[];
extern char pc_stats[];
extern int cell_event_index;
extern int g4338;
extern int g433a;
extern int g4354;
extern int g43fe[];
extern int g50de[];
extern int g5186[];
extern int g51c2;
extern int g5264;
extern int g5274;
extern int g5276;
extern int g527a;
extern int game_state;
extern int game_state_arg;
extern int party_cell_x;
extern int party_cell_y;
extern int party_count;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
extern int pc_gold[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
extern int return_cmd;
extern int view_pos_group[];
extern long g51c0;
f7038(p4, p6)
{
	int l2;
	int l4;
	char l36[32];
	int l38;
	int l40;
	int l42;
	long l46;
	int l54[4];
	l4 = g5186[p6];
	access_scenario_record(6, l36, l4, 0);
	l2 = 0;
L7067:
	if (l2 >= 8) goto L7f73;
#asm
l7070:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0dfh,02ah,0e4h
	db 0e9h,0ddh,00eh
#endasm
	return 0;
	if (l36[((l2 << 2) + 2)]) goto L70d1;
	if (g5264) goto L70bd;
	f6d9d();
	fc999(*(int *)(l36 + (l2 << 2)));
	f6de9();
	goto L70cf;
L70bd:
	fc999(*(int *)(l36 + (l2 << 2)));
L70cf:
	goto L70ec;
L70d1:
	f5c61(*(int *)(l36 + (l2 << 2)), ((unsigned char)l36[((l2 << 2) + 2)] - 1));
L70ec:
	goto L7f6d;
	f5d9b(1541, 1);
	g433a = (unsigned char)g51cc;
	g4338 = 1;
	g4354 = 0;
	g5276 = 0;
	game_state = 10;
	return_cmd = 18;
	return 1;
	if (l36[((l2 << 2) + 2)]) goto L7148;
	f5d9b(1542, 0);
L7148:
	g5276 = 1;
	game_state = 5;
	return_cmd = 18;
	return 1;
	l38 = (*(int *)(l36 + (l2 << 2)) / 256);
	l40 = (*(int *)(l36 + (l2 << 2)) % 256);
	if ((unsigned)l36[((l2 << 2) + 2)] <= 0) goto L71aa;
	f5508((unsigned char)l36[((l2 << 2) + 2)], l38);
	view_pos_group[l40] = l38;
	f4572(view_pos_group[l40], l40);
	f5690();
	goto L71ba;
L71aa:
	view_pos_group[l40] = 0;
	f5690();
L71ba:
	goto L7f6d;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0deh,02ah,0e4h
	db 050h
	call f5a1e_
	db 059h,0e9h,098h,00dh
#endasm
	if (g5264) goto L7204;
	f6d9d();
	l42 = npc_input_word(p4, *(int *)(l36 + (l2 << 2)), (unsigned char)l36[((l2 << 2) + 2)]);
#asm
	call f6de9_
	db 0ebh,020h
#endasm
L7204:
	l42 = npc_input_word(p4, *(int *)(l36 + (l2 << 2)), (unsigned char)l36[((l2 << 2) + 2)]);
L7224:
	if (l42 <= 1) goto L7243;
	if (f7038(p4, l42) != 1) goto L7241;
	return 1;
L7241:
	goto L7287;
L7243:
	if (!g5264) goto L7287;
	get_message((*(int *)(l36 + (l2 << 2)) + 1), 20948);
	if (strlen(20948) <= 0) goto L7287;
	fc7d9(20948, 5);
	f4f73(g5264);
L7287:
	goto L7f6d;
#asm
	call f5a69_
	db 0e9h,0ddh,00ch,0a1h,09ah,04fh,0ebh,018h
#endasm
	party_y--;
#asm
	db 0ebh,026h
#endasm
	party_x--;
#asm
	db 0ebh,020h
#endasm
	party_y++;
#asm
	db 0ebh,01ah
#endasm
	party_x++;
#asm
	db 0ebh,014h
#endasm
L72ad:
	;
#asm
l72ad:
	db 03dh,000h,000h,074h,0e3h,03dh,001h,000h,074h,0e4h,03dh,002h,000h,074h,0e5h,03dh
	db 003h,000h,074h,0e6h
#endasm
L72c1:
	party_facing = ((party_facing + 2) % 4);
	fd90e(20384, 20382, 20380, party_x, party_y);
	cell_event_index = (unsigned char)(g4fa8 + party_level)[1728];
	game_state = 5;
	return_cmd = 18;
	return 1;
	l54[2] = npc_give_item_to_member(p4, *(int *)(l36 + (l2 << 2)), -1);
	l40 = p4;
	l38 = 0;
#asm
	db 0ebh,027h
#endasm
L7338:
	l54[2] = npc_give_item_to_member(l38, *(int *)(l36 + (l2 << 2)), -1);
	l40 = l38;
	l38++;
L735f:
	if ((l38 < party_count) && (l54[2] == -1)) goto L7338;
	if (l54[2] != -1) goto L737a;
	return 0;
L737a:
	if (l36[((l2 << 2) + 2)] != 1) goto L73bf;
	get_message(1547, 20948);
	replace_char_with_string(20948, ((432 * l40) + 17384), 94);
	f5d0c(20948, 1);
L73bf:
	goto L7f6d;
	if ((l42 = f6d11(p4, *(int *)(l36 + (l2 << 2)))) == -1) goto L741d;
	if (g00cc[(unsigned char)pc_item_type[((432 * p4) + (l42 << 3))]] != 1) goto L7411;
#asm
	db 0ffh,076h,0d6h,0ffh,076h,004h
	call f69db_
	db 083h,0c4h,004h,0ebh,00ch
#endasm
L7411:
	f6835(p4, l42);
L741d:
	goto L7f6d;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,050h,08ah
	db 047h,0deh,02ah,0e4h,08bh,0c8h,058h,08bh,0d9h,0f7h,0ebh,089h,056h,0d4h,089h,046h
	db 0d2h
#endasm
	*(long *)((char *)pc_gold + (432 * p4)) += l46;
	g51c0 -= l46;
	if (g51c0 >= 0L) goto L7487;
	g51c2 = 0;
	*(int *)&g51c0 = 0;
L7487:
	goto L7f6d;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0dch,0bbh,00ah
	db 000h,0f7h,0ebh,089h,056h,0d4h,089h,046h,0d2h
#endasm
	if (l46 != 0L) goto L74d6;
	l38 = 0;
#asm
	db 0ebh,017h
#endasm
L74b6:
	*(int *)((char *)g43fe + (432 * l38)) = 0;
	*(int *)((char *)pc_gold + (432 * l38)) = 0;
	l38++;
L74cd:
	if (l38 < party_count) goto L74b6;
L74d6:
	;
#asm
l74d6:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,0fch,043h,08bh,097h,0feh,043h
	db 03bh,056h,0d4h,07fh,007h,075h,007h,03bh,046h,0d2h,072h,002h
#endasm
L74f2:
	goto L7544;
L74f4:
	f5382(p4);
	if (*(long *)((char *)pc_gold + (432 * p4)) >= l46) goto L7544;
	if (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1) goto L753e;
	return 1;
L753e:
	return 0;
L7544:
	*(long *)((char *)pc_gold + (432 * p4)) -= l46;
	g51c0 += l46;
#asm
	db 0e9h,0feh,009h
#endasm
	goto L7f6d;
	if (((l42 = *(int *)(l36 + (l2 << 2))) <= 0) || (l42 >= 79)) goto L75ad;
	set_bit(((game_state_arg * 10) + 20204), l42, (unsigned char)l36[((l2 << 2) + 2)]);
L75ad:
	goto L7f6d;
	if (((l42 = *(int *)(l36 + (l2 << 2))) <= 0) || (l42 >= 79)) goto L7616;
	set_bit(((game_state_arg * 10) + 20204), l42, (unsigned char)l36[((l2 << 2) + 2)]);
	set_bit(((game_state_arg * 10) + 13304), l42, (unsigned char)l36[((l2 << 2) + 2)]);
L7616:
	goto L7f6d;
	if (((l42 = *(int *)(l36 + (l2 << 2))) <= 0) || (l42 >= 15)) goto L7647;
	set_bit(21112, l42, (unsigned char)l36[((l2 << 2) + 2)]);
L7647:
	goto L7f6d;
	if (((l42 = *(int *)(l36 + (l2 << 2))) <= 0) || (l42 >= 15)) goto L769b;
	set_bit(21112, l42, (unsigned char)l36[((l2 << 2) + 2)]);
	set_bit(((g5274 << 1) + 13472), l42, (unsigned char)l36[((l2 << 2) + 2)]);
L769b:
	goto L7f6d;
	if (test_bit(((game_state_arg * 10) + 20204), *(int *)(l36 + (l2 << 2))) != 1) goto L76ce;
	return 0;
L76ce:
	goto L7f6d;
	if (test_bit(((game_state_arg * 10) + 20204), *(int *)(l36 + (l2 << 2)))) goto L7700;
	return 0;
L7700:
	goto L7f6d;
	if (test_bit(21112, *(int *)(l36 + (l2 << 2))) != 1) goto L7726;
	return 0;
L7726:
	goto L7f6d;
	if (test_bit(21112, *(int *)(l36 + (l2 << 2)))) goto L774b;
	return 0;
L774b:
	goto L7f6d;
	if (l36[((l2 << 2) + 2)]) goto L7770;
	l54[2] = f6d11(p4, *(int *)(l36 + (l2 << 2)));
#asm
	db 0ebh,038h
#endasm
L7770:
	l54[2] = -1;
	l38 = 0;
	goto L7799;
L777c:
	l54[2] = f6d11(l38, *(int *)(l36 + (l2 << 2)));
	l38++;
L7799:
	if (l38 >= party_count) goto L77a8;
	if (l54[2] == -1) goto L777c;
L77a8:
	if (l54[2] != -1) goto L77b4;
	return 0;
L77b4:
	goto L7f6d;
	if (l36[((l2 << 2) + 2)]) goto L77d9;
	l54[2] = f6d11(p4, *(int *)(l36 + (l2 << 2)));
#asm
	db 0ebh,038h
#endasm
L77d9:
	l54[2] = -1;
	l38 = 0;
	goto L7802;
L77e5:
	l54[2] = f6d11(l38, *(int *)(l36 + (l2 << 2)));
	l38++;
L7802:
	if (l38 >= party_count) goto L7811;
	if (l54[2] == -1) goto L77e5;
L7811:
	if (l54[2] == -1) goto L781d;
	return 0;
L781d:
	goto L7f6d;
	if (random(100) <= *(int *)(l36 + (l2 << 2))) goto L7840;
	return 0;
L7840:
	goto L7f6d;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,0ffh,077h,0dch,0a1h,03ch
	db 036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call test_bit_
	db 083h,0c4h,004h,085h,0c0h,075h,025h
#endasm
	if (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1) goto L7891;
	return 1;
L7891:
	goto L7f6d;
	if ((test_bit(((game_state_arg * 10) + 20204), *(int *)(l36 + (l2 << 2))) != 1) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L78e3;
	return 1;
L78e3:
	goto L7f6d;
	if ((test_bit(21112, *(int *)(l36 + (l2 << 2)))) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L7927;
	return 1;
L7927:
	goto L7f6d;
	if ((test_bit(21112, *(int *)(l36 + (l2 << 2))) != 1) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L796c;
	return 1;
L796c:
	goto L7f6d;
	if ((random(100) >= *(int *)(l36 + (l2 << 2))) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L79a3;
	return 1;
L79a3:
	goto L7f6d;
	l38 = 0;
#asm
	db 0ebh,05fh
#endasm
L79ad:
	if (pc_condition[(432 * l38)]) goto L7a09;
	get_message(1548, 20948);
	replace_char_with_string(20948, ((432 * l38) + 17384), 94);
	f5d0c(20948, 1);
	g4511[(432 * l38)]++;
	f5078(l38, g527a);
L7a09:
	l38++;
L7a0c:
	if (l38 < party_count) goto L79ad;
	goto L7f6d;
	l54[2] = *(int *)(l36 + (l2 << 2));
	l38 = 0;
#asm
	db 0e9h,0d9h,000h
#endasm
L7a31:
	if ((unsigned)pc_condition[(432 * l38)] >= 3) goto L7b07;
	if (f6d11(l38, 245) == -1) goto L7a71;
	l54[2] = (unsigned char)l36[((l2 << 2) + 2)];
	l38 = party_count;
	goto L7b07;
L7a71:
	get_message(1549, 20948);
	replace_char_with_string(20948, ((432 * l38) + 17384), 94);
	f5d0c(20948, 1);
	*(int *)((char *)pc_hp + (432 * l38)) = (random(*(int *)((char *)pc_hp + (432 * l38))) + 1);
	*(int *)((char *)pc_hp_max + (432 * l38)) -= (random(4) + 1);
	if (*(int *)((char *)pc_hp_max + (432 * l38)) >= 1) goto L7ae8;
	*(int *)((char *)pc_hp_max + (432 * l38)) = 1;
L7ae8:
	if (*(int *)((char *)pc_hp + (432 * l38)) <= *(int *)((char *)pc_hp_max + (432 * l38))) goto L7afa;
	*(int *)((char *)pc_hp + (432 * l38)) = *(int *)((char *)pc_hp_max + (432 * l38));
L7afa:
	f5078(l38, g527a);
L7b07:
	l38++;
L7b0a:
	if (l38 < party_count) goto L7a31;
	if (f7038(0, l54[2]) != 1) goto L7b2e;
	return 1;
L7b2e:
	goto L7f6d;
	l38 = 0;
#asm
	db 0e9h,0c5h,000h
#endasm
L7b39:
	l54[0] = (*(int *)(l36 + (l2 << 2)) - 1);
	l54[1] = ((unsigned char)l36[((l2 << 2) + 2)] - 1);
	l54[3] = 0;
L7b59:
	l54[2] = l54[l54[3]];
	if (l54[2] < 0) goto L7bed;
	if (l54[2] <= 7) goto L7b80;
	l54[2] = random(8);
L7b80:
	if ((unsigned)pc_stats[((432 * l38) + l54[2])] >= 18) goto L7bed;
	pc_stats[((432 * l38) + l54[2])]++;
	get_message(5015, 20948);
	get_message((l54[2] + 5050), 21116);
	replace_char_with_string(20948, ((432 * l38) + 17384), 94);
	replace_char_with_string(20948, 21116, 36);
	f5d0c(20948, 1);
L7bed:
	l54[3]++;
	if (l54[3] < 2) goto L7b59;
	l38++;
L7bfe:
	if (l38 < party_count) goto L7b39;
	goto L7f6d;
	l42 = 0;
	l38 = 0;
#asm
	db 0ebh,00eh
#endasm
L7c19:
	l42 += random(8);
	l38++;
L7c27:
	if (*(int *)(l36 + (l2 << 2)) > l38) goto L7c19;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,080h,07fh,0deh,000h,076h
	db 027h
#endasm
	*(int *)((char *)pc_stamina + (432 * p4)) -= l42;
	if (*(int *)((char *)pc_stamina + (432 * p4)) >= 0) goto L7c70;
	*(int *)((char *)pc_stamina + (432 * p4)) = 0;
	g450c[(432 * p4)] = *(char *)&l42;
L7c70:
	goto L7c95;
L7c72:
	*(int *)((char *)pc_stamina + (432 * p4)) += l42;
	if (*(int *)((char *)pc_stamina + (432 * p4)) <= *(int *)((char *)pc_stamina_max + (432 * p4))) goto L7c95;
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((char *)pc_stamina_max + (432 * p4));
L7c95:
	f5078(p4, g527a);
	goto L7f6d;
	if (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1) goto L7cca;
	return 1;
L7cca:
	goto L7f6d;
#asm
	db 0b8h,001h,000h,050h,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah
	db 047h,0deh,02ah,0e4h,050h
	call random_
	db 059h,0d1h,0e0h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,003h,0ddh,08bh,04fh
	db 0dch,003h,0c1h,050h
	call f5c61_
	db 083h,0c4h,004h,0e9h,06bh,002h
#endasm
	party_facing = *(int *)(l36 + (l2 << 2));
	f5690();
#asm
	db 0b8h,004h,000h,050h
	call f5a1e_
	db 059h,0e9h,04ch,002h
#endasm
	l38 = 0;
#asm
	db 0ebh,077h
#endasm
L7d28:
	switch ((unsigned char)l36[((l2 << 2) + 2)]) {
case 0:
	party_y++;
	goto L7d66;
case 1:
	party_x++;
	goto L7d66;
case 2:
	party_y--;
	goto L7d66;
case 3:
	party_x--;
	goto L7d66;
	}
L7d66:
	fd90e(20384, 20382, 20380, party_x, party_y);
	cell_event_index = (unsigned char)(g4fa8 + party_level)[1728];
	f5690();
	f5a1e(4);
	l38++;
L7d9f:
	if (*(int *)(l36 + (l2 << 2)) > l38) goto L7d28;
	goto L7f6d;
	if ((fb2fd(p4)) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L7de8;
	return 1;
L7de8:
	goto L7f6d;
	return 1;
	party_x = 129;
	party_y = 132;
	party_cell_x = 1;
	party_cell_y = 4;
	party_level = 0;
	party_facing = 0;
	game_state_arg = 13;
	game_state = 6;
	return_cmd = 18;
#asm
	db 0b8h,001h,000h,0e9h,059h,0f2h
#endasm
	f6e7e(*(int *)(l36 + (l2 << 2)), (unsigned char)l36[((l2 << 2) + 2)]);
	return;
	l54[2] = -1;
	l38 = 0;
#asm
	db 0ebh,04ah
#endasm
L7e56:
	if ((l54[2] = f6d11(l38, (unsigned char)l36[((l2 << 2) + 2)])) == -1) goto L7e9d;
	f6835(l38, l54[2]);
	npc_give_item_to_member(l38, *(int *)(l36 + (l2 << 2)), -1);
L7e9d:
	l38++;
L7ea0:
	if ((l38 < party_count) && (l54[2] == -1)) goto L7e56;
	goto L7f6d;
	l38 = (*(int *)(l36 + (l2 << 2)) / 256);
	l40 = (*(int *)(l36 + (l2 << 2)) % 256);
	*(int *)((char *)g50de + ((l38 * 10) + (l40 << 1))) = (unsigned char)l36[((l2 << 2) + 2)];
#asm
	db 0ebh,07ch,08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,003h,0ddh,08ah,047h,0deh
	db 02ah,0e4h,0a3h,042h,051h,0ebh,067h,083h,070h,08bh,070h,0efh,070h,029h,071h,060h
	db 071h,0bdh,071h,0d5h,071h,08ah,072h,090h,072h,00dh,073h,0c2h,073h,020h,074h,08ah
	db 074h,06fh,075h,072h,075h,0b0h,075h,019h,076h,04ah,076h,09eh,076h,0d1h,076h,003h
	db 077h,029h,077h,04eh,077h,0b7h,077h,020h,078h,043h,078h,094h,078h,0e6h,078h,02ah
	db 079h,06fh,079h,0a6h,079h,018h,07ah,031h,07bh,00dh,07ch,0a5h,07ch,0cdh,07ch,002h
	db 07dh,021h,07dh,0b8h,07dh,0ebh,07dh,0f1h,07dh,02dh,07eh,04ah,07eh,0b2h,07eh,0f1h
	db 07eh
l7f60:
	db 03dh,02dh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,006h,07fh
#endasm
L7f6d:
	l2++;
	goto L7067;
L7f73:
	return;
}
