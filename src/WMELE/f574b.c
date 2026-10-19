#asm
	extrn $ldv:near
	extrn strcpy_:near
	extrn wait_animating_view_:near
#endasm
extern char g019b[];
extern char g019d[];
extern char g3813[];
extern int bottom_line_win;
extern int g43a6[];
extern int g43b4[];
extern int g50b4[];
extern int group_monster_rec[];
extern int main_window;
extern int monster_group_count;
extern int monster_groups[];
extern int party_picture_win;
extern int view_pos_group[];
/* Let monster groups advance and swap places, announcing 'ADVANCE(S)!'. */
advance_monster_groups()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l28[8];
	char x28[800];
	register int rsi;
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	l2 = 1;
	goto L5967;
L576b:
	l28[(l2 + 1)] = 0;
	l4 = 0;
	goto L5821;
L5781:
	rsi = (44 * l4);
	if (((char *)monster_groups[l2] + rsi)[34]) goto L581e;
#asm
l579d:
	db 080h,078h,010h,000h,074h,003h,0e9h,078h,000h
#endasm
L57a6:
	;
#asm
l57a6:
	db 080h,078h,011h,000h,075h,072h
#endasm
	l12 = 0;
	l10 = 0;
L57b6:
	;
#asm
l57b6:
	db 0b8h,02ch,000h,0f7h,06eh,0fch,003h,046h,0f6h,08bh,0f0h,08bh,046h,0feh,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,080h,078h,00eh,000h,076h,014h
#endasm
	rsi = (44 * l4);
#asm
	db 08bh,040h,002h,0b9h,004h,000h,099h,0f7h,0f9h,001h,046h,0f4h
#endasm
L57e6:
	l10++;
	if (l10 < 10) goto L57b6;
	rsi = (44 * l4);
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,040h,002h,03bh,046h
	db 0f4h,07eh,012h,08bh,040h,002h,02bh,046h,0f4h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h
	db 003h,0ddh,001h,047h,0e6h
#endasm
L581e:
	l4++;
L5821:
	if ((unsigned char)g019d[monster_groups[l2]] > l4) goto L5781;
	if ((unsigned)(*(char **)((char *)group_monster_rec + (l2 << 1)))[168] <= 0) goto L5877;
#asm
	db 08bh,0d8h,003h,0ddh,08bh,047h,0e6h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh
	db 0b4h,0b6h,043h,08ah,084h,0a8h,000h,02ah,0e4h,0b9h,00ah,000h,099h,0f7h,0f9h,08bh
	db 0c8h,040h,08bh,0c8h,058h,099h,0f7h,0f9h,089h,047h,0e6h
#endasm
L5877:
	if ((unsigned)(*(char **)((char *)group_monster_rec + (l2 << 1)))[170] <= 0) goto L58d7;
#asm
	db 08bh,0d8h,003h,0ddh,08bh,047h,0e6h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0b6h,043h,08ah,087h,0aah,000h,02ah,0e4h,08bh,0c8h,058h,08bh,0d9h,0f7h,0ebh
	db 0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 050h,052h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0e6h,099h,08bh
	db 0c8h,08bh,0dah,05ah,058h,003h,0c1h,013h,0d3h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h
	db 003h,0ddh,089h,047h,0e6h
#endasm
L58d7:
	if ((unsigned)(*(char **)((char *)group_monster_rec + (l2 << 1)))[171] <= 0) goto L5937;
#asm
	db 08bh,0d8h,003h,0ddh,08bh,047h,0e6h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0b6h,043h,08ah,087h,0abh,000h,02ah,0e4h,08bh,0c8h,058h,08bh,0d9h,0f7h,0ebh
	db 0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 050h,052h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0e6h,099h,08bh
	db 0c8h,08bh,0dah,05ah,058h,003h,0c1h,013h,0d3h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h
	db 003h,0ddh,089h,047h,0e6h
#endasm
L5937:
	if (!g3813[((unsigned char)g019b[monster_groups[l2]] * 314)]) goto L5964;
	l28[(l2 + 1)] = 0;
L5964:
	l2++;
L5967:
	if (l2 <= monster_group_count) goto L576b;
	l2 = monster_group_count;
	goto L5be5;
L597c:
	if (random(l28[(l2 + 1)]) <= random(l28[l2])) goto L5be2;
	clear_window(party_picture_win, 0);
	refresh_all_windows();
#asm
	db 0b8h,001h,000h,050h
	call wait_animating_view_
	db 059h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh,001h
	db 001h,075h,005h,0b8h,000h,000h,0ebh,003h
#endasm
L59d7:
	;
#asm
l59d7:
	db 0b8h,001h,000h
#endasm
L59da:
	;
#asm
l59da:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,051h,08ah,087h,09ch,001h,02ah,0e4h,0b9h,005h
	db 000h,0d3h,0e0h,059h,003h,0c8h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,087h,0b6h
	db 043h,003h,0c1h,050h,0b8h,014h,050h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	get_message((g019d[monster_groups[l2]] == 1 ? 3510 : 3511), 20580);
	set_cursor(party_picture_win, (20 - (((strlen(20500) + strlen(20580)) + 1) / 2)), 0);
	print_string(party_picture_win, 20500, 6);
	print_string(party_picture_win, 20580, 14);
	play_sound(0);
	l4 = 0;
	goto L5ae2;
L5a93:
	rsi = (44 * l4);
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a6h,043h,080h,078h,02ah,0ffh,074h
	db 033h,08ah,040h,02ah,098h,0b9h,00ah,000h,099h,0f7h,0f9h,089h,046h,0fah,08ah,040h
	db 02ah,098h,099h,0f7h,0f9h,089h,056h,0f8h
#endasm
	*(int *)((char *)g50b4 + ((l6 * 10) + (l8 << 1))) = 1;
L5adf:
	l4++;
L5ae2:
	if ((unsigned char)g019d[g43a6[l2]] > l4) goto L5a93;
	show_encounter_view(1);
	l4 = 0;
	goto L5b65;
L5b07:
	rsi = (44 * l4);
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a6h,043h,080h,078h,02ah,0ffh,074h
	db 042h,08ah,040h,02ah,098h,0b9h,00ah,000h,099h,0f7h,0f9h,089h,046h,0fah,08ah,040h
	db 02ah,098h,099h,0f7h,0f9h,089h,056h,0f8h
#endasm
	*(int *)((char *)view_pos_group + ((l6 * 10) + (l8 << 1))) = 0;
	((char *)g43a6[l2] + rsi)[42] = 255;
L5b62:
	l4++;
L5b65:
	if ((unsigned char)g019d[g43a6[l2]] > l4) goto L5b07;
	redraw_view_background();
	l6 = l28[(l2 + 1)];
	l28[(l2 + 1)] = l28[l2];
	l28[l2] = l6;
	swapmem(monster_groups[l2], g43a6[l2], 416);
	swapmem(group_monster_rec[l2], g43b4[l2], 222);
	load_group_pics();
	place_group_sprites((l2 - 1));
	arrange_monster_positions();
	show_encounter_view(0);
L5be2:
	l2--;
L5be5:
	if (l2 >= 2) goto L597c;
}
