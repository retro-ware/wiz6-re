#asm
	extrn draw_member_status_:near
	extrn reveal_trap_letters_:near
	extrn try_spell_disarm_:near
#endasm
extern char g450d[];
extern char g450f[];
extern char g4511[];
extern char g4517[];
extern char g458c[];
extern char pc_condition[];
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
extern int game_state_arg;
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_level[];
extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
struct s4 { int w[2]; };
struct s4 format_dice();
cast_chest_spell(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
#asm
	db 08bh,046h,006h,0e9h,07ch,005h
#endasm
	g4ed0 += (p8 * 50);
	g4ed2 = clamp_toward_zero(((p8 * 5) + 70), g4ed2, 0);
#asm
	db 0e9h,05bh,005h
#endasm
	g4ed4 += (p8 * 35);
	g4ed6 = clamp_toward_zero((((p8 - 1) / 2) + 1), g4ed6, 0);
#asm
	db 0e9h,028h,005h
#endasm
	g4ecc += (p8 * 50);
	g4ece = clamp_toward_zero((((p8 - 1) / 2) + 1), g4ece, 0);
#asm
	db 0e9h,0f3h,004h
#endasm
	g4edc += (p8 * 5);
#asm
	db 0e9h,0e1h,004h
#endasm
	g4ec8 += (100 * p8);
#asm
	db 0e9h,0d4h,004h
#endasm
	g4ed8 += (p8 * 50);
	g4eda = clamp_toward_zero((p8 * 5), g4eda, 0);
#asm
	db 0e9h,09fh,004h,0ffh,076h,008h,0ffh,076h,004h,0ffh,076h,00eh,0ffh,076h,00ch
	call try_spell_disarm_
	db 083h,0c4h,008h,0e9h,08ah,004h
#endasm
	l10 = (*(int *)((char *)pc_level + (432 * p4)) > 12 ? 12 : *(int *)((char *)pc_level + (432 * p4)));
	l6 = (p8 + 4);
	l8 = ((((p8 * 5) + 65) - (game_state_arg << 1)) + l10);
	if (l8 <= 95) goto L705e;
	l8 = 95;
L705e:
	;
#asm
l705e:
	db 0ffh,076h,0f8h,0ffh,076h,0fah,0ffh,076h,004h,0ffh,076h,00eh
	call reveal_trap_letters_
	db 083h,0c4h,008h,0e9h,02bh,004h
#endasm
	l2 = roll_dice(format_dice((p8 << 1), 8, p8));
	*(int *)((char *)pc_stamina + (432 * p10)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p10)) <= *(int *)((char *)pc_stamina_max + (432 * p10))) goto L70c0;
	*(int *)((char *)pc_stamina + (432 * p10)) = *(int *)((char *)pc_stamina_max + (432 * p10));
L70c0:
	;
#asm
l70c0:
	db 0ffh,076h,00ah
	call draw_member_status_
	db 059h,0e9h,0d4h,003h
#endasm
	l2 = ((unsigned char)g450d[(432 * p10)] - (p8 * 25));
	if (l2 >= 0) goto L70fa;
	l2 = 0;
L70fa:
	g450d[(432 * p10)] = *(char *)&l2;
#asm
	db 0ffh,076h,00ah
	call draw_member_status_
	db 059h,0e9h,093h,003h
#endasm
	l2 = ((unsigned char)g458c[(432 * p10)] - p8);
	if (l2 > 0) goto L712e;
	l2 = 0;
	g450f[(432 * p10)] = 0;
L712e:
	g458c[(432 * p10)] = *(char *)&l2;
	l2 = ((unsigned char)g450f[(432 * p10)] - (p8 * 5));
	if (l2 > 0) goto L715e;
	l2 = 0;
	g458c[(432 * p10)] = 0;
L715e:
	g450f[(432 * p10)] = *(char *)&l2;
#asm
	db 0ffh,076h,00ah
	call draw_member_status_
	db 059h,0e9h,02fh,003h
#endasm
	if (pc_condition[(432 * p10)] != 2) goto L71db;
	if ((p8 * 3) <= (21 - (unsigned char)g4517[(432 * p10)])) goto L71db;
	g4517[(432 * p10)]--;
	if (random(21) <= (unsigned char)g4517[(432 * p10)]) goto L71cf;
	pc_condition[(432 * p10)] = 3;
	*(int *)((char *)pc_hp + (432 * p10)) = 0;
	*(int *)((char *)pc_stamina + (432 * p10)) = 0;
	goto L71d4;
L71cf:
	pc_condition[(432 * p10)] = 0;
L71d4:
	draw_member_status(p10);
L71db:
	;
#asm
l71db:
	db 0e9h,0c0h,002h
#endasm
	l2 = ((unsigned char)g4511[(432 * p10)] - (p8 * 25));
	if (l2 >= 0) goto L720e;
	l2 = 0;
L720e:
	g4511[(432 * p10)] = *(char *)&l2;
#asm
	db 0ffh,076h,00ah
	call draw_member_status_
	db 059h,0e9h,07fh,002h
#endasm
	l4 = 1;
L7224:
	;
#asm
l7224:
	db 08bh,046h,0fch,03dh,001h,000h,074h,014h,03dh,002h,000h,074h,00fh,03dh,004h,000h
	db 074h,00ah,03dh,008h,000h,074h,005h,03dh,009h,000h,075h,030h
#endasm
L7240:
	;
#asm
l7240:
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0d9h,08ah
	db 087h,00ah,045h,02ah,0e4h,08bh,04eh,008h,0d1h,0e1h,02bh,0c1h,089h,046h,0feh,03dh
	db 000h,000h,07dh,005h
#endasm
	l2 = 0;
L7269:
	;
#asm
l7269:
	db 08ah,046h,0feh,088h,087h,00ah,045h
#endasm
L7270:
	l4++;
	if (l4 <= 9) goto L7224;
#asm
	db 0ffh,076h,00ah
	call draw_member_status_
	db 059h,0e9h,019h,002h
#endasm
	l2 = roll_dice(format_dice(p8, 7, p8));
	*(int *)((char *)pc_hp + (432 * p10)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p10)) <= *(int *)((char *)pc_hp_max + (432 * p10))) goto L72cf;
	*(int *)((char *)pc_hp + (432 * p10)) = *(int *)((char *)pc_hp_max + (432 * p10));
L72cf:
	;
#asm
l72cf:
	db 0ffh,076h,00ah
	call draw_member_status_
	db 059h,0e9h,0c5h,001h
#endasm
	if (pc_condition[(432 * p10)] != 3) goto L732c;
	if ((p8 * 3) <= (18 - (unsigned char)g4517[(432 * p10)])) goto L732c;
	g4517[(432 * p10)]--;
	pc_condition[(432 * p10)] = 0;
	*(int *)((char *)pc_hp + (432 * p10)) = 1;
	*(int *)((char *)pc_stamina + (432 * p10)) = (*(int *)((char *)pc_stamina_max + (432 * p10)) / 10);
	(*(int *)((char *)g440e + (432 * p10)))++;
	draw_member_status(p10);
L732c:
	;
#asm
l732c:
	db 0e9h,06fh,001h
#endasm
	l2 = roll_dice(format_dice(p8, 8, p8));
	*(int *)((char *)pc_stamina + (432 * p4)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p4)) <= *(int *)((char *)pc_stamina_max + (432 * p4))) goto L7379;
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((char *)pc_stamina_max + (432 * p4));
L7379:
	l2 = roll_dice(format_dice(p8, 2, 0));
	*(int *)((char *)pc_hp + (432 * p4)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p4)) <= *(int *)((char *)pc_hp_max + (432 * p4))) goto L73c4;
	*(int *)((char *)pc_hp + (432 * p4)) = *(int *)((char *)pc_hp_max + (432 * p4));
L73c4:
	;
#asm
l73c4:
	db 0ffh,076h,004h
	call draw_member_status_
	db 059h,0e9h,0d0h,000h
#endasm
	l2 = 0;
L73d3:
	l4 = roll_dice(format_dice(p8, 10, 0));
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) += l4;
	if (*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) <= *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)))) goto L7429;
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) = *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)));
L7429:
	l2++;
	if (l2 < 6) goto L73d3;
#asm
	db 0ffh,076h,004h
	call draw_member_status_
	db 059h,0ebh,061h,00ah,000h,00fh,000h,01ah,000h,01eh,000h,026h,000h,027h,000h,029h
	db 000h,02eh,000h,033h,000h,034h,000h,035h,000h,039h,000h,040h,000h,044h,000h,046h
	db 000h,04dh,000h,050h,000h,051h,000h,073h,070h,0cah,070h,00bh,071h,0abh,06fh,0bdh
	db 06fh,0ffh,06fh,076h,06fh,06fh,071h,01fh,072h,014h,070h,00bh,06fh,0deh,071h,085h
	db 072h,043h,06fh,0cah,06fh,0d9h,072h,02fh,073h,0ceh,073h,09eh,074h
l7487:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,03dh,074h,0b9h,013h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,022h,05fh,007h,0ffh,0e1h
#endasm
L749e:
	;
}
