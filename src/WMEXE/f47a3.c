#asm
	extrn do_damage_effect_:near
	extrn do_status_effect_:near
	extrn f5eea_:near
	extrn random_:near
	extrn reduce_field6_:near
	extrn roll_dice_x_:near
#endasm
extern char pc_sex[];
extern int g435e;
extern int g4fc8;
extern int g500a;
extern int group_monster_rec[];
extern int monster_groups[];
extern int pc_hp[];
extern int pc_hp_max[];
/* Apply special hit effects (poison, paralysis, drain, ...) of an attack. */
apply_hit_effects(p4, p6, p8, p10)
char *p4;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	register int rsi;
	register int rdi;
	g500a = 4;
	rsi = (44 * p10);
	l4 = ((*(int *)p4 - *(int *)((char *)monster_groups[p8] + rsi)) * 3);
	l2 = 0;
L47db:
	;
#asm
l47db:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,05eh,006h,08bh,076h,0feh,08ah,040h,004h,02ah,0e4h,08bh,0c8h,058h
	db 03bh,0c1h,07ch,003h
#endasm
	goto L4c34;
L47f9:
	l6 = ((*(int *)p4 / 3) + 1);
#asm
	db 08bh,0c6h,0e9h,01ah,004h
#endasm
	do_status_effect(p8, p10, 3474, 9, 2, l4, l6, 2, l6, 3408, 0);
	goto L4c34;
#asm
	db 0b8h,000h,000h,050h,0b8h,050h,00dh,050h,0ffh,076h,0fah,0b8h,005h,000h,050h,08bh
	db 046h,0fah,0f7h,0e8h,0d1h,0e0h,050h,0ffh,076h,0fch,0b8h,003h,000h,050h,0b8h,004h
	db 000h,050h,0b8h,093h,00dh,050h,0ffh,076h,00ah,0ffh,076h,008h
	call do_status_effect_
	db 083h,0c4h,016h,0e9h,0c5h,003h,0b8h,000h,000h,050h,0b8h,050h,00dh,050h,08bh,05eh
	db 006h,08ah,047h,00ch,02ah,0e4h,050h,0b8h,002h,000h,050h,08bh,046h,0fah,08bh,0d0h
	db 0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,0ffh,076h,0fch,0b8h,005h,000h,050h
	db 0b8h,006h,000h,050h,0b8h,095h,00dh,050h,0ffh,076h,00ah,0ffh,076h,008h
	call do_status_effect_
	db 083h,0c4h,016h,0e9h,084h,003h,0b8h,000h,000h,050h,0b8h,050h,00dh,050h,0b8h,006h
	db 000h,050h,0b8h,00eh,000h,050h,0ffh,076h,0fch,0b8h,002h,000h,050h,0b8h,00bh,000h
	db 050h,0b8h,09dh,00dh,050h,0ffh,076h,00ah,0ffh,076h,008h
	call do_damage_effect_
	db 083h,0c4h,014h,0e9h,056h,003h,0e9h,053h,003h
#endasm
	if (!g435e) goto L4b58;
	l8 = 0;
#asm
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0d9h,000h,02ah
	db 0e4h,0e9h,04ah,001h
#endasm
#asm
l4904:
	db 08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,003h,0c2h,050h,0b8h,005h,000h,050h,08bh,046h
	db 0fah,0d1h,0e0h,050h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0f8h,050h,0b8h,02ch,000h,0f7h,06eh,00ah,08bh,0c8h,08bh
	db 046h,008h,0d1h,0e0h,08bh,0d8h,08bh,087h,0a8h,043h,003h,0c1h,050h
	call reduce_field6_
	db 083h,0c4h,004h
#endasm
	l10 = 3751;
#asm
	db 0e9h,001h,001h
#endasm
	if (random(100) <= (unsigned char)(*(char **)((char *)group_monster_rec + (p8 << 1)))[161]) goto L4a4c;
#asm
l4981:
	db 0b8h,000h,000h,050h,0b8h,004h,000h,050h,0b8h,001h,000h,050h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0f8h,08bh,046h,0f8h,050h,0b8h,02ch,000h,0f7h,06eh,00ah
	db 08bh,0f0h,08bh,046h,008h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,029h,040h
	db 004h,08bh,046h,0f8h,050h,0b8h,02ch,000h,0f7h,06eh,00ah,08bh,0f0h,08bh,046h,008h
	db 0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,029h,040h,002h
#endasm
	rsi = (44 * p10);
	if (*(int *)(((char *)monster_groups[p8] + rsi) + 4) >= 1) goto L4a01;
	*(int *)(((char *)monster_groups[p8] + rsi) + 4) = 1;
L4a01:
	if (p8) goto L4a47;
	rsi = (44 * p10);
	*(int *)((char *)pc_hp + (432 * p10)) = *(int *)(((char *)monster_groups[p8] + rsi) + 2);
	*(int *)((char *)pc_hp_max + (432 * p10)) = *(int *)(((char *)monster_groups[p8] + rsi) + 4);
L4a47:
	l10 = 3752;
L4a4c:
	goto L4a5e;
L4a4e:
	;
#asm
l4a4e:
	db 03dh,003h,000h,075h,003h,0e9h,0aeh,0feh
l4a56:
	db 03dh,00bh,000h,075h,003h,0e9h,0ffh,0feh
#endasm
L4a5e:
	if (l8 <= 0) goto L4b58;
	get_combatant_name(20492, p8, p10);
	get_message(l10, 20572);
	if (l8 <= 0) goto L4aa9;
	int_to_string(l8, 20652);
	replace_char_with_string(20572, 20652, 36);
L4aa9:
	get_message(3750, 20652);
	clear_msg_line(4);
	print_combat_line(20492, 20652, 20572, (p8 == 0 ? 1 : 5), 5, 5);
	if (p8) goto L4b09;
	play_sound(((unsigned char)pc_sex[(432 * p10)] + 8));
	draw_member_card_x(p10, 1);
L4b09:
	combat_delay((g4fc8 / 2));
	rsi = (44 * p10);
	if (*(int *)(((char *)monster_groups[p8] + rsi) + 2) > 0) goto L4b58;
	do_damage_effect(p8, p10, 3486, 0, 3, l4, 6, 6, 3408, 0);
L4b58:
	goto L4c34;
	l10 = (p8 == 0 ? 11 : 13);
#asm
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,008h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0f6h
	db 08ah,080h,094h,000h,02ah,0e4h,08bh,0c8h,02bh,046h,0fch,08bh,0c8h,058h,03bh,0c1h
	db 07eh,050h
#endasm
	clear_msg_line(4);
	print_msg_centered(3495, 5, 4);
	combat_delay((g4fc8 / 4));
	do_damage_effect(p8, p10, 3486, 0, 3, l4, 6, 6, 3408, 0);
L4be3:
	goto L4c34;
#asm
	db 0b8h,000h,000h,050h,0b8h,050h,00dh,050h,0ffh,076h,0fah,0b8h,003h,000h,050h,08bh
	db 046h,0fah,0d1h,0e0h,050h,0ffh,076h,0fch,0b8h,002h,000h,050h,0b8h,009h,000h,050h
	db 0b8h,09ch,00dh,050h,0ffh,076h,00ah,0ffh,076h,008h
	call do_status_effect_
	db 083h,0c4h,016h,0ebh,01dh,00dh,048h,03ah,048h,06fh,048h,0b0h,048h,0deh,048h,0e1h
	db 048h,05bh,04bh,0e5h,04bh
l4c27:
	db 03dh,008h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,017h,04ch
#endasm
L4c34:
	l2++;
	if (l2 < 8) goto L47db;
}
