#asm
	extrn f4572_:near
	extrn get_message_:near
	extrn print_combat_line_:near
	extrn random_:near
#endasm
extern char *g43b8;
extern char g018e[];
extern char g44f6[];
extern char g44f9[];
extern char g4524[];
extern char g4525[];
extern char g505c;
extern char g50ac;
extern char pc_class[];
extern char pc_equipped[];
extern char pc_item_icon[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int g4352;
extern int g435c;
extern int g435e;
extern int g44d8[];
extern int g44da[];
extern int g44e8[];
extern int g44ea[];
extern int g4ecc;
extern int g4ece;
extern int g4ed4;
extern int g4ed6;
extern int g4fc8;
extern int g500a;
extern int g50fc;
extern int group_monster_rec[];
extern int monster_groups[];
extern int party_picture_win;
extern int pc_item_id[];
/* Execute one melee/missile attack of the acting combatant (g435e side, g435c index); p8 is the attack kind. */
do_attack(p4, p6, p8)
char *p4;
{
	char x0[44];
	int l46;
	char x46[26];
	int l74;
	int l76;
	int l78;
	int l80;
	int l82;
	int l84;
	int l86;
	int l88;
	int l90;
	int l92;
	int l94;
	int l96;
	int l98;
	int l100;
	int l102;
	char x102[2];
	int l106;
	int l108;
	char l110[2];
	int l112;
	int l114;
	int l116;
	int l118;
	char x118[4];
	int l124;
	int l126;
	int l128;
	char x128[12];
	int l142;
	char x142[2];
	int l146;
	int l148;
	int l150;
	int l152;
	int l154;
	int l156;
	int l158;
	int l160;
	register int rsi;
	register int rdi;
	l78 = (unsigned char)p4[31];
	l80 = (unsigned char)p4[32];
	l118 = -1;
	l150 = -1;
	l158 = 0;
	g500a = 4;
	get_combatant_name(20492, g435e, g435c);
	g50ac = 0;
	g505c = 0;
	if (g435e) goto L4e25;
	get_message((p8 + 3350), 20652);
	l76 = (unsigned char)pc_equipped[((432 * g435c) + p6)];
	if (p8 != 8) goto L4cdf;
	l76 = (unsigned char)g44f9[(432 * g435c)];
L4cdf:
	if (((!p4[43]) || (p8 == 4)) || (p8 == 8)) goto L4d0a;
	get_message((random(2) + 3385), 20652);
L4d0a:
	if (l76 == 255) goto L4e22;
	access_scenario_record(1, &l74, *(int *)((char *)pc_item_id + ((432 * g435c) + (l76 << 3))), 0);
	strcpy(20572, &l74);
	if ((p8 != 4) && (p8 != 8)) goto L4e22;
	if ((p8 != 4) || (!l46)) goto L4d7c;
	l150 = l46;
	get_message(3384, 20652);
L4d7c:
	switch ((unsigned char)pc_item_icon[((432 * g435c) + (l76 << 3))]) {
case 0:
	l118 = 5;
	goto L4e22;
case 20:
	l118 = 11;
	goto L4e22;
case 6:
	l118 = 10;
	goto L4e22;
case 18:
	l118 = 13;
	goto L4e22;
case 21:
	l118 = 12;
	goto L4e22;
case 22:
case 83:
	l118 = 7;
	goto L4e22;
case 23:
	l118 = 9;
	goto L4e22;
case 32:
case 100:
case 101:
	l118 = 14;
	goto L4e22;
case 34:
	l118 = 3;
	goto L4e22;
	}
L4e22:
	goto L4f9b;
L4e25:
	;
#asm
l4e25:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,006h,080h,0b8h
	db 080h,000h,003h,076h,003h
#endasm
	goto L4f79;
L4e3d:
	get_message((p8 + 3350), 20652);
	if ((!p4[43]) || ((p8 == 4) || (p8 == 8))) goto L4e7a;
	get_message((random(2) + 3385), 20652);
L4e7a:
	if ((p8 != 4) && (p8 != 8)) goto L4f4e;
#asm
l4e89:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,006h,0b9h,004h
	db 000h,0d3h,0e0h,08bh,0f0h,08bh,040h,044h,089h,046h,090h,08bh,040h,046h,089h,046h
	db 092h
#endasm
	rsi = p6;
#asm
	db 08ah,080h,083h,000h,02ah,0e4h,0ebh,06dh
#endasm
	l118 = 6;
#asm
	db 0e9h,07ch,000h
#endasm
	l118 = 9;
#asm
	db 0ebh,075h
#endasm
	l118 = 10;
#asm
	db 0ebh,06eh
#endasm
	l118 = 8;
#asm
	db 0ebh,067h
#endasm
	l118 = 12;
#asm
	db 0ebh,060h
#endasm
	l118 = 14;
	l150 = (((unsigned char)l110[0] << 8) + (unsigned char)l110[(0 + 1)]);
#asm
	db 0ebh,041h,002h,000h,007h,000h,009h,000h,00ah,000h,00dh,000h,012h,000h,013h,000h
	db 018h,000h,01ch,000h,020h,000h,0b5h,04eh,0bdh,04eh,0c4h,04eh,0c4h,04eh,0cbh,04eh
	db 0cbh,04eh,0cbh,04eh,0cbh,04eh,0d2h,04eh,0d9h,04eh,039h,04fh
l4f22:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,0f8h,04eh,0b9h,00bh,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,012h,05fh,007h,0ffh,0e1h
#endasm
L4f39:
	if (l150 == -1) goto L4f4e;
	get_message(3384, 20652);
L4f4e:
	;
#asm
l4f4e:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,006h,080h,0b8h
	db 083h,000h,000h,076h,014h,0b8h,05ch,050h,050h,08ah,080h,083h,000h,02ah,0e4h,005h
	db 0d7h,00eh,050h
	call get_message_
	db 083h,0c4h,004h
#endasm
L4f77:
	goto L4f9b;
L4f79:
	;
#asm
l4f79:
	db 0b8h,0ach,050h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh
	db 076h,006h,08ah,080h,080h,000h,02ah,0e4h,005h,02bh,00dh,050h
	call get_message_
	db 083h,0c4h,004h
#endasm
L4f9b:
	print_combat_line(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, 11);
	if (l150 != -1) goto L4ff5;
	get_combatant_name(20492, l78, l80);
	print_combat_centered(20492, (l78 == 0 ? 1 : 6), 2);
L4ff5:
	if (l118 == -1) goto L501e;
	f8efc(l78, l80, l118, (l150 == -1 ? 0 : 1));
	l158 = 1;
L501e:
	l84 = (((((unsigned char)(*(char **)((char *)group_monster_rec + (l78 << 1)))[137] + (unsigned char)(*(char **)((char *)group_monster_rec + (l78 << 1)))[136]) + (unsigned char)(*(char **)((char *)group_monster_rec + (l78 << 1)))[135]) - (((unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[137] + (unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[136]) + (unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[135])) / 2);
	l126 = p4[40];
	if (g435e) goto L5408;
	if (p8 != 4) goto L509d;
	l124 = 5;
	goto L51d1;
L509d:
	if ((unsigned char)pc_equipped[((432 * g435c) + p6)] == 255) goto L51cc;
#asm
l50b7:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,050h,08ah,087h,0f8h,044h,02ah,0e4h,08bh,0c8h
	db 0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,08bh,0c8h,058h,003h,0c1h,08bh,0d8h,08ah,087h,02dh
	db 044h,02ah,0e4h,0e9h,0d6h,000h
#endasm
	l124 = 0;
	goto L51ca;
	l124 = 1;
#asm
	db 0e9h,0ddh,000h
#endasm
	l124 = 2;
#asm
	db 0e9h,0d5h,000h
#endasm
	l124 = 3;
#asm
	db 0e9h,0cdh,000h
#endasm
	l124 = 4;
#asm
	db 0e9h,0c5h,000h
#endasm
	l124 = 7;
#asm
	db 0e9h,0bdh,000h
#endasm
	l124 = 6;
#asm
	db 0e9h,0b5h,000h
#endasm
	l124 = 8;
#asm
	db 0e9h,0adh,000h
#endasm
	l124 = 0;
#asm
	db 0e9h,0a5h,000h,000h,000h,001h,000h,002h,000h,003h,000h,004h,000h,005h,000h,006h
	db 000h,007h,000h,008h,000h,009h,000h,00ah,000h,00bh,000h,00ch,000h,00dh,000h,00eh
	db 000h,00fh,000h,010h,000h,011h,000h,012h,000h,013h,000h,014h,000h,018h,000h,026h
	db 000h,033h,000h,034h,000h,035h,000h,036h,000h,037h,000h,038h,000h,039h,000h,03ah
	db 000h,03bh,000h,059h,000h,05ah,000h,062h,000h,0ddh,050h,0e5h,050h,0edh,050h,0edh
	db 050h,0f5h,050h,0f5h,050h,0f5h,050h,0fdh,050h,0fdh,050h,0fdh,050h,0fdh,050h,005h
	db 051h,005h,051h,00dh,051h,0e5h,050h,0e5h,050h,0e5h,050h,0fdh,050h,0ddh,050h,0fdh
	db 050h,0edh,050h,015h,051h,015h,051h,0e5h,050h,0f5h,050h,0e5h,050h,0f5h,050h,0e5h
	db 050h,0f5h,050h,0fdh,050h,0e5h,050h,0e5h,050h,0ddh,050h,0fdh,050h,0f5h,050h,01dh
	db 051h
l51b3:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,025h,051h,0b9h,024h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,044h,05fh,007h,0ffh,0e1h
#endasm
L51ca:
	goto L51d1;
L51cc:
	l124 = 9;
L51d1:
	if ((((l124 == 9) && ((unsigned)g4525[(432 * g435c)] <= 0)) && (pc_class[(432 * g435c)] != 12)) && (pc_class[(432 * g435c)] != 13)) goto L5206;
	try_raise_skill(g435c, l124, 2);
L5206:
	rsi = get_load_category_x(g435c);
	rdi = &l142;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h,08bh,086h,076h,0ffh,083h,07eh,006h
	db 000h,075h,004h,08bh,086h,074h,0ffh
#endasm
L522b:
	;
#asm
l522b:
	db 089h,086h,070h,0ffh,08bh,05eh,004h,0ffh,077h,008h,0ffh,077h,006h,0b8h,000h,000h
	db 050h
	call f4572_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,096h
	db 045h,098h,08bh,0c8h,058h,003h,0c1h,050h,08bh,046h,006h,0b9h,004h,000h,0d3h,0e0h
	db 003h,0d8h,08ah,087h,0e6h,044h,098h,08bh,0c8h,058h,003h,0c1h,050h,08bh,05eh,004h
	db 08ah,047h,027h,098h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,003h
	db 0c1h,003h,046h,0ach,08bh,0c8h,08bh,086h,070h,0ffh,003h,0c8h,08bh,0c1h,050h,0b8h
	db 0b0h,001h,0f7h,02eh,05ch,043h,003h,046h,084h,08bh,0d8h,08ah,087h,01ch,045h,02ah
	db 0e4h,0b9h,003h,000h,099h,0f7h,0f9h,08bh,0c8h,058h,02bh,0c1h,089h,046h,0aah
#endasm
	l112 = *(int *)((char *)g44d8 + ((432 * g435c) + (p6 << 4)));
	*(int *)(l110 + 0) = *(int *)((char *)g44da + ((432 * g435c) + (p6 << 4)));
	l82 = (((432 * g435c) + (p6 << 4)) + 17624);
	l114 = (unsigned char)pc_equipped[((432 * g435c) + p6)];
	if (p8 != 8) goto L5356;
	if (((l116 = (unsigned char)g44f9[(432 * g435c)]) == 255) || (pc_item_type[((432 * g435c) + (l116 << 3))] != 4)) goto L5354;
	l112 = *(int *)((char *)g44e8 + (432 * g435c));
	*(int *)(l110 + 0) = *(int *)((char *)g44ea + (432 * g435c));
	l82 = ((432 * g435c) + 17640);
	l86 += g44f6[(432 * g435c)];
	l126 = 0;
	use_item_charge_x(l116);
L5354:
	goto L5391;
L5356:
	if (p8 != 4) goto L5391;
	if ((pc_item_type[((432 * g435c) + (l114 << 3))] != 14) && (((unsigned)pc_item_type[((432 * g435c) + (l114 << 3))] >= 12) || (pc_item_type[((432 * g435c) + (l114 << 3))] == 2))) goto L5385;
	pc_item_qty[((432 * g435c) + (l114 << 3))] = 1;
L5385:
	l126 = 0;
	use_item_charge_x(l114);
L5391:
	rsi = (44 * l80);
#asm
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0ffh,070h,008h,0ffh,070h
	db 006h,0b8h,001h,000h,050h
	call f4572_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h,098h,08bh,0c8h,058h,003h,0c1h
	db 089h,046h,0a8h
#endasm
	if (g4ed4 <= 0) goto L53e1;
	l88 += g4ed6;
L53e1:
	l90 = ((*(char **)((char *)group_monster_rec + (l78 << 1)))[190] + l88);
	rsi = p8;
	l92 = (((char *)group_monster_rec[l78] + rsi)[198] + l88);
	goto L5531;
L5408:
	;
#asm
l5408:
	db 08bh,05eh,004h,0ffh,077h,008h,0ffh,077h,006h,0b8h,000h,000h,050h
	call f4572_
	db 083h,0c4h,006h,050h,08bh,05eh,004h,08ah,047h,027h,098h,08bh,0d0h,0d1h,0e0h,0d1h
	db 0e0h,003h,0c2h,08bh,0c8h,058h,003h,0c1h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0b6h,043h,08bh,046h,006h,0b9h,004h,000h,0d3h,0e0h,08bh,0f0h,08ah,040h
	db 052h,098h,08bh,0c8h,058h,003h,0c1h,003h,046h,0ach,089h,046h,0aah,08bh,040h,044h
	db 089h,046h,090h,08bh,040h,046h,089h,046h,092h,003h,0deh,083h,0c3h,044h,089h,05eh
	db 0aeh
#endasm
	if ((p8 != 4) && (p8 != 8)) goto L547a;
	l126 = 0;
L547a:
	if (l78) goto L54a0;
	rsi = get_load_category_x(l80);
	rdi = &l142;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h,08bh,086h,072h,0ffh,089h,086h,06eh
	db 0ffh
#endasm
	goto L54a6;
L54a0:
	l146 = 0;
L54a6:
	rsi = (44 * l80);
#asm
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0ffh,070h,008h,0ffh,070h
	db 006h,0b8h,001h,000h,050h
	call f4572_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h,098h,08bh,0c8h,058h,003h,0c1h
	db 089h,046h,0a8h
#endasm
	if ((l78) || (g4ecc <= 0)) goto L54fc;
	l88 -= g4ece;
L54fc:
	l90 = (((*(char **)((char *)group_monster_rec + (l78 << 1)))[190] + l88) + l146);
	l92 = (l88 + l146);
	if (!l78) goto L5531;
	rsi = p8;
	l92 += ((char *)group_monster_rec[l78] + rsi)[198];
L5531:
	l156 = 1;
	if (!p4[43]) goto L5555;
	l90 = (l90 > 10 ? l90 : 10);
	l156 = 2;
L5555:
	if ((unsigned)p4[18] <= 0) goto L557b;
	l86 = (l86 < 90 ? 90 : l86);
	l90 = (l90 > 0 ? 0 : l90);
L557b:
	if ((((unsigned)p4[22] <= 0) && ((unsigned)p4[15] <= 0)) && ((unsigned)p4[23] <= 0)) goto L5591;
	l86 += 25;
L5591:
	rsi = (44 * l80);
	if (((((unsigned)((char *)monster_groups[l78] + rsi)[18] <= 0) && ((unsigned)((char *)monster_groups[l78] + rsi)[16] <= 0)) && ((unsigned)((char *)monster_groups[l78] + rsi)[17] <= 0)) && (((char *)monster_groups[l78] + rsi)[34] != 2)) goto L55c7;
	l90 = 15;
	l156 = 2;
L55c7:
	if (((unsigned)((char *)monster_groups[l78] + rsi)[22] <= 0) && ((unsigned)((char *)monster_groups[l78] + rsi)[15] <= 0)) goto L55d7;
	l90 += 4;
L55d7:
	l128 = 0;
	if ((unsigned)(*(char **)((char *)group_monster_rec + (g435e << 1)))[134] <= 15) goto L55f1;
	l128++;
L55f1:
	if ((unsigned)(*(char **)((char *)group_monster_rec + (g435e << 1)))[134] <= 17) goto L55fb;
	l128++;
L55fb:
	l126 += l128;
	if ((l100 = (random(((unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[212] - (((char *)monster_groups[l78] + rsi)[41] / 10))) + 1)) >= 1) goto L563e;
	l100 = 1;
L563e:
	if (l100 <= 4) goto L5649;
	l100 = 4;
L5649:
	;
#asm
l5649:
	db 08bh,046h,008h,0e9h,09dh,000h
#endasm
	goto L56f9;
	l90 -= 2;
	l92++;
	l126++;
#asm
	db 0e9h,098h,000h
#endasm
	l92 -= 2;
	l126 = ((l126 + l128) + 2);
#asm
	db 0e9h,084h,000h
#endasm
	l90 += -4;
	l92 += -4;
	l156 = 2;
#asm
	db 0ebh,074h
#endasm
	l100 = 1;
	l156 = 1;
	l90--;
	l92++;
#asm
	db 0ebh,061h
#endasm
	l90++;
	l92--;
#asm
	db 0ebh,059h
#endasm
	l90 -= 2;
#asm
	db 08bh,046h,082h,003h,046h,080h,040h,040h,089h,046h,082h,0ebh,046h
#endasm
	l90 += 2;
	l92 -= 2;
	l156 = 1;
#asm
	db 0ebh,032h
#endasm
	l100 = 1;
	l156 = 1;
	l92 += 2;
#asm
	db 0ebh,01fh,04fh,056h,052h,056h,061h,056h,075h,056h,085h,056h,098h,056h,0a0h,056h
	db 0b3h,056h,0c7h,056h
l56ec:
	db 03dh,009h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0dah,056h
#endasm
L56f9:
	rsi = (44 * l80);
	if (((char *)monster_groups[l78] + rsi)[30] != 7) goto L5727;
	l90 = (l90 > 10 ? l90 : 10);
	l156 = 2;
L5727:
	if ((((((char *)monster_groups[l78] + rsi)[18]) || (((char *)monster_groups[l78] + rsi)[16])) || (((char *)monster_groups[l78] + rsi)[17])) || (((char *)monster_groups[l78] + rsi)[34])) goto L59aa;
	if (((char *)monster_groups[l78] + rsi)[30] != 1) goto L5971;
	switch (*(int *)(((char *)monster_groups[l78] + rsi) + 10)) {
case 0:
	if (l78) goto L578b;
	l90 -= (((unsigned char)g4524[(432 * l80)] / 10) + 1);
	try_raise_skill(l80, 8, 2);
	goto L57aa;
L578b:
	rsi = (44 * l80);
	l90 -= ((*(int *)((char *)monster_groups[l78] + rsi) / 4) + 1);
L57aa:
	l156 = 1;
	goto L596f;
case 1:
	l90 -= 2;
	l156 = 1;
	goto L596f;
case 2:
	if ((p8 == 4) || (p8 == 8)) goto L5949;
	rsi = (44 * l80);
	((char *)monster_groups[l78] + rsi)[30] = 0;
	rsi = (44 * l80);
	((char *)monster_groups[l78] + rsi)[33] = 0;
#asm
	db 0a1h,05ah,043h,048h,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h
	db 0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,018h,0a0h,05eh,043h,050h
	db 0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,058h,088h,040h,01fh,0a0h,05ch,043h,050h,0b8h,02ch,000h,0f7h,06eh
	db 0b0h,08bh,0f0h,08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h
	db 040h,020h
#endasm
	rsi = (44 * l80);
	*(int *)(((char *)monster_groups[l78] + rsi) + 12) = -1;
	rsi = (44 * l80);
	*(int *)(((char *)monster_groups[l78] + rsi) + 10) = 255;
	if (l78) goto L58cd;
	l148 = 7;
L5890:
	if (test_bit(((432 * l80) + 17639), l148) != 1) goto L58c5;
#asm
	db 08bh,086h,06ch,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h
	db 0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,00ah
#endasm
L58c5:
	if (--l148 >= 0) goto L5890;
	goto L5913;
L58cd:
	l148 = 7;
L58d3:
	if (test_bit((group_monster_rec[l78] + 83), l148) != 1) goto L590d;
#asm
	db 08bh,086h,06ch,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh,046h,0b2h
	db 0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,00ah
#endasm
L590d:
	if (--l148 >= 0) goto L58d3;
L5913:
	rsi = (44 * l80);
	if (*(int *)(((char *)monster_groups[l78] + rsi) + 10) != 255) goto L5932;
	*(int *)(((char *)monster_groups[l78] + rsi) + 10) = 8;
L5932:
	rsi = (44 * l80);
	((char *)monster_groups[l78] + rsi)[28] = 0;
L5949:
	goto L596f;
case 3:
	l90 = 15;
	goto L596f;
	}
L596f:
	goto L59aa;
L5971:
	if (((l78) || ((unsigned char)g44f9[(432 * l80)] == 255)) || (pc_item_type[((432 * l80) + ((unsigned char)g44f9[(432 * l80)] << 3))] != 11)) goto L59aa;
	try_raise_skill(l80, 8, 0);
L59aa:
	if ((((!g435e) || (l158)) || (((unsigned)g43b8[210] <= 0) || (g43b8[210] == 6))) || ((*(char **)((char *)group_monster_rec + (g435e << 1)))[210] != g43b8[210])) goto L59eb;
	play_sound(14);
L59eb:
	combat_delay((g4fc8 / 4));
	l98 = 0;
	goto L5e71;
L5a01:
	;
#asm
l5a01:
	db 0b8h,000h,000h,083h,03eh,0cch,04fh,000h,075h,008h
#endasm
	random(100);
L5a13:
	;
#asm
l5a13:
	db 089h,046h,0a0h
#endasm
	if (l78) goto L5a4d;
	l108 = pick_weighted((group_monster_rec[g435e] + 182));
#asm
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,094h,08ah,080h
	db 0beh,000h,098h,003h,046h,0a4h,089h,046h,0a2h
#endasm
	goto L5a7c;
L5a4d:
	l108 = pick_weighted((group_monster_rec[l78] + 174));
#asm
	db 08bh,046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,094h,08ah,080h
	db 0beh,000h,098h,003h,046h,0a4h,089h,046h,0a2h
#endasm
L5a7c:
	rsi = (44 * l80);
	if (((char *)monster_groups[l78] + rsi)[34] != 2) goto L5aa5;
	l94 = (l94 > 0 ? 0 : l94);
L5aa5:
	clear_window_area(party_picture_win, 0, 3, 39, 4);
	if (l158) goto L5ace;
	play_sound(6);
L5ace:
	if (((*(char **)((char *)group_monster_rec + (l78 << 1)))[208] != 22) || (l150 != -1)) goto L5b4f;
	if (g435e) goto L5b4a;
	if ((unsigned char)pc_equipped[((432 * g435c) + p6)] == 255) goto L5b43;
	if ((*(int *)((char *)pc_item_id + ((432 * g435c) + ((unsigned char)pc_equipped[((432 * g435c) + p6)] << 3))) == 458) && (g4352)) goto L5b3b;
	l96 = 0;
	goto L5b41;
L5b3b:
	l156 = 1;
L5b41:
	goto L5b48;
L5b43:
	l96 = 0;
L5b48:
	goto L5b4f;
L5b4a:
	l96 = 0;
L5b4f:
	if (((p8 != 4) && (p8 != 8)) || (random(100) >= (unsigned char)g018e[monster_groups[l78]])) goto L5b99;
	print_msg_centered(3214, 14, 3);
	play_sound(7);
	goto L5e60;
L5b99:
	if ((l96 < 5) || (((l96 < 95) && ((l86 - (l90 * 5)) >= l96)) && (l150 == -1))) goto L5e4e;
	if (l150 == -1) goto L5bf7;
	l154 = (l150 / 256);
	l152 = (l150 % 256);
	g50fc = 1;
	do_cast_spell(p4, l152, l154);
	goto L5e4c;
L5bf7:
	print_msg_centered(3302, 4, 3);
	play_sound(7);
	if ((*(char **)((char *)group_monster_rec + (l78 << 1)))[208] != 17) goto L5c36;
	get_message((l108 + 3330), 20492);
	goto L5c47;
L5c36:
	get_message((l108 + 3320), 20492);
L5c47:
	l102++;
	if (p4[43] != 1) goto L5c57;
	p4[43] = -1;
L5c57:
	l106 = ((roll_dice_x(l112, *(int *)(l110 + 0)) + l126) * l156);
	if ((l106 <= 0) || ((l96 < 95) && ((l86 - (l94 * 5)) >= l96))) goto L5e09;
	int_to_string(l106, 20652);
	get_message(3306, 20572);
	set_cursor(party_picture_win, 0, 4);
#asm
	db 0b8h,005h,000h,050h,050h,0b8h,004h,000h,050h,0b8h,05ch,050h,050h,0b8h,0ach,050h
	db 050h,0b8h,00ch,050h,050h
	call print_combat_line_
	db 083h,0c4h,00ch,08bh,046h,096h,050h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh
	db 046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,029h,040h,002h
#endasm
	rsi = (44 * l80);
	((char *)monster_groups[l78] + rsi)[16] = 0;
#asm
	db 0b8h,003h,000h,050h
	call random_
	db 059h,08bh,0c8h,040h,040h,08bh,0c8h,0b8h,02ch,000h,0f7h,06eh,0b0h,08bh,0f0h,08bh
	db 046h,0b2h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,011h,02ah,0e4h,02bh
	db 0c1h,089h,086h,060h,0ffh,03dh,000h,000h,07dh,006h
#endasm
	l160 = 0;
L5d46:
	if (l160 <= 255) goto L5d54;
	l160 = 255;
L5d54:
	;
#asm
l5d54:
	db 08ah,086h,060h,0ffh,088h,040h,011h
#endasm
	rsi = (44 * l80);
	if (*(int *)(((char *)monster_groups[l78] + rsi) + 2) > 0) goto L5dba;
	combat_delay((g4fc8 / 4));
	do_damage_effect(l78, l80, 3486, 0, 3, 0, 6, 6, 3408, 0);
	if (p4[43] != -1) goto L5db8;
	p4[43] = 1;
L5db8:
	goto L5e07;
L5dba:
	if (l78) goto L5dd5;
	play_sound(2);
	draw_member_card_x(l80, 1);
L5dd5:
	combat_delay((g4fc8 / 4));
	if ((*(char **)((char *)group_monster_rec + (l78 << 1)))[208] == 22) goto L5e07;
	apply_hit_effects(p4, l82, l78, l80);
L5e07:
	goto L5e4c;
L5e09:
	get_message(3303, 20652);
	set_cursor(party_picture_win, 0, 4);
	g505c = 0;
	print_combat_line(20492, 20652, 20572, 4, 14, 0);
L5e4c:
	goto L5e60;
L5e4e:
	print_msg_centered(3301, 14, 3);
L5e60:
	combat_delay((g4fc8 / 4));
	l98++;
L5e71:
	if (l98 >= l100) goto L5e95;
	rsi = (44 * l80);
	if ((unsigned)((char *)monster_groups[l78] + rsi)[34] < 3) goto L5a01;
L5e95:
	if (p4[43] != -1) goto L5ea2;
	p4[43] = 0;
L5ea2:
	if (l78) goto L5eb5;
	draw_member_card_x(l80, 0);
L5eb5:
	;
}
