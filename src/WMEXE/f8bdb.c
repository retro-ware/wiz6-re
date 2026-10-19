#asm
	extrn f7ddc_:near
	extrn f825f_:near
	extrn random_:near
#endasm
extern char g019d[];
extern int g4fc8;
extern int group_monster_rec[];
extern int monster_groups[];
extern int party_picture_win;
f8bdb(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	int l8;
	l4 = (unsigned char)g019d[monster_groups[p4]];
	l6 = (p6 < 0 ? -p6 : p6);
	if (l6 <= l4) goto L8c10;
	l6 = l4;
L8c10:
	l8 = random((l4 - l6));
	l2 = l8;
	goto L8ee9;
L8c24:
	if (random(100) <= ((unsigned char)(*(char **)((char *)group_monster_rec + (p4 << 1)))[150] - p10)) goto L8e42;
#asm
l8c4d:
	db 0b8h,00ah,000h,050h
	call random_
	db 059h,0e9h,0dah,001h
#endasm
	f7ddc(p4, l2, 4, 7, p8, 12, p10);
	goto L8e3f;
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,08bh,046h,008h,0d1h
	db 0e0h,050h,0b8h,000h,000h,050h,0ffh,076h,00ah,0b8h,004h,000h,050h,0b8h,002h,000h
	db 050h,0b8h,094h,00dh,050h,0ffh,076h,0feh,0ffh,076h,004h
	call f825f_
	db 083h,0c4h,018h,0e9h,092h,001h,0b8h,000h,000h,050h,050h,050h,0b8h,002h,000h,050h
	db 0ffh,076h,008h,0b8h,000h,000h,050h,0ffh,076h,00ah,0b8h,002h,000h,050h,0b8h,009h
	db 000h,050h,0b8h,092h,00dh,050h,0ffh,076h,0feh,0ffh,076h,004h
	call f825f_
	db 083h,0c4h,018h,0e9h,063h,001h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,001h
	db 000h,050h,08bh,046h,008h,0d1h,0e0h,050h,0b8h,000h,000h,050h,0ffh,076h,00ah,0b8h
	db 003h,000h,050h,0b8h,004h,000h,050h,0b8h,093h,00dh,050h,0ffh,076h,0feh,0ffh,076h
	db 004h
	call f825f_
	db 083h,0c4h,018h,0e9h,02fh,001h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,004h
	db 000h,050h,0ffh,076h,008h,0b8h,000h,000h,050h,0ffh,076h,00ah,0b8h,008h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,098h,00dh,050h,0ffh,076h,0feh,0ffh,076h,004h
	call f825f_
	db 083h,0c4h,018h,0e9h,0feh,000h,0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0b8h,000h
	db 000h,050h,050h,050h,0b8h,001h,000h,050h,08bh,046h,00ah,005h,0e7h,0ffh,050h,0b8h
	db 003h,000h,050h,0b8h,00bh,000h,050h,0b8h,0a1h,00dh,050h,0ffh,076h,0feh,0ffh,076h
	db 004h
	call f825f_
	db 083h,0c4h,018h,0e9h,0cah,000h,0ffh,076h,00ah,0b8h,000h,000h,050h,08bh,046h,008h
	db 0d1h,0e0h,050h,0b8h,004h,000h,050h,08bh,046h,008h,0d1h,0e0h,050h,0ffh,076h,0feh
	db 0ffh,076h,004h
	call f7ddc_
	db 083h,0c4h,00eh,0e9h,0a4h,000h,0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h
	db 000h,050h,0ffh,076h,008h,0b8h,000h,000h,050h,0ffh,076h,00ah,0b8h,007h,000h,050h
	db 0b8h,00ah,000h,050h,0b8h,097h,00dh,050h,0ffh,076h,0feh,0ffh,076h,004h
	call f825f_
	db 083h,0c4h,018h,0ebh,074h,0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0b8h,000h,000h
	db 050h,050h,050h,0b8h,001h,000h,050h,08bh,046h,00ah,005h,0e7h,0ffh,050h,0b8h,002h
	db 000h,050h,0b8h,00bh,000h,050h,0b8h,09dh,00dh,050h,0ffh,076h,0feh,0ffh,076h,004h
	call f825f_
	db 083h,0c4h,018h,0ebh,041h,0ffh,076h,00ah,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h
	db 007h,000h,050h,0b8h,004h,000h,050h,0ffh,076h,0feh,0ffh,076h,004h
	call f7ddc_
	db 083h,0c4h,00eh,0ebh,021h,058h,08ch,079h,08ch,0adh,08ch,0dch,08ch,010h,08dh,041h
	db 08dh,075h,08dh,09bh,08dh,0cbh,08dh,0feh,08dh
l8e32:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,01eh,08eh
#endasm
L8e3f:
	goto L8ee6;
L8e42:
	if (((unsigned)((char *)monster_groups[p4] + (44 * l2))[34] >= 3) || (((char *)monster_groups[p4] + (44 * l2))[43])) goto L8ee6;
	clear_window_area(party_picture_win, 0, 2, 39, 4);
	set_cursor(party_picture_win, 1, 2);
	combat_delay(1);
	get_combatant_name(20492, p4, l2);
	print_combat_centered(20492, (p4 == 0 ? 1 : 6), 2);
	print_msg_centered(3471, 14, 3);
	combat_delay((g4fc8 / 2));
L8ee6:
	l2++;
L8ee9:
	if ((l8 + l6) > l2) goto L8c24;
}
