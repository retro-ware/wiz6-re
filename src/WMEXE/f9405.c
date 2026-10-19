#asm
	extrn $ldv:near
	extrn calc_spell_level_value_:near
	extrn clamp_toward_x_:near
	extrn f5eea_:near
	extrn f8149_:near
	extrn f825f_:near
	extrn f83f3_:near
	extrn f861e_:near
	extrn f87ae_:near
	extrn f88b1_:near
	extrn f8bdb_:near
	extrn f8efc_:near
	extrn random_:near
	extrn roll_dice_x_:near
#endasm
extern char g018c[];
extern char g018e[];
extern char g018f[];
extern char g0190[];
extern char g0191[];
extern char g0192[];
extern char g0193[];
extern char g0194[];
extern char g0195[];
extern char g019a[];
extern char g019c[];
extern char g019d[];
extern int g4352;
extern int g435c;
extern int g435e;
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
extern int g4fc8;
extern int g5116;
extern int game_state_arg;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
do_cast_spell(p4, p6, p8)
char *p4;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[2];
	register int rsi;
	register int rdi;
	l6 = (unsigned char)p4[31];
#asm
	db 08ah,047h,020h,089h,046h,0f8h
#endasm
	g5116 = 0;
#asm
	db 0ffh,076h,008h,0ffh,076h,006h
	call calc_spell_level_value_
	db 083h,0c4h,004h,080h,07eh,0fah,0ffh,074h,01ch,050h,0b8h,02ch,000h,0f7h,06eh,0f8h
	db 08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,02bh,000h
	db 08bh,05eh,004h,003h,007h
#endasm
L9452:
	;
#asm
l9452:
	db 089h,046h,0f6h,08bh,046h,006h,0e9h,0b9h,01bh
#endasm
	f8efc(l6, l8, 2, 1);
	f8149(l6, l8, 1, 7, p8, 1, l10);
	goto Lb021;
	f8efc(l6, l8, 3, 0);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h,000h,050h,0ffh,076h,008h,0b8h
	db 000h,000h,050h,0ffh,076h,0f6h,0b8h,004h,000h,050h,0b8h,002h,000h,050h,0b8h,094h
	db 00dh,050h,0b8h,000h,000h,08bh,04eh,008h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,045h,01bh
#endasm
	f8efc(l6, 0, 0, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,005h,000h,050h,0b8h,002h
	db 000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h
	db 0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,009h,01bh
#endasm
	g018c[monster_groups[g435e]] = (char)clamp_toward_x((p8 * 15), (unsigned char)g018c[monster_groups[g435e]], 0);
#asm
	db 0e9h,0ceh,01ah
#endasm
	f8efc(l6, 0, 0, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,003h,000h,050h,050h,0b8h
	db 000h,000h,08bh,04eh,008h,083h,0c1h,004h,02bh,0c1h,050h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,095h,01ah
#endasm
	f8efc(l6, 0, 2, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,00ah,000h,050h,0b8h,001h
	db 000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h
	db 0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,056h,01ah
#endasm
	f8efc(l6, 0, 2, 1);
#asm
	db 0ffh,076h,0f6h,0ffh,076h,008h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh
	db 0c1h,050h,0ffh,076h,0fah
	call f8bdb_
	db 083h,0c4h,008h,0e9h,023h,01ah
#endasm
	f8efc(l6, 0, 0, 1);
	f8149(l6, -10, 2, 4, p8, 1, l10);
	l2 = (unsigned char)g0192[monster_groups[l6]];
	if (l2 >= p8) goto L964e;
	l2 = p8;
L964e:
	g0192[monster_groups[l6]] = (char)(l2 + 1);
#asm
	db 0a1h,05ah,043h,040h,08bh,04eh,0fah,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,096h,001h
#endasm
	goto Lb021;
	f8efc((g435e == 0 ? 1 : 0), 0, 0, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h,005h,000h,050h,050h,083h
	db 03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h,000h,075h,005h
l96a4:
	db 0b8h,001h,000h,0ebh,003h
l96a9:
	db 0b8h,000h,000h
l96ac:
	db 050h
	call f861e_
	db 083h,0c4h,00ch,0e9h,06bh,019h
#endasm
	f8efc(l6, l8, 1, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,003h,000h,050h,0ffh,076h,008h,0b8h,006h,000h,050h,0b8h,001h
	db 000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,039h,019h
#endasm
	f8efc(l6, 0, 16, 0);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,003h,000h,050h,0ffh,076h,008h,0b8h
	db 000h,000h,050h,0ffh,076h,0f6h,0b8h,001h,000h,050h,0b8h,00ah,000h,050h,0b8h,091h
	db 00dh,050h,0b8h,0f6h,0ffh,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,0f2h,018h
#endasm
	f8efc(l6, 0, 16, 0);
#asm
	db 0b8h,001h,000h,050h,0ffh,076h,008h,0ffh,076h,0f6h,0b8h,000h,000h,08bh,04eh,008h
	db 041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f88b1_
	db 083h,0c4h,00ah,0e9h,0bbh,018h
#endasm
	f8efc(l6, 0, 16, 0);
#asm
	db 0b8h,000h,000h,050h,0ffh,076h,008h,0ffh,076h,0f6h,08bh,04eh,008h,041h,041h,041h
	db 02bh,0c1h,050h,0ffh,076h,0fah
	call f88b1_
	db 083h,0c4h,00ah,0e9h,087h,018h
#endasm
	l2 = 0;
#asm
	db 0ebh,049h
#endasm
L97a1:
	rsi = (44 * l2);
	if ((unsigned)((char *)monster_groups[g435e] + rsi)[34] >= 3) goto L97e7;
#asm
	db 0b8h,000h,000h,050h,08ah,040h,029h,098h,050h,08bh,046h,008h,0d1h,0e0h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,029h
#endasm
L97e7:
	l2++;
L97ea:
	if ((unsigned char)g019d[monster_groups[g435e]] > l2) goto L97a1;
	goto Lb021;
#asm
	db 0b8h,000h,000h,050h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah
	db 087h,08dh,001h,02ah,0e4h,050h,08bh,046h,008h,08bh,0d0h,0b1h,004h,0d3h,0e0h,02bh
	db 0c2h,050h
	call clamp_toward_x_
	db 083h,0c4h,006h,08bh,00eh,05eh,043h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,08dh,001h,0e9h,0e3h,017h
#endasm
	f8efc(l6, 0, 1, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,003h,000h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,0b8h,003h
	db 000h,050h,0b8h,000h,000h,08bh,04eh,008h,083h,0c1h,004h,02bh,0c1h,050h,0ffh,076h
	db 0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0a7h,017h
#endasm
	f8efc(l6, l8, 16, 0);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,001h,000h,050h,08bh,046h,008h,0d1h
	db 0e0h,050h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,004h,000h
	db 050h,0b8h,093h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,05fh,017h
#endasm
	f8efc(l6, l8, 1, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,003h,000h,050h,0ffh,076h,008h,0b8h,00ah,000h,050h,0b8h,003h
	db 000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,02dh,017h
#endasm
	f8efc(l6, l8, 3, 0);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h,000h,050h,08bh,046h,008h,08bh
	db 0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,0b8h,000h,000h,050h,0b8h,005h
	db 000h,050h,050h,0b8h,001h,000h,050h,0ffh,076h,0f6h,0ffh,076h,008h,0b8h,006h,000h
	db 050h,0b8h,095h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,0d5h,016h
#endasm
	g018e[monster_groups[g435e]] = (char)clamp_toward_x((p8 * 15), (unsigned char)g018e[monster_groups[g435e]], 0);
#asm
	db 0e9h,09ah,016h
#endasm
	f8efc(l6, 0, 3, 1);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,0ffh,076h,008h,0b8h
	db 000h,000h,050h,0b8h,008h,000h,050h,0b8h,006h,000h,050h,0b8h,001h,000h,050h,0ffh
	db 076h,0f6h,0ffh,076h,008h,0b8h,005h,000h,050h,0b8h,098h,00dh,050h,0b8h,0fdh,0ffh
	db 050h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,048h,016h
#endasm
	g018f[monster_groups[g435e]] = (char)clamp_toward_x((p8 * 15), (unsigned char)g018f[monster_groups[g435e]], 0);
#asm
	db 0e9h,00dh,016h
#endasm
	f8efc(l6, 0, 16, 0);
#asm
	db 0b8h,000h,000h,050h,050h,050h,0b8h,002h,000h,050h,0ffh,076h,008h,0b8h,000h,000h
	db 050h,0ffh,076h,0f6h,050h,0b8h,00ch,000h,050h,0b8h,090h,00dh,050h,0b8h,000h,000h
	db 08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,0c3h,015h
#endasm
	f8efc(l6, 0, 3, 0);
	f83f3(l6, -10, 3477, 6, p8, l10, 1, 4, 5, 0, (p8 * 10), 2, p8, 0, 0);
	l2 = (unsigned char)g0193[monster_groups[l6]];
	if (l2 >= p8) goto L9ad7;
	l2 = p8;
L9ad7:
	g0193[monster_groups[l6]] = (char)(l2 + 1);
#asm
	db 0a1h,05ah,043h,040h,08bh,04eh,0fah,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,097h,001h
#endasm
	goto Lb021;
	f8efc(l6, 0, 4, 0);
#asm
	db 0ffh,076h,0f6h,0b8h,005h,000h,050h,0ffh,076h,008h,0b8h,007h,000h,050h,0b8h,001h
	db 000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h
	db 0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0edh,014h
#endasm
	clear_msg_line(3);
	print_msg_centered(3224, 3, 3);
	combat_delay((g4fc8 / 2));
	l2 = 0;
L9b5e:
	;
#asm
l9b5e:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,08ah,080h
	db 092h,001h,02ah,0e4h,02bh,046h,008h,089h,046h,0fch,03dh,000h,000h,07dh,005h
#endasm
	l4 = 0;
L9b82:
	;
#asm
l9b82:
	db 08ah,046h,0fch,088h,080h,092h,001h
#endasm
	l2++;
	if (l2 < 4) goto L9b5e;
	if ((unsigned)g018f[monster_groups[g435e]] <= 0) goto L9bf1;
	l4 = ((unsigned char)g018f[monster_groups[g435e]] - (p8 * 10));
	if (l4 >= 0) goto L9bca;
	l4 = 0;
L9bca:
	g018f[monster_groups[g435e]] = *(char *)&l4;
	clear_msg_line(3);
	print_msg_centered((l4 == 0 ? 3225 : 3226), 3, 3);
L9bf1:
	goto Lb021;
	f8efc(l6, l8, 3, 0);
	if (random(100) >= (p8 * 5)) goto L9c52;
#asm
	db 0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0b8h,000h,000h,050h,050h,050h,0b8h,001h
	db 000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,006h,000h,050h,0b8h,0a1h,00dh
	db 050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0ebh,04ch
#endasm
L9c52:
	f83f3(l6, l8, 3477, 6, p8, l10, 3, 5, 5, 0, (p8 * 10), 4, (p8 * 10), 0, 0);
L9c9e:
	goto Lb021;
	f8efc(l6, 0, 3, 0);
	f83f3(l6, -10, 3480, 5, p8, l10, 2, 3, 8, 0, p8, 4, p8, 0, 0);
	l2 = (unsigned char)g0194[monster_groups[l6]];
	if (l2 >= p8) goto L9d0f;
	l2 = p8;
L9d0f:
	g0194[monster_groups[l6]] = (char)(l2 + 1);
#asm
	db 0a1h,05ah,043h,040h,08bh,04eh,0fah,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,098h,001h
#endasm
	goto Lb021;
	f8efc(l6, 0, 3, 1);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,0ffh,076h,008h,0b8h
	db 000h,000h,050h,0b8h,008h,000h,050h,0b8h,006h,000h,050h,0b8h,001h,000h,050h,0ffh
	db 076h,0f6h,0ffh,076h,008h,0b8h,005h,000h,050h,0b8h,098h,00dh,050h,0b8h,000h,000h
	db 08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,09ah,012h
#endasm
	f8efc(l6, 0, 4, 0);
#asm
	db 0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,008h,0ffh,076h,008h,0ffh,076h
	db 008h,0b8h,001h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,005h,000h,050h
	db 0b8h,0a2h,00dh,050h,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h
	db 000h,075h,005h
l9dcf:
	db 0b8h,001h,000h,0ebh,003h
l9dd4:
	db 0b8h,000h,000h
l9dd7:
	db 050h
	call f87ae_
	db 083h,0c4h,016h,0e9h,040h,012h
#endasm
	f8efc((g435e == 0 ? 1 : 0), 0, 4, 0);
#asm
	db 0ffh,076h,0f6h,0b8h,005h,000h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,050h,083h
	db 03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h,000h,075h,005h
l9e1c:
	db 0b8h,001h,000h,0ebh,003h
l9e21:
	db 0b8h,000h,000h
l9e24:
	db 050h
	call f861e_
	db 083h,0c4h,00ch,0e9h,0f3h,011h
#endasm
	f8efc(l6, l8, 3, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,008h,000h,050h,0ffh,076h,008h,0b8h,007h,000h,050h,0b8h,001h
	db 000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0beh,011h
#endasm
	f8efc(l6, l8, 3, 0);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h,000h,050h,0ffh,076h,008h,0b8h
	db 000h,000h,050h,0ffh,076h,0f6h,0b8h,009h,000h,050h,0b8h,008h,000h,050h,0b8h,09fh
	db 00dh,050h,0b8h,0fdh,0ffh,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,078h,011h,0b8h,001h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0f8h
	db 08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h
	db 098h,050h,0ffh,076h,008h
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,026h,0e9h,038h,011h
#endasm
	f8efc(l6, 0, 15, 0);
#asm
	db 0ffh,076h,0f6h,0b8h,007h,000h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,0b8h,002h
	db 000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h
	db 0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0f9h,010h
#endasm
	f8efc(l6, l8, 2, 0);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,001h,000h,050h,08bh,046h,008h,0d1h
	db 0e0h,050h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,004h,000h
	db 050h,0b8h,0a0h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,0b1h,010h
#endasm
	f8efc(l6, 0, 3, 1);
	f8149(l6, -10, 1, 6, p8, 8, l10);
	l2 = (unsigned char)g0195[monster_groups[l6]];
	if (l2 >= p8) goto L9fc3;
	l2 = p8;
L9fc3:
	g0195[monster_groups[l6]] = (char)(l2 + 1);
#asm
	db 0a1h,05ah,043h,040h,08bh,04eh,0fah,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h
	db 087h,099h,001h
#endasm
	goto Lb021;
	f8efc(l6, l8, 4, 1);
	l4 = f7af7(l6, p8, 0, l10);
	l2 = 0;
#asm
	db 0ebh,040h
#endasm
La012:
	;
#asm
la012:
	db 0b8h,000h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h,098h,050h,0ffh,076h,0fch
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,026h
#endasm
	l2++;
La052:
	if ((unsigned char)g019d[monster_groups[l6]] > l2) goto La012;
	goto Lb021;
	if (!g435e) goto La07a;
#asm
	db 0a1h,05eh,043h,03dh,006h,000h,075h,023h
#endasm
La07a:
	f8fa8(212, 213, 214, 215, 216, 217, p8);
	goto La10d;
La09d:
	switch (game_state_arg) {
case 10:
	f8fa8(214, 214, 214, 214, 214, 214, p8);
	goto La10d;
case 11:
	f8fa8(214, 214, 215, 215, 216, 216, p8);
	goto La10d;
case 12:
	f8fa8(214, 214, 214, 215, 215, 217, p8);
	goto La10d;
default:
	f8fa8(0, 0, 0, 0, 0, 0, 0);
	goto La10d;
	}
La10d:
	goto Lb021;
	f8efc(l6, l8, 16, 1);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,001h,000h,050h,0ffh,076h,008h,0b8h
	db 000h,000h,050h,0b8h,007h,000h,050h,050h,0b8h,001h,000h,050h,0ffh,076h,0f6h,0ffh
	db 076h,008h,0b8h,00ah,000h,050h,0b8h,097h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,0c4h,00eh
#endasm
	f8efc(l6, 0, 16, 0);
#asm
	db 0b8h,000h,000h,050h,050h,050h,0b8h,002h,000h,050h,0ffh,076h,008h,0b8h,000h,000h
	db 050h,0ffh,076h,0f6h,0b8h,002h,000h,050h,0b8h,009h,000h,050h,0b8h,092h,00dh,050h
	db 0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,077h,00eh
#endasm
	l4 = (((p8 - 1) / 2) + 1);
	l2 = 0;
#asm
	db 0ebh,07dh
#endasm
La1bf:
	;
#asm
la1bf:
	db 0b8h,001h,000h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,026h,098h,050h,0ffh,076h,0fch
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,026h,0b8h,001h,000h,050h,0b8h
	db 02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0a8h,043h,08ah,040h,027h,098h,050h,0ffh,076h,0fch
	call clamp_toward_x_
	db 083h,0c4h,006h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,0a1h,05eh,043h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,027h
#endasm
	l2++;
La23c:
	if ((unsigned char)g019d[monster_groups[g435e]] > l2) goto La1bf;
	goto Lb021;
	f8efc(l6, l8, 16, 0);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,001h,000h,050h,08bh,046h,008h,0d1h
	db 0e0h,050h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,009h,000h
	db 050h,0b8h,0a8h,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,081h,00dh
#endasm
	l2 = 1;
#asm
	db 0ebh,046h
#endasm
La2a7:
	if (random(100) >= (((p8 * 10) + 80) - (game_state_arg * 5))) goto La2ea;
	g019c[monster_groups[l2]] = 0;
La2ea:
	l2++;
La2ed:
	if (l2 <= monster_group_count) goto La2a7;
	goto Lb021;
	f8efc(l6, l8, 16, 0);
#asm
	db 0b8h,000h,000h,050h,050h,050h,0b8h,002h,000h,050h,0ffh,076h,008h,0b8h,000h,000h
	db 050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,009h,000h,050h,0b8h,0a4h,00dh,050h
	db 0b8h,000h,000h,08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,0dch,00ch
#endasm
	f8efc(l6, 0, 16, 1);
#asm
	db 0b8h,000h,000h,050h,050h,0ffh,076h,008h,0b8h,002h,000h,050h,08bh,046h,008h,0d1h
	db 0e0h,050h,0b8h,000h,000h,050h,0b8h,007h,000h,050h,050h,0b8h,001h,000h,050h,0ffh
	db 076h,0f6h,0ffh,076h,008h,0b8h,00ah,000h,050h,0b8h,097h,00dh,050h,0b8h,000h,000h
	db 08bh,04eh,008h,041h,041h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f83f3_
	db 083h,0c4h,01eh,0e9h,082h,00ch
#endasm
	if (!g435e) goto La3ae;
#asm
	db 0a1h,05eh,043h,03dh,006h,000h,075h,024h
#endasm
La3ae:
	f8fa8(218, 219, 220, 221, 222, 223, p8);
	goto La472;
La3d2:
	switch (game_state_arg) {
case 9:
	f8fa8(218, 218, 219, 219, 219, 222, p8);
	goto La472;
case 10:
	f8fa8(219, 219, 219, 222, 222, 223, p8);
	goto La472;
case 11:
	f8fa8(214, 214, 210, 216, 210, 216, p8);
	goto La472;
case 12:
	f8fa8(219, 219, 219, 222, 222, 223, p8);
	goto La472;
default:
	f8fa8(0, 0, 0, 0, 0, 0, 0);
	goto La472;
	}
La472:
	goto Lb021;
	f8efc(l6, l8, 16, 0);
#asm
	db 0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0b8h,000h,000h,050h,050h,050h,0b8h,001h
	db 000h,050h,08bh,046h,0f6h,005h,0ddh,0ffh,050h,0b8h,003h,000h,050h,0b8h,00bh,000h
	db 050h,0b8h,09ah,00dh,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f825f_
	db 083h,0c4h,018h,0e9h,064h,00bh
#endasm
	f8efc(l6, 0, 16, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,00ah,000h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,050h,083h
	db 03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h,000h,075h,005h
la4f0:
	db 0b8h,001h,000h,0ebh,003h
la4f5:
	db 0b8h,000h,000h
la4f8:
	db 050h
	call f861e_
	db 083h,0c4h,00ch,0e9h,01fh,00bh
#endasm
	f8efc(l6, l8, 15, 0);
#asm
	db 0ffh,076h,0f6h,0b8h,00ch,000h,050h,0ffh,076h,008h,0b8h,008h,000h,050h,0b8h,001h
	db 000h,050h,0ffh,076h,0f8h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0eah,00ah
#endasm
	f8efc(l6, 0, 2, 1);
#asm
	db 0ffh,076h,0f6h,0b8h,00ch,000h,050h,0ffh,076h,008h,0b8h,007h,000h,050h,0b8h,001h
	db 000h,050h,0b8h,000h,000h,08bh,04eh,008h,041h,02bh,0c1h,050h,0ffh,076h,0fah
	call f8149_
	db 083h,0c4h,00eh,0e9h,0adh,00ah
#endasm
	f8efc(l6, 0, 2, 1);
	if ((*(char **)((char *)group_monster_rec + (l6 << 1)))[208] == 20) goto La5a2;
	l10 = -100;
#asm
	db 0ebh,025h
#endasm
La5a2:
	rsi = (44 * l8);
	l10 += ((*(int *)p4 - *(int *)((char *)monster_groups[l6] + rsi)) * 3);
La5c7:
	f825f(l6, (0 - p8), 3493, 11, 3, l10, 1, 0, 0, 0, 14, 6);
	goto Lb021;
	rsi = (44 * g435c);
	if (((char *)monster_groups[g435e] + rsi)[36]) goto La64b;
#asm
	db 0a1h,05ah,043h,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call random_
	db 059h,050h,0a1h,05ah,043h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,058h,003h,0c1h
	db 050h,0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,025h
#endasm
La64b:
	rsi = (44 * g435c);
#asm
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,024h,02ah,0e4h
	db 050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,003h,0c1h,088h
	db 040h,024h
#endasm
	goto Lb021;
	if (!g435e) goto La688;
#asm
	db 0a1h,05eh,043h,03dh,006h,000h,075h,053h
#endasm
La688:
	if (random(2)) goto La6b7;
	f8fa8(200, 201, 202, 203, 204, 205, p8);
	goto La6d8;
La6b7:
	f8fa8(206, 207, 208, 209, 210, 211, p8);
La6d8:
	goto La7ae;
La6db:
	if ((unsigned char)g019a[monster_groups[g435e]] == 150) goto La6f6;
	if ((unsigned char)g019a[monster_groups[g435e]] != 153) goto La70c;
La6f6:
	f8fa8(211, 211, 211, 211, 211, 211, 1);
	goto La7ae;
La70c:
	switch (game_state_arg) {
case 9:
	f8fa8(200, 207, 202, 208, 203, 209, p8);
	goto La7ae;
case 10:
	f8fa8(201, 201, 208, 208, 208, 208, p8);
	goto La7ae;
case 11:
	f8fa8(202, 202, 208, 203, 203, 210, p8);
	goto La7ae;
case 12:
	f8fa8(206, 206, 208, 208, 209, 209, p8);
	goto La7ae;
default:
	f8fa8(0, 0, 0, 0, 0, 0, 0);
	goto La7ae;
	}
La7ae:
	goto Lb021;
	g0191[monster_groups[l6]] = (char)clamp_toward_x((p8 << 1), (unsigned char)g0191[monster_groups[l6]], 0);
#asm
	db 0e9h,03ch,008h
#endasm
	f8efc(l6, 0, 2, 1);
	if ((*(char **)((char *)group_monster_rec + (l6 << 1)))[208] == 21) goto La813;
	l10 = -100;
#asm
	db 0ebh,025h
#endasm
La813:
	rsi = (44 * l8);
	l10 += ((*(int *)p4 - *(int *)((char *)monster_groups[l6] + rsi)) * 3);
La838:
	f825f(l6, (0 - p8), 3497, 11, 3, l10, 1, 0, 0, 0, 14, 6);
	goto Lb021;
	f8efc(l6, 0, 4, 0);
#asm
	db 0ffh,076h,0f6h,0b8h,00bh,000h,050h,0ffh,076h,008h,0b8h,004h,000h,050h,050h,083h
	db 03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h,000h,075h,005h
la89f:
	db 0b8h,001h,000h,0ebh,003h
la8a4:
	db 0b8h,000h,000h
la8a7:
	db 050h
	call f861e_
	db 083h,0c4h,00ch,0e9h,070h,007h
#endasm
	f8efc(l6, 0, 16, 0);
#asm
	db 0b8h,006h,000h,050h,0b8h,00eh,000h,050h,0ffh,076h,008h,0ffh,076h,008h,0ffh,076h
	db 008h,0b8h,001h,000h,050h,0ffh,076h,0f6h,0b8h,003h,000h,050h,0b8h,00bh,000h,050h
	db 0b8h,09eh,00dh,050h,083h,03eh,05eh,043h,000h,074h,008h,0a1h,05eh,043h,03dh,006h
	db 000h,075h,005h
la8f9:
	db 0b8h,001h,000h,0ebh,003h
la8fe:
	db 0b8h,000h,000h
la901:
	db 050h
	call f87ae_
	db 083h,0c4h,016h,0e9h,016h,007h,0b8h,000h,000h,050h,0b8h,004h,000h,050h,0ffh,076h
	db 0f8h,0ffh,076h,0fah
	call f8efc_
	db 083h,0c4h,008h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h
	db 0d0h,000h,03ch,016h,075h,007h
#endasm
	if (g4352) goto La946;
La939:
	;
#asm
la939:
	db 03ch,014h,074h,009h,03ch,015h,074h,005h
#endasm
	l10 = -100;
La946:
	rsi = (44 * l8);
#asm
	db 08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,040h,002h,099h,0d1h
	db 0e0h,0d1h,0d2h,0d1h,0e0h,0d1h,0d2h,0d1h,0e0h,0d1h,0d2h,050h,052h,08bh,040h,004h
	db 099h,08bh,0c8h,08bh,0dah,05ah,058h
	call $ldv
	db 089h,046h,0fch,03dh,002h,000h,07dh,005h
#endasm
	l4 = 2;
La985:
	f8149(l6, l8, 1, l4, p8, 0, l10);
	goto Lb021;
#asm
	db 0ffh,076h,008h,0b8h,008h,000h,050h,08bh,046h,008h,0d1h,0e0h,050h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0feh,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0f8h
	db 08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,001h,040h
	db 006h
#endasm
	rsi = (44 * l8);
	if (*(int *)(((char *)monster_groups[l6] + rsi) + 6) <= *(int *)(((char *)monster_groups[l6] + rsi) + 8)) goto Laa0d;
	*(int *)(((char *)monster_groups[l6] + rsi) + 6) = *(int *)(((char *)monster_groups[l6] + rsi) + 8);
Laa0d:
	if (l6) goto Laa20;
	draw_member_card_x(l8, 0);
Laa20:
	goto Lb021;
	rsi = (44 * l8);
#asm
	db 08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,011h,02ah,0e4h
	db 050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h
	db 08bh,0c8h,058h,02bh,0c1h,089h,046h,0feh,03dh,000h,000h,07dh,005h
#endasm
	l2 = 0;
Laa5d:
	;
#asm
laa5d:
	db 08ah,046h,0feh,088h,040h,011h
#endasm
	if (l6) goto Laa76;
	draw_member_card_x(l8, 0);
Laa76:
	goto Lb021;
	rsi = (44 * l8);
	l2 = ((unsigned char)((char *)monster_groups[l6] + rsi)[35] - p8);
	if (l2 > 0) goto Laaa5;
	l2 = 0;
	((char *)monster_groups[l6] + rsi)[19] = 0;
Laaa5:
	;
#asm
laaa5:
	db 08ah,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,023h
#endasm
	rsi = (44 * l8);
#asm
	db 08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,013h,02ah,0e4h
	db 050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,02bh
	db 0c1h,089h,046h,0feh,03dh,000h,000h,07fh,009h
#endasm
	l2 = 0;
#asm
	db 0c6h,040h,023h,000h
#endasm
Laafa:
	;
#asm
laafa:
	db 08ah,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0f0h,08bh,046h,0fah,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,013h
#endasm
	if (l6) goto Lab28;
	draw_member_card_x(l8, 0);
Lab28:
	goto Lb021;
	rsi = (44 * l8);
#asm
	db 08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,015h,02ah,0e4h
	db 050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h
	db 08bh,0c8h,058h,02bh,0c1h,089h,046h,0feh,03dh,000h,000h,07dh,005h
#endasm
	l2 = 0;
Lab65:
	;
#asm
lab65:
	db 08ah,046h,0feh,088h,040h,015h
#endasm
	if (l6) goto Lab7e;
	draw_member_card_x(l8, 0);
Lab7e:
	goto Lb021;
	l4 = 1;
Lab86:
	;
#asm
lab86:
	db 08bh,046h,0fch,03dh,001h,000h,074h,014h,03dh,002h,000h,074h,00fh,03dh,004h,000h
	db 074h,00ah,03dh,008h,000h,074h,005h,03dh,009h,000h,075h,039h
#endasm
Laba2:
	;
#asm
laba2:
	db 0b8h,02ch,000h,0f7h,06eh,0f8h,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0f1h,08bh
	db 046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,00eh,02ah,0e4h,08bh
	db 04eh,008h,0d1h,0e1h,02bh,0c1h,089h,046h,0feh,03dh,000h,000h,07dh,005h
#endasm
	l2 = 0;
Labd5:
	;
#asm
labd5:
	db 08ah,046h,0feh,088h,040h,00eh
#endasm
Labdb:
	l4++;
	if (l4 <= 9) goto Lab86;
	if (l6) goto Labf9;
	draw_member_card_x(l8, 0);
Labf9:
	goto Lb021;
	f8efc(l6, 0, 4, 0);
	l2 = f7ddc(l6, l8, (p8 << 2), 4, (p8 << 2), 11, l10);
	if (l6) goto Lac4e;
	draw_member_card_x(l8, 0);
Lac4e:
	l6 = g435e;
	l8 = g435c;
	p8 = (l2 / 7);
#asm
	db 0ffh,076h,008h,0b8h,007h,000h,050h,0ffh,076h,008h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0feh,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0f8h
	db 08bh,0f0h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,001h,040h
	db 002h
#endasm
	rsi = (44 * l8);
	if (*(int *)(((char *)monster_groups[l6] + rsi) + 2) <= *(int *)(((char *)monster_groups[l6] + rsi) + 4)) goto Laccb;
	*(int *)(((char *)monster_groups[l6] + rsi) + 2) = *(int *)(((char *)monster_groups[l6] + rsi) + 4);
Laccb:
	if (l6) goto Lacde;
	draw_member_card_x(l8, 0);
Lacde:
	goto Lb021;
#asm
	db 0ffh,076h,008h,0b8h,008h,000h,050h,0ffh,076h,008h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0feh,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,02eh,05ch
	db 043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,001h
	db 040h,006h
#endasm
	rsi = (44 * g435c);
	if (*(int *)(((char *)monster_groups[g435e] + rsi) + 6) <= *(int *)(((char *)monster_groups[g435e] + rsi) + 8)) goto Lad48;
	*(int *)(((char *)monster_groups[g435e] + rsi) + 6) = *(int *)(((char *)monster_groups[g435e] + rsi) + 8);
Lad48:
	;
#asm
lad48:
	db 0b8h,000h,000h,050h,0b8h,002h,000h,050h,0ffh,076h,008h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0feh,08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,02eh,05ch
	db 043h,08bh,0f0h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,001h
	db 040h,002h
#endasm
	rsi = (44 * g435c);
	if (*(int *)(((char *)monster_groups[g435e] + rsi) + 2) <= *(int *)(((char *)monster_groups[g435e] + rsi) + 4)) goto Ladb0;
	*(int *)(((char *)monster_groups[g435e] + rsi) + 2) = *(int *)(((char *)monster_groups[g435e] + rsi) + 4);
Ladb0:
	if (g435e) goto Ladc5;
	draw_member_card_x(g435c, 0);
Ladc5:
	goto Lb021;
	if (g435e) goto Lae36;
	l2 = 0;
Ladd4:
	;
#asm
ladd4:
	db 0b8h,000h,000h,050h,0b8h,00ah,000h,050h,0ffh,076h,008h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0fch,050h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0c8h
	db 08bh,056h,0feh,0d1h,0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,001h,087h,010h,044h
	db 08bh,087h,010h,044h,03bh,087h,012h,044h,07eh,008h,08bh,087h,012h,044h,089h,087h
	db 010h,044h
#endasm
Lae2b:
	l2++;
	if (l2 < 6) goto Ladd4;
Lae36:
	goto Lb021;
	g4ed0 += (p8 * 50);
	g4ed2 = clamp_toward_x(((p8 * 5) + 70), g4ed2, 0);
#asm
	db 0e9h,0b0h,001h
#endasm
	g4ed4 += (p8 * 35);
	g4ed6 = clamp_toward_x((((p8 - 1) / 2) + 1), g4ed6, 0);
#asm
	db 0e9h,07dh,001h
#endasm
	g4ecc += (p8 * 50);
	g4ece = clamp_toward_x((((p8 - 1) / 2) + 1), g4ece, 0);
#asm
	db 0e9h,048h,001h
#endasm
	g4edc += (p8 * 5);
#asm
	db 0e9h,036h,001h
#endasm
	g4ec8 += (100 * p8);
#asm
	db 0e9h,029h,001h
#endasm
	g0190[monster_groups[g435e]] = (char)clamp_toward_x((p8 * 10), (unsigned char)g0190[monster_groups[g435e]], 0);
	if (g435e) goto Laf6d;
	g4ed8 += (p8 * 50);
	g4eda = clamp_toward_x((p8 * 10), g4eda, 0);
Laf6d:
	goto Lb021;
#asm
	db 05bh,094h,090h,094h,0dch,094h,018h,095h,053h,095h,08ch,095h,0cbh,095h,0feh,095h
	db 06ch,096h,0b6h,096h,0a5h,0a9h,0e8h,096h,02fh,097h,066h,097h,09ah,097h,023h,0aah
	db 003h,098h,03eh,098h,07ah,098h,0c2h,098h,0f4h,098h,04ch,099h,087h,099h,0d9h,099h
	db 014h,09ah,05eh,09ah,079h,0aah,0f5h,09ah,034h,09bh,0f4h,09bh,0d9h,0aeh,0a1h,09ch
	db 02dh,09dh,087h,09dh,0e1h,09dh,02eh,09eh,063h,09eh,0a9h,09eh,0ebh,0aeh,021h,0b0h
	db 0e9h,09eh,0a4h,0aeh,028h,09fh,070h,09fh,0e1h,09fh,06bh,0a0h,021h,0b0h,010h,0a1h
	db 05dh,0a1h,0aah,0a1h,058h,0a2h,081h,0abh,021h,0b0h,039h,0aeh,0a0h,0a2h,0f9h,0a2h
	db 021h,0b0h,02bh,0abh,045h,0a3h,09fh,0a3h,021h,0b0h,075h,0a4h,021h,0b0h,0bdh,0a4h
	db 066h,0ach,002h,0a5h,037h,0a5h,074h,0a5h,071h,0aeh,0fbh,0a5h,0f8h,0aeh,079h,0a6h
	db 0b1h,0a7h,021h,0b0h,0fch,0abh,0e5h,0a7h,06ch,0a8h,021h,0b0h,0b1h,0a8h,00bh,0a9h
	db 0e1h,0ach,0c8h,0adh
lb014:
	db 03dh,052h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,070h,0afh
#endasm
Lb021:
	if (g5116) goto Lb036;
	combat_delay((g4fc8 / 2));
Lb036:
	;
}
