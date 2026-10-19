#asm
	extrn swapmem_:near
#endasm
extern char g458a[];
extern char g458b[];
extern char pc_condition[];
extern char pc_sex[];
extern int combat_over;
extern int g4fb8;
extern int g4fba;
extern int member_pcfile_index[];
extern int member_portrait[];
extern int party_count;
extern int return_cmd;
/* Update the party after a round: deaths, sorting by condition, check all dead. */
update_party_after_round()
{
	int i;
	int j;
	char x4[476];
	int tmp;
	int any;
	register int rsi;
	i = 0;
	goto L5d43;
L5c8a:
	rsi = (44 * i);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,022h,003h,072h,003h
#endasm
	goto L5d40;
L5c9f:
	if (update_combatant(0, i, (unsigned char)g458a[(432 * i)], (unsigned char)g458b[(432 * i)]) != 1) goto L5d40;
	draw_member_panel_mele(i);
	play_sound(((unsigned char)pc_sex[(432 * i)] + 8));
	set_cursor((!(i % 2) ? g4fba : g4fb8), 0, ((i / 2) << 2));
	print_string((!(i % 2) ? g4fba : g4fb8), ((432 * i) + 17384), -4);
L5d40:
	i++;
L5d43:
	if (i < party_count) goto L5c8a;
	i = 0;
	goto L5d60;
L5d56:
	copy_member_to_combatant(i);
	i++;
L5d60:
	if (i < party_count) goto L5d56;
	i = 0;
	goto L5e52;
L5d71:
	j = (i + 1);
	goto L5e43;
L5d7b:
	if ((unsigned)pc_condition[(432 * i)] <= pc_condition[(432 * j)]) goto L5e40;
#asm
l5d9c:
	db 0b8h,0b0h,001h,050h,081h,0c3h,0e8h,043h,08bh,0c3h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 0feh,005h,0e8h,043h,050h
	call swapmem_
	db 083h,0c4h,006h,0b8h,02ch,000h,050h,0b8h,02ch,000h,0f7h,06eh,0fch,08bh,0c8h,0a1h
	db 0a8h,043h,003h,0c1h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0c8h,0a1h,0a8h,043h
	db 003h,0c1h,050h
	call swapmem_
	db 083h,0c4h,006h
#endasm
	tmp = member_pcfile_index[i];
	member_pcfile_index[i] = member_pcfile_index[j];
	member_pcfile_index[j] = tmp;
	tmp = member_portrait[i];
	member_portrait[i] = member_portrait[j];
	member_portrait[j] = tmp;
L5e40:
	j++;
L5e43:
	if (j < party_count) goto L5d7b;
	i++;
L5e52:
	if ((party_count - 1) > i) goto L5d71;
	j = 0;
	any = 0;
	i = 0;
	goto L5e9d;
L5e70:
	if ((unsigned)pc_condition[(432 * i)] < 2) goto L5e82;
	j++;
L5e82:
	rsi = (44 * i);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,02bh,002h,075h,006h
#endasm
	any = 1;
L5e9a:
	i++;
L5e9d:
	if (i < party_count) goto L5e70;
	if (j != party_count) goto L5ebd;
	return_cmd = 8;
	combat_over = 1;
	goto L5ed0;
L5ebd:
	if (any <= 0) goto L5ed0;
	return_cmd = 23;
	combat_over = 1;
L5ed0:
	;
}
