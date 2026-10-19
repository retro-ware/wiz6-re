#asm
	extrn try_spell_disarm_:near
#endasm
extern char g450a[];
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
cast_chest_spell(p4, p6, p8, p10, p12, p14)
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
	goto L749e;
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
	if ((l8 = ((((p8 * 5) + 65) - (game_state_arg << 1)) + l10)) <= 95) goto L705e;
	l8 = 95;
L705e:
	reveal_trap_letters(p14, p4, l6, l8);
	goto L749e;
	l2 = roll_dice(format_dice((p8 << 1), 8, p8));
	*(int *)((char *)pc_stamina + (432 * p10)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p10)) <= *(int *)((char *)pc_stamina_max + (432 * p10))) goto L70c0;
	*(int *)((char *)pc_stamina + (432 * p10)) = *(int *)((char *)pc_stamina_max + (432 * p10));
L70c0:
	draw_member_status(p10);
	goto L749e;
	if ((l2 = ((unsigned char)g450d[(432 * p10)] - (p8 * 25))) >= 0) goto L70fa;
	l2 = 0;
L70fa:
	g450d[(432 * p10)] = *(char *)&l2;
	draw_member_status(p10);
	goto L749e;
	if ((l2 = ((unsigned char)g458c[(432 * p10)] - p8)) > 0) goto L712e;
	l2 = 0;
	g450f[(432 * p10)] = 0;
L712e:
	g458c[(432 * p10)] = *(char *)&l2;
	if ((l2 = ((unsigned char)g450f[(432 * p10)] - (p8 * 5))) > 0) goto L715e;
	l2 = 0;
	g458c[(432 * p10)] = 0;
L715e:
	g450f[(432 * p10)] = *(char *)&l2;
	draw_member_status(p10);
	goto L749e;
	if (pc_condition[(432 * p10)] != 2) goto L71db;
	if ((p8 * 3) <= (21 - (unsigned char)g4517[(432 * p10)])) goto L71db;
	g4517[(432 * p10)]--;
	if (random(21) <= (unsigned char)g4517[(432 * p10)]) goto L71cf;
	pc_condition[(432 * p10)] = 3;
	*(int *)((char *)pc_hp + (432 * p10)) = 0;
	*(int *)((char *)pc_stamina + (432 * p10)) = 0;
#asm
	db 0ebh,005h
#endasm
L71cf:
	;
#asm
l71cf:
	db 0c6h,087h,089h,045h,000h
#endasm
L71d4:
	draw_member_status(p10);
L71db:
	goto L749e;
	if ((l2 = ((unsigned char)g4511[(432 * p10)] - (p8 * 25))) >= 0) goto L720e;
	l2 = 0;
L720e:
	g4511[(432 * p10)] = *(char *)&l2;
	draw_member_status(p10);
	goto L749e;
	l4 = 1;
L7224:
	if (((((l4 != 1) && (l4 != 2)) && (l4 != 4)) && (l4 != 8)) && (l4 != 9)) goto L7270;
	if ((l2 = ((unsigned char)g450a[((432 * p10) + l4)] - (p8 << 1))) >= 0) goto L7269;
	l2 = 0;
L7269:
	g450a[((432 * p10) + l4)] = *(char *)&l2;
L7270:
	l4++;
	if (l4 <= 9) goto L7224;
	draw_member_status(p10);
	goto L749e;
	l2 = roll_dice(format_dice(p8, 7, p8));
	*(int *)((char *)pc_hp + (432 * p10)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p10)) <= *(int *)((char *)pc_hp_max + (432 * p10))) goto L72cf;
	*(int *)((char *)pc_hp + (432 * p10)) = *(int *)((char *)pc_hp_max + (432 * p10));
L72cf:
	draw_member_status(p10);
	goto L749e;
	if (pc_condition[(432 * p10)] != 3) goto L732c;
	if ((p8 * 3) <= (18 - (unsigned char)g4517[(432 * p10)])) goto L732c;
	g4517[(432 * p10)]--;
	pc_condition[(432 * p10)] = 0;
	*(int *)((char *)pc_hp + (432 * p10)) = 1;
	*(int *)((char *)pc_stamina + (432 * p10)) = (*(int *)((char *)pc_stamina_max + (432 * p10)) / 10);
	(*(int *)((char *)g440e + (432 * p10)))++;
	draw_member_status(p10);
L732c:
	goto L749e;
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
	draw_member_status(p4);
	goto L749e;
	l2 = 0;
L73d3:
	l4 = roll_dice(format_dice(p8, 10, 0));
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) += l4;
	if (*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) <= *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)))) goto L7429;
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) = *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)));
L7429:
	l2++;
	if (l2 < 6) goto L73d3;
	draw_member_status(p4);
	goto L749e;
#asm
	db 00ah,000h,00fh,000h,01ah,000h,01eh,000h,026h,000h,027h,000h,029h,000h,02eh,000h
	db 033h,000h,034h,000h,035h,000h,039h,000h,040h,000h,044h,000h,046h,000h,04dh,000h
	db 050h,000h,051h,000h,073h,070h,0cah,070h,00bh,071h,0abh,06fh,0bdh,06fh,0ffh,06fh
	db 076h,06fh,06fh,071h,01fh,072h,014h,070h,00bh,06fh,0deh,071h,085h,072h,043h,06fh
	db 0cah,06fh,0d9h,072h,02fh,073h,0ceh,073h,09eh,074h
l7487:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,03dh,074h,0b9h,013h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,022h,05fh,007h,0ffh,0e1h
#endasm
L749e:
	;
}
