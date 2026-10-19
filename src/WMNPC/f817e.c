extern char g450d[];
extern char g450f[];
extern char g4511[];
extern char g4517[];
extern char g458c[];
extern char g51cf;
extern char g51d3;
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
extern int g527a;
extern int g52d0;
extern int message_delay;
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_level[];
extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
struct s4 { int w[2]; };
struct s4 f80ff();
f817e(p4, p6, p8, p10)
{
	int l2;
	int l4;
#asm
	db 08bh,046h,006h,0e9h,079h,006h
#endasm
	g4ed0 += (p8 * 50);
	g4ed2 = f812e(((p8 * 5) + 70), g4ed2, 0);
	goto L881c;
	g4ed4 += (p8 * 35);
	g4ed6 = f812e((((p8 - 1) / 2) + 1), g4ed6, 0);
#asm
	db 0e9h,025h,006h
#endasm
	g4ecc += (p8 * 50);
	g4ece = f812e((((p8 - 1) / 2) + 1), g4ece, 0);
#asm
	db 0e9h,0f0h,005h
#endasm
	g4edc += (p8 * 5);
#asm
	db 0e9h,0deh,005h
#endasm
	g4ec8 += (100 * p8);
#asm
	db 0e9h,0d1h,005h
#endasm
	g4ed8 += (p8 * 50);
	g4eda = f812e((p8 * 5), g4eda, 0);
#asm
	db 0e9h,09ch,005h
#endasm
	l2 = f66cf(f80ff((p8 << 1), 8, p8));
	*(int *)((char *)pc_stamina + (432 * p10)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p10)) <= *(int *)((char *)pc_stamina_max + (432 * p10))) goto L82cd;
	*(int *)((char *)pc_stamina + (432 * p10)) = *(int *)((char *)pc_stamina_max + (432 * p10));
L82cd:
	f5078(p10, g527a);
	goto L881c;
	l2 = ((unsigned char)g450d[(432 * p10)] - (p8 * 25));
	if (l2 >= 0) goto L830d;
	l2 = 0;
L830d:
	g450d[(432 * p10)] = *(char *)&l2;
	f5078(p10, g527a);
	goto L881c;
	l2 = ((unsigned char)g458c[(432 * p10)] - p8);
	if (l2 > 0) goto L8347;
	l2 = 0;
	g450f[(432 * p10)] = 0;
L8347:
	g458c[(432 * p10)] = *(char *)&l2;
	l2 = ((unsigned char)g450f[(432 * p10)] - (p8 * 5));
	if (l2 > 0) goto L8377;
	l2 = 0;
	g458c[(432 * p10)] = 0;
L8377:
	g450f[(432 * p10)] = *(char *)&l2;
	f5078(p10, g527a);
	goto L881c;
	if (pc_condition[(432 * p10)] != 2) goto L83f3;
	if ((p8 * 3) <= (21 - (unsigned char)g4517[(432 * p10)])) goto L83f3;
	g4517[(432 * p10)]--;
	if (random(21) <= (unsigned char)g4517[(432 * p10)]) goto L83ee;
	pc_condition[(432 * p10)] = 3;
	*(int *)((char *)pc_hp + (432 * p10)) = 0;
	*(int *)((char *)pc_stamina + (432 * p10)) = 0;
#asm
	db 0ebh,005h
#endasm
L83ee:
	;
#asm
l83ee:
	db 0c6h,087h,089h,045h,000h
#endasm
L83f3:
	f5078(p10, g527a);
	goto L881c;
	l2 = ((unsigned char)g4511[(432 * p10)] - (p8 * 25));
	if (l2 >= 0) goto L8433;
	l2 = 0;
L8433:
	g4511[(432 * p10)] = *(char *)&l2;
	f5078(p10, g527a);
	goto L881c;
	l4 = 1;
L844f:
	;
#asm
l844f:
	db 08bh,046h,0fch,03dh,001h,000h,074h,014h,03dh,002h,000h,074h,00fh,03dh,004h,000h
	db 074h,00ah,03dh,008h,000h,074h,005h,03dh,009h,000h,075h,030h
#endasm
L846b:
	;
#asm
l846b:
	db 0b8h,0b0h,001h,0f7h,06eh,00ah,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0d9h,08ah
	db 087h,00ah,045h,02ah,0e4h,08bh,04eh,008h,0d1h,0e1h,02bh,0c1h,089h,046h,0feh,03dh
	db 000h,000h,07dh,005h
#endasm
	l2 = 0;
L8494:
	;
#asm
l8494:
	db 08ah,046h,0feh,088h,087h,00ah,045h
#endasm
L849b:
	l4++;
	if (l4 <= 9) goto L844f;
	f5078(p10, g527a);
	goto L881c;
	l2 = f66cf(f80ff(p8, 7, p8));
	*(int *)((char *)pc_hp + (432 * p10)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p10)) <= *(int *)((char *)pc_hp_max + (432 * p10))) goto L8500;
	*(int *)((char *)pc_hp + (432 * p10)) = *(int *)((char *)pc_hp_max + (432 * p10));
L8500:
	f5078(p10, g527a);
	goto L881c;
	if (pc_condition[(432 * p10)] != 3) goto L855c;
	if ((p8 * 3) <= (18 - (unsigned char)g4517[(432 * p10)])) goto L855c;
	g4517[(432 * p10)]--;
	pc_condition[(432 * p10)] = 0;
	*(int *)((char *)pc_hp + (432 * p10)) = 1;
	*(int *)((char *)pc_stamina + (432 * p10)) = (*(int *)((char *)pc_stamina_max + (432 * p10)) / 10);
	(*(int *)((char *)g440e + (432 * p10)))++;
L855c:
	f5078(p10, g527a);
	goto L881c;
	l2 = f66cf(f80ff(p8, 8, p8));
	*(int *)((char *)pc_stamina + (432 * p4)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p4)) <= *(int *)((char *)pc_stamina_max + (432 * p4))) goto L85b6;
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((char *)pc_stamina_max + (432 * p4));
L85b6:
	l2 = f66cf(f80ff(p8, 2, 0));
	*(int *)((char *)pc_hp + (432 * p4)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p4)) <= *(int *)((char *)pc_hp_max + (432 * p4))) goto L8601;
	*(int *)((char *)pc_hp + (432 * p4)) = *(int *)((char *)pc_hp_max + (432 * p4));
L8601:
	f5078(p4, g527a);
	goto L881c;
	l2 = 0;
L8616:
	l4 = f66cf(f80ff(p8, 10, 0));
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) += l4;
	if (*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) <= *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)))) goto L866c;
	*(int *)((char *)pc_spell_pts + ((432 * p4) + (l2 << 2))) = *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)));
L866c:
	l2++;
	if (l2 < 6) goto L8616;
	f5078(p4, g527a);
	goto L881c;
	l2 = (((p8 * 10) + ((*(int *)((char *)pc_level + (432 * p4)) - (unsigned char)g51cf) * 5)) + 25);
	if (((unsigned char)g51d3 & 4)) goto L86d6;
	if (random(100) <= l2) goto L86e6;
L86d6:
	f5d9b(1544, 0);
	goto L8725;
L86e6:
	f5d9b(1543, 0);
	g52d0 += f66cf(f80ff((p8 << 1), 6, (p8 << 1)));
L8725:
	goto L881c;
	if (((unsigned char)g51d3 & 8)) goto L8765;
	if (random(((*(int *)((char *)pc_level + (432 * p4)) / 2) + (p8 * 3))) >= (unsigned char)g51cf) goto L8775;
L8765:
	get_message(1545, 21116);
	goto L87a3;
L8775:
	fc16d(21202, 1);
	get_message(1546, 21116);
	replace_char_with_string(21116, 21202, 94);
L87a3:
	f5d0c(21116, 0);
	f5a1e(message_delay);
	goto L881c;
#asm
	db 00ah,000h,00fh,000h,01ah,000h,01eh,000h,026h,000h,029h,000h,02eh,000h,032h,000h
	db 033h,000h,035h,000h,038h,000h,039h,000h,040h,000h,044h,000h,046h,000h,04dh,000h
	db 050h,000h,051h,000h,080h,082h,0ddh,082h,024h,083h,02ch,082h,03eh,082h,0f7h,081h
	db 08eh,083h,087h,086h,04ah,084h,08ch,081h,028h,087h,003h,084h,0b6h,084h,0c4h,081h
	db 04bh,082h,010h,085h,06ch,085h,011h,086h,01ch,088h
l8805:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,0bbh,087h,0b9h,013h,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,022h,05fh,007h,0ffh,0e1h
#endasm
L881c:
	;
}
