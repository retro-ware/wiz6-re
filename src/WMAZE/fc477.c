#asm
	extrn clamp_value_:near
	extrn play_sound_:near
	extrn random_:near
	extrn show_message_text_m_:near
#endasm
extern char *g4fa8;
extern char g450a[];
extern char g450f[];
extern char g458c[];
extern char pc_condition[];
extern int cell_event_index;
extern int g4f8a;
extern int party_facing;
extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
struct s4 { int w[2]; };
struct s4 format_dice();
apply_member_effects()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	g4f8a = (unsigned char)(g4fa8 + cell_event_index)[1584];
	if (g4f8a == party_facing) goto Lc49c;
	return;
Lc49c:
	;
#asm
lc49c:
	db 0d1h,0e6h,083h,038h,000h,07eh,00ch,0b8h,000h,000h,050h,0ffh,030h
	call show_message_text_m_
	db 083h,0c4h,004h
#endasm
Lc4af:
	l8 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	l10 = (*(int *)((g4fa8 + (cell_event_index << 1)) + 288) / 16);
	l12 = (*(int *)((g4fa8 + (cell_event_index << 1)) + 288) % 16);
Lc4d8:
	l6 = choose_party_member_m(2047, 1);
	if (l6 == -1) goto Lc8e5;
	l16 = 0;
	l18 = 0;
	if ((unsigned)pc_condition[(l6 * 432)] >= 3) goto Lc8cd;
	l14 = roll_dice(format_dice(l10, l12, l10));
	l2 = 0;
Lc53a:
	if (extract_bits(l8, l2, 1) != 1) goto Lc8bf;
	if (l2 >= 7) goto Lc55d;
	l16 = 1;
Lc55d:
	if ((l2 <= 7) || (l2 >= 15)) goto Lc56f;
	l18 = 2;
Lc56f:
	;
#asm
lc56f:
	db 0e9h,040h,003h
#endasm
	*(int *)((char *)pc_stamina + (432 * l6)) = clamp_value((*(int *)((char *)pc_stamina + (432 * l6)) + l14), 0, *(int *)((char *)pc_stamina_max + (432 * l6)));
	goto Lc8bf;
	l4 = 0;
Lc5a6:
	*(int *)((char *)pc_spell_pts + ((432 * l6) + (l4 << 2))) = clamp_value((roll_dice(format_dice(l10, l12, l10)) + *(int *)((char *)pc_spell_pts + ((432 * l6) + (l4 << 2)))), 0, *(int *)((char *)pc_spell_pts_max + ((432 * l6) + (l4 << 2))));
	l4++;
	if (l4 < 6) goto Lc5a6;
	goto Lc8bf;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,0ffh,0b7h,002h,044h,0b8h,000h,000h,050h
	db 08bh,087h,000h,044h,003h,046h,0f2h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,058h,089h,087h,000h
	db 044h,0e9h,061h,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,0c6h,087h,08ch,045h
	db 000h,0c6h,087h,00fh,045h,000h,0e9h,04ch,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh
	db 0d8h,0c6h,087h,00dh,045h,000h,0e9h,03ch,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh
	db 0d8h,080h,0bfh,089h,045h,002h,075h,005h,0c6h,087h,089h,045h,000h
#endasm
Lc697:
	goto Lc8bf;
	l4 = 1;
Lc69f:
	if (((((l4 != 1) && (l4 != 2)) && (l4 != 4)) && (l4 != 8)) && (l4 != 9)) goto Lc6cf;
	g450a[((432 * l6) + l4)] = 0;
Lc6cf:
	l4++;
	if (l4 <= 9) goto Lc69f;
	goto Lc8bf;
	if ((*(int *)((char *)pc_stamina + (432 * l6)) = clamp_value((*(int *)((char *)pc_stamina + (432 * l6)) - l14), 0, *(int *)((char *)pc_stamina_max + (432 * l6)))) > 0) goto Lc733;
#asm
	db 08ah,087h,00ch,045h,02ah,0e4h,08bh,0c8h,051h,0b8h,006h,000h,050h
	call random_
	db 059h,059h,003h,0c1h,005h,006h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h
	db 058h,088h,087h,00ch,045h
#endasm
Lc733:
	goto Lc8bf;
	l4 = 0;
Lc73b:
	*(int *)((char *)pc_spell_pts + ((432 * l6) + (l4 << 2))) = clamp_value((*(int *)((char *)pc_spell_pts + ((432 * l6) + (l4 << 2))) - roll_dice(format_dice(l10, l12, l10))), 0, *(int *)((char *)pc_spell_pts_max + ((432 * l6) + (l4 << 2))));
	l4++;
	if (l4 < 6) goto Lc73b;
	goto Lc8bf;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,0ffh,0b7h,002h,044h,0b8h,000h,000h,050h
	db 08bh,087h,000h,044h,02bh,046h,0f2h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,058h,089h,087h,000h
	db 044h,03dh,000h,000h,07fh,01fh,0c6h,087h,089h,045h,003h,0c7h,087h,000h,044h,000h
	db 000h,0c7h,087h,004h,044h,000h,000h,08ah,087h,086h,045h,02ah,0e4h,005h,008h,000h
	db 050h
	call play_sound_
	db 059h
#endasm
Lc814:
	goto Lc8bf;
	if ((unsigned char)g458c[(432 * l6)] >= l10) goto Lc831;
	g458c[(432 * l6)] = *(char *)&l10;
Lc831:
	if ((unsigned char)g450f[(432 * l6)] >= l14) goto Lc843;
	g450f[(432 * l6)] = *(char *)&l14;
Lc843:
	;
#asm
lc843:
	db 0e9h,079h,000h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,00dh,045h,02ah
	db 0e4h,03bh,046h,0f2h,07dh,007h,08ah,046h,0f2h,088h,087h,00dh,045h
#endasm
Lc860:
	goto Lc8bf;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,080h,0bfh,089h,045h,002h,073h,005h,0c6h
	db 087h,089h,045h,002h
#endasm
Lc876:
	goto Lc8bf;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,00ch,045h,02ah,0e4h,03bh,046h
	db 0f2h,07dh,007h,08ah,046h,0f2h,088h,087h,00ch,045h
#endasm
Lc892:
	goto Lc8bf;
#asm
	db 072h,0c5h,0a1h,0c5h,02fh,0c6h,05eh,0c6h,073h,0c6h,083h,0c6h,09ah,0c6h,0bfh,0c8h
	db 0ddh,0c6h,036h,0c7h,0c4h,0c7h,017h,0c8h,046h,0c8h,062h,0c8h,078h,0c8h
lc8b2:
	db 03dh,00fh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,094h,0c8h
#endasm
Lc8bf:
	l2++;
	if (l2 < 16) goto Lc53a;
Lc8cd:
	draw_member_status_m(l6);
	show_centered_notice(((l16 + l18) + 2048));
	goto Lc4d8;
Lc8e5:
	refresh_all_windows();
	return;
}
