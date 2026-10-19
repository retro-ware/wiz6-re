#asm
	extrn int_to_string_:near
	extrn roll_dice_x_:near
	extrn strcpy_:near
#endasm
extern char g019a[];
extern char g019c[];
extern char g019d[];
extern int g435e;
extern int g4fc8;
extern int g5116;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
extern int party_picture_win;
f8fa8(p4, p6, p8, p10, p12, p14, p16)
{
	int l2;
	int l4;
	char x4[416];
	int l422;
	int l424;
	register int rsi;
	register int rdi;
	combat_delay((g4fc8 / 4));
	g5116 = 0;
	if (!g435e) goto L8fd4;
#asm
	db 0a1h,05eh,043h,03dh,006h,000h,075h,031h
#endasm
L8fd4:
	l4 = 6;
	if ((unsigned)g019d[monster_groups[l4]] <= 0) goto L9003;
	print_msg_centered(3217, 6, 2);
	return;
L9003:
	goto L9032;
L9005:
	if (p16 <= 0) goto L901e;
	if (monster_group_count >= 5) goto L901e;
	monster_group_count++;
	l4 = monster_group_count;
	goto L9032;
L901e:
	print_msg_centered(3217, 6, 2);
	return;
L9032:
	setmem(monster_groups[l4], 416, 0);
	l424 = 0;
L9051:
	l424++;
	p16--;
#asm
	db 083h,07eh,010h,000h,07eh,013h
#endasm
	if (random(3)) goto L9071;
	if (l424 < 3) goto L9051;
L9071:
	;
#asm
l9071:
	db 08bh,046h,010h,0ebh,04bh
#endasm
	l422 = p4;
	goto L90d0;
	l422 = p6;
#asm
	db 0ebh,048h
#endasm
	l422 = p8;
#asm
	db 0ebh,03fh
#endasm
	l422 = p10;
#asm
	db 0ebh,036h
#endasm
	l422 = p12;
#asm
	db 0ebh,02dh
#endasm
	l422 = p14;
#asm
	db 0ebh,024h
#endasm
	l422 = p4;
#asm
	db 0ebh,01bh,076h,090h,07fh,090h,088h,090h,091h,090h,09ah,090h,0a3h,090h
l90c1:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0b5h,090h
l90ce:
	db 0ebh,0dch
#endasm
L90d0:
	access_scenario_record(4, group_monster_rec[l4], l422, 0);
	g019a[monster_groups[l4]] = *(char *)&l422;
#asm
	db 08ah,086h,058h,0feh,08bh,04eh,0fch,0d1h,0e1h,08bh,0d9h,08bh,09fh,0b6h,043h,088h
	db 047h,076h
#endasm
	*(int *)((*(char **)((char *)group_monster_rec + (l4 << 1))) + 116) = (l424 - 1);
#asm
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,08fh,0b6h,043h,083h,0c1h,074h,083h,0ech
	db 004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h,08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,08bh,04eh,0fch,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h
	db 09dh,001h
#endasm
	if ((unsigned)g019d[monster_groups[l4]] >= 1) goto L916e;
	g019d[monster_groups[l4]] = 1;
L916e:
	;
#asm
l916e:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh,001h,009h
	db 076h,005h,0c6h,087h,09dh,001h,009h
#endasm
L9185:
	l2 = 0;
L918a:
	;
#asm
l918a:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,0c6h,080h
	db 08ch,001h,000h
#endasm
	l2++;
	if (l2 < 6) goto L918a;
	l2 = 0;
L91ad:
	;
#asm
l91ad:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,0c6h,080h
	db 092h,001h,000h
#endasm
	l2++;
	if (l2 < 4) goto L91ad;
	g019c[monster_groups[l4]] = 0;
	l2 = 0;
	goto L9311;
L91e3:
	;
#asm
l91e3:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,047h,07ah,02ah,0e4h
	db 050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,058h,089h,000h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,08fh
	db 0b6h,043h,083h,0c1h,078h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fch,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,004h
#endasm
	rsi = (44 * l2);
	*(int *)(((char *)monster_groups[l4] + rsi) + 2) = *(int *)(((char *)monster_groups[l4] + rsi) + 4);
#asm
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,08fh,0b6h,043h,083h,0c1h,07ch,083h,0ech
	db 004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h,08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,0fch,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,008h
#endasm
	rsi = (44 * l2);
	*(int *)(((char *)monster_groups[l4] + rsi) + 6) = *(int *)(((char *)monster_groups[l4] + rsi) + 8);
	rsi = (44 * l2);
	((char *)monster_groups[l4] + rsi)[42] = 255;
	rsi = (44 * l2);
	((char *)monster_groups[l4] + rsi)[30] = 10;
	rsi = (44 * l2);
	((char *)monster_groups[l4] + rsi)[33] = 0;
	rsi = (44 * l2);
	((char *)monster_groups[l4] + rsi)[24] = 0;
	l2++;
L9311:
	if ((unsigned char)g019d[monster_groups[l4]] > l2) goto L91e3;
#asm
l932a:
	db 0b8h,00ch,050h,050h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah
	db 087h,09dh,001h,02ah,0e4h,050h
	call int_to_string_
	db 083h,0c4h,004h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh
	db 09dh,001h,001h,075h,005h,0b8h,000h,000h,0ebh,003h
#endasm
L935d:
	;
#asm
l935d:
	db 0b8h,001h,000h
#endasm
L9360:
	;
#asm
l9360:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,087h
	db 0b6h,043h,003h,0c1h,050h,0b8h,0ach,050h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	get_message((g019d[monster_groups[l4]] == 1 ? 3215 : 3216), 20572);
	set_cursor(party_picture_win, (20 - ((((strlen(20492) + strlen(20652)) + strlen(20572)) + 3) / 2)), 2);
	print_combat_line(20492, 20652, 20572, 1, 6, 6);
	return;
}
