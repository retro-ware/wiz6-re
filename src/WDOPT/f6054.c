#asm
	extrn show_overhead_map_:near
#endasm
extern char g4511[];
extern char g4517[];
extern char pc_condition[];
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
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
struct s4 { int w[2]; };
struct s4 make_two_char_text();
f6054(p4, p6, p8, p10)
{
	int l2;
	int l4;
#asm
	db 08bh,046h,006h,0e9h,0e2h,004h
#endasm
	g4ed0 += (p8 * 50);
	g4ed2 = reduce_toward_zero(((p8 * 5) + 70), g4ed2, 0);
	goto L655b;
	g4ed4 += (p8 * 35);
	g4ed6 = reduce_toward_zero((((p8 - 1) / 2) + 1), g4ed6, 0);
#asm
	db 0e9h,08eh,004h
#endasm
	g4ecc += (p8 * 50);
	g4ece = reduce_toward_zero((((p8 - 1) / 2) + 1), g4ece, 0);
#asm
	db 0e9h,059h,004h
#endasm
	g4edc += (p8 * 5);
#asm
	db 0e9h,047h,004h
#endasm
	g4ec8 += (100 * p8);
#asm
	db 0e9h,03ah,004h
#endasm
	g4ed8 += (p8 * 50);
	g4eda = reduce_toward_zero((p8 * 5), g4eda, 0);
#asm
	db 0e9h,005h,004h
#endasm
	l2 = roll_dice_dopt(make_two_char_text((p8 << 1), 8, p8));
	*(int *)((char *)pc_stamina + (432 * p10)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p10)) <= *(int *)((char *)pc_stamina_max + (432 * p10))) goto L61a3;
	*(int *)((char *)pc_stamina + (432 * p10)) = *(int *)((char *)pc_stamina_max + (432 * p10));
L61a3:
	goto L655b;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,08ah,087h,00dh,045h,02ah,0e4h,050h,08bh
	db 046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0b1h,003h,0d3h,0e0h,003h,0c2h,08bh,0c8h
	db 058h,02bh,0c1h,089h,046h,0feh,03dh,000h,000h,07dh,005h
#endasm
	l2 = 0;
L61d6:
	;
#asm
l61d6:
	db 08ah,046h,0feh,088h,087h,00dh,045h
#endasm
	goto L655b;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,08ah,087h,08ch,045h,02ah,0e4h,02bh,046h
	db 008h,089h,046h,0feh,03dh,000h,000h,07fh,00ah
#endasm
	l2 = 0;
#asm
	db 0c6h,087h,00fh,045h,000h
#endasm
L6203:
	;
#asm
l6203:
	db 08ah,046h,0feh,088h,087h,08ch,045h,08ah,087h,00fh,045h,02ah,0e4h,050h,08bh,046h
	db 008h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,02bh,0c1h,089h,046h
	db 0feh,03dh,000h,000h,07fh,00ah
#endasm
	l2 = 0;
#asm
	db 0c6h,087h,08ch,045h,000h
#endasm
L6233:
	;
#asm
l6233:
	db 08ah,046h,0feh,088h,087h,00fh,045h
#endasm
	goto L655b;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,080h,0bfh,089h,045h,002h,075h,056h,08bh
	db 046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,050h,08ah,087h,017h,045h,02ah,0e4h,08bh
	db 0d0h,0b9h,015h,000h,02bh,0c8h,058h,03bh,0c1h,07eh,03ah,0feh,08fh,017h,045h
#endasm
	if (random(21) <= (unsigned char)g4517[(432 * p10)]) goto L629d;
	pc_condition[(432 * p10)] = 3;
	*(int *)((char *)pc_hp + (432 * p10)) = 0;
	*(int *)((char *)pc_stamina + (432 * p10)) = 0;
#asm
	db 0ebh,005h
#endasm
L629d:
	;
#asm
l629d:
	db 0c6h,087h,089h,045h,000h
#endasm
L62a2:
	goto L655b;
	if ((l2 = ((unsigned char)g4511[(432 * p10)] - (p8 * 25))) >= 0) goto L62d5;
	l2 = 0;
L62d5:
	g4511[(432 * p10)] = *(char *)&l2;
	goto L655b;
	l4 = 1;
L62e4:
	;
#asm
l62e4:
	db 08bh,046h,0fch,03dh,001h,000h,074h,014h,03dh,002h,000h,074h,00fh,03dh,004h,000h
	db 074h,00ah,03dh,008h,000h,074h,005h,03dh,009h,000h,075h,030h
#endasm
L6300:
	;
#asm
l6300:
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0d9h,08ah
	db 087h,00ah,045h,02ah,0e4h,08bh,04eh,008h,0d1h,0e1h,02bh,0c1h,089h,046h,0feh,03dh
	db 000h,000h,07dh,005h
#endasm
	l2 = 0;
L6329:
	;
#asm
l6329:
	db 08ah,046h,0feh,088h,087h,00ah,045h
#endasm
L6330:
	l4++;
	if (l4 <= 9) goto L62e4;
	goto L655b;
	l2 = roll_dice_dopt(make_two_char_text(p8, 7, p8));
	*(int *)((char *)pc_hp + (432 * p10)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p10)) <= *(int *)((char *)pc_hp_max + (432 * p10))) goto L6388;
	*(int *)((char *)pc_hp + (432 * p10)) = *(int *)((char *)pc_hp_max + (432 * p10));
L6388:
	goto L655b;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0d8h,080h,0bfh,089h,045h,003h,075h,03dh,08bh
	db 046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,050h,08ah,087h,017h,045h,02ah,0e4h,08bh
	db 0d0h,0b9h,012h,000h,02bh,0c8h,058h,03bh,0c1h,07eh,021h,0feh,08fh,017h,045h,0c6h
	db 087h,089h,045h,000h,0c7h,087h,000h,044h,001h,000h,08bh,087h,006h,044h,0b9h,00ah
	db 000h,099h,0f7h,0f9h,089h,087h,004h,044h,0ffh,087h,00eh,044h
#endasm
L63d7:
	goto L655b;
	if (try_open_lock(p8) != -1) goto L63e6;
L63e6:
	goto L655b;
#asm
	db 0ffh,076h,008h
	call show_overhead_map_
	db 059h,0e9h,068h,001h,0e9h,065h,001h
#endasm
	l2 = roll_dice_dopt(make_two_char_text(p8, 8, p8));
	*(int *)((char *)pc_stamina + (432 * p4)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p4)) <= *(int *)((char *)pc_stamina_max + (432 * p4))) goto L6440;
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((char *)pc_stamina_max + (432 * p4));
L6440:
	l2 = roll_dice_dopt(make_two_char_text(p8, 2, 0));
	*(int *)((char *)pc_hp + (432 * p4)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p4)) <= *(int *)((char *)pc_hp_max + (432 * p4))) goto L648b;
	*(int *)((char *)pc_hp + (432 * p4)) = *(int *)((char *)pc_hp_max + (432 * p4));
L648b:
	goto L655b;
	l2 = 0;
L6493:
	l4 = roll_dice_dopt(make_two_char_text(p8, 10, 0));
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) += l4;
	if (*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) <= *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)))) goto L64e9;
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) = *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)));
L64e9:
	l2++;
	if (l2 < 6) goto L6493;
	goto L655b;
#asm
	db 00ah,000h,00fh,000h,01ah,000h,01eh,000h,026h,000h,027h,000h,029h,000h,02eh,000h
	db 033h,000h,035h,000h,039h,000h,03ch,000h,03eh,000h,040h,000h,044h,000h,046h,000h
	db 04dh,000h,050h,000h,051h,000h,056h,061h,0a6h,061h,0e0h,061h,002h,061h,014h,061h
	db 0dah,063h,0cdh,060h,03dh,062h,0dfh,062h,062h,060h,0a5h,062h,0e9h,063h,0f3h,063h
	db 03eh,063h,09ah,060h,021h,061h,08bh,063h,0f6h,063h,08eh,064h,05bh,065h
l6544:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,0f6h,064h,0b9h,014h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,024h,05fh,007h,0ffh,0e1h
#endasm
L655b:
	;
}
