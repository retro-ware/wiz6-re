extern char g450d[];
extern char g450f[];
extern char g4511[];
extern char g4517[];
extern char g458c[];
extern char pc_condition[];
extern char pc_item_count[];
extern char pc_item_flags[];
extern int g43ca;
extern int g440e[];
extern int g4ec8;
extern int g4ecc;
extern int g4ece;
extern int g4ed0;
extern int g4ed2;
extern int g4ed4;
extern int g4ed6;
extern int g4ed8;
extern int g4eda;
extern int g4edc;
extern int g5752;
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
struct s4 { int w[2]; };
struct s4 f6a94();
cast_spell(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
#asm
	db 08bh,046h,006h,0e9h,0b8h,005h
#endasm
	g4ed0 += (p8 * 50);
	g4ed2 = clamp_toward(((p8 * 5) + 70), g4ed2, 0);
	goto L7119;
	g4ed4 += (p8 * 35);
	g4ed6 = clamp_toward((((p8 - 1) / 2) + 1), g4ed6, 0);
#asm
	db 0e9h,064h,005h
#endasm
	g4ecc += (p8 * 50);
	g4ece = clamp_toward((((p8 - 1) / 2) + 1), g4ece, 0);
#asm
	db 0e9h,02fh,005h
#endasm
	g4edc += (p8 * 5);
#asm
	db 0e9h,01dh,005h
#endasm
	g4ec8 += (100 * p8);
#asm
	db 0e9h,010h,005h
#endasm
	g4ed8 += (p8 * 50);
	g4eda = clamp_toward((p8 * 5), g4eda, 0);
#asm
	db 0e9h,0dbh,004h
#endasm
	l2 = roll_dice(f6a94((p8 << 1), 8, p8));
	*(int *)((char *)pc_stamina + (432 * p10)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p10)) <= *(int *)((char *)pc_stamina_max + (432 * p10))) goto L6c8b;
	*(int *)((char *)pc_stamina + (432 * p10)) = *(int *)((char *)pc_stamina_max + (432 * p10));
L6c8b:
	refresh_member_card(g5752, p10);
	goto L7119;
	l2 = ((unsigned char)g450d[(432 * p10)] - (p8 * 25));
	if (l2 >= 0) goto L6ccb;
	l2 = 0;
L6ccb:
	g450d[(432 * p10)] = *(char *)&l2;
	refresh_member_card(g5752, p10);
	goto L7119;
	l2 = ((unsigned char)g458c[(432 * p10)] - p8);
	if (l2 > 0) goto L6d05;
	l2 = 0;
	g450f[(432 * p10)] = 0;
L6d05:
	g458c[(432 * p10)] = *(char *)&l2;
	l2 = ((unsigned char)g450f[(432 * p10)] - (p8 * 5));
	if (l2 > 0) goto L6d35;
	l2 = 0;
	g458c[(432 * p10)] = 0;
L6d35:
	g450f[(432 * p10)] = *(char *)&l2;
	refresh_member_card(g5752, p10);
	goto L7119;
	if (pc_condition[(432 * p10)] != 2) goto L6dbe;
	if ((p8 * 3) <= (21 - (unsigned char)g4517[(432 * p10)])) goto L6dbe;
	g4517[(432 * p10)]--;
	if (random(21) <= (unsigned char)g4517[(432 * p10)]) goto L6dac;
	pc_condition[(432 * p10)] = 3;
	*(int *)((char *)pc_hp + (432 * p10)) = 0;
	*(int *)((char *)pc_stamina + (432 * p10)) = 0;
#asm
	db 0ebh,005h
#endasm
L6dac:
	;
#asm
l6dac:
	db 0c6h,087h,089h,045h,000h
#endasm
L6db1:
	refresh_member_card(g5752, p10);
L6dbe:
	goto L7119;
	l2 = ((unsigned char)g4511[(432 * p10)] - (p8 * 25));
	if (l2 >= 0) goto L6df1;
	l2 = 0;
L6df1:
	g4511[(432 * p10)] = *(char *)&l2;
	refresh_member_card(g5752, p10);
	goto L7119;
	l4 = 1;
L6e0d:
	;
#asm
l6e0d:
	db 08bh,046h,0fch,03dh,001h,000h,074h,014h,03dh,002h,000h,074h,00fh,03dh,004h,000h
	db 074h,00ah,03dh,008h,000h,074h,005h,03dh,009h,000h,075h,030h
#endasm
L6e29:
	;
#asm
l6e29:
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0d9h,08ah
	db 087h,00ah,045h,02ah,0e4h,08bh,04eh,008h,0d1h,0e1h,02bh,0c1h,089h,046h,0feh,03dh
	db 000h,000h,07dh,005h
#endasm
	l2 = 0;
L6e52:
	;
#asm
l6e52:
	db 08ah,046h,0feh,088h,087h,00ah,045h
#endasm
L6e59:
	l4++;
	if (l4 <= 9) goto L6e0d;
	refresh_member_card(g5752, p10);
	goto L7119;
	l2 = roll_dice(f6a94(p8, 7, p8));
	*(int *)((char *)pc_hp + (432 * p10)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p10)) <= *(int *)((char *)pc_hp_max + (432 * p10))) goto L6ebe;
	*(int *)((char *)pc_hp + (432 * p10)) = *(int *)((char *)pc_hp_max + (432 * p10));
L6ebe:
	refresh_member_card(g5752, p10);
	goto L7119;
	if (pc_condition[(432 * p10)] != 3) goto L6f27;
	if ((p8 * 3) <= (18 - (unsigned char)g4517[(432 * p10)])) goto L6f27;
	g4517[(432 * p10)]--;
	pc_condition[(432 * p10)] = 0;
	*(int *)((char *)pc_hp + (432 * p10)) = 1;
	*(int *)((char *)pc_stamina + (432 * p10)) = (*(int *)((char *)pc_stamina_max + (432 * p10)) / 10);
	(*(int *)((char *)g440e + (432 * p10)))++;
	refresh_member_card(g5752, p10);
L6f27:
	goto L7119;
	l2 = roll_dice(f6a94(p8, 8, p8));
	*(int *)((char *)pc_stamina + (432 * p4)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p4)) <= *(int *)((char *)pc_stamina_max + (432 * p4))) goto L6f74;
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((char *)pc_stamina_max + (432 * p4));
L6f74:
	l2 = roll_dice(f6a94(p8, 2, 0));
	*(int *)((char *)pc_hp + (432 * p4)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p4)) <= *(int *)((char *)pc_hp_max + (432 * p4))) goto L6fbf;
	*(int *)((char *)pc_hp + (432 * p4)) = *(int *)((char *)pc_hp_max + (432 * p4));
L6fbf:
	goto L7119;
	l2 = 0;
L6fc7:
	l4 = roll_dice(f6a94(p8, 10, 0));
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) += l4;
	if (*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) <= *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)))) goto L701d;
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) = *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)));
L701d:
	l2++;
	if (l2 < 6) goto L6fc7;
	goto L7119;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,080h,0bfh,094h,045h,000h,076h,032h
#endasm
	refresh_all_windows();
	g43ca = choose_item(p12, p14, 481, p4, 0);
	if (g43ca == -1) goto L706c;
	show_item_info(p14, p4, g43ca, p8);
L706c:
	goto L7119;
	l2 = 0;
#asm
	db 0ebh,02dh
#endasm
L7076:
	if (!((unsigned char)pc_item_flags[((432 * p10) + (l2 << 3))] & 2)) goto L70a0;
	remove_item(p10, l2);
L70a0:
	l2++;
L70a3:
	if ((unsigned char)pc_item_count[(432 * p10)] > l2) goto L7076;
	goto L7119;
#asm
	db 00ah,000h,00fh,000h,01ah,000h,01eh,000h,026h,000h,029h,000h,02eh,000h,033h,000h
	db 035h,000h,036h,000h,039h,000h,040h,000h,044h,000h,046h,000h,049h,000h,04dh,000h
	db 050h,000h,051h,000h,03eh,06ch,09bh,06ch,0e2h,06ch,0eah,06bh,0fch,06bh,0b5h,06bh
	db 04ch,06dh,008h,06eh,04ah,06bh,02bh,070h,0c1h,06dh,074h,06eh,082h,06bh,009h,06ch
	db 06fh,070h,0ceh,06eh,02ah,06fh,0c2h,06fh,019h,071h
l7102:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,0b8h,070h,0b9h,013h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,022h,05fh,007h,0ffh,0e1h
#endasm
L7119:
	;
}
