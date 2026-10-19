#asm
	extrn clamp_value_:near
	extrn format_dice_:near
	extrn random_:near
	extrn roll_dice_:near
	extrn show_message_text_m_:near
#endasm
extern char g450f[];
extern char g458c[];
extern char pc_condition[];
extern char pc_sex[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
apply_member_effects()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[2];
	int l14;
	int l16;
	int l18;
	register int rsi;
	register int rdi;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,0a3h,08ah
	db 04fh,03bh,006h,09ah,04fh,074h,006h
#endasm
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
	;
#asm
lc4af:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0f8h,08bh,080h,020h,001h,0b9h,010h,000h,099h,0f7h,0f9h,089h,046h,0f6h,08bh
	db 080h,020h,001h,099h,0f7h,0f9h,089h,056h,0f4h
#endasm
Lc4d8:
	l6 = choose_party_member_m(2047, 1);
	if (l6 == -1) goto Lc8e5;
	l16 = 0;
	l18 = 0;
	if ((unsigned)pc_condition[(l6 * 432)] >= 3) goto Lc8cd;
#asm
lc50c:
	db 0ffh,076h,0f6h,0ffh,076h,0f4h,0ffh,076h,0f6h
	call format_dice_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,089h,046h,0f2h
#endasm
	l2 = 0;
Lc53a:
	if (extract_bits(l8, l2, 1) != 1) goto Lc8bf;
	if (l2 >= 7) goto Lc55d;
	l16 = 1;
Lc55d:
	;
#asm
lc55d:
	db 08bh,046h,0feh,03dh,007h,000h,07eh,00ah,03dh,00fh,000h,07dh,005h
#endasm
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
	;
#asm
lc5a6:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,0ffh,0b7h,012h,044h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0ffh,076h,0f4h,0ffh
	db 076h,0f6h
	call format_dice_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0c8h,08bh,056h,0fch,0d1h
	db 0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,003h,087h,010h,044h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0c8h,08bh,056h,0fch,0d1h
	db 0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,089h,087h,010h,044h
#endasm
	l4++;
	if (l4 < 6) goto Lc5a6;
	goto Lc8bf;
	*(int *)((char *)pc_hp + (432 * l6)) = clamp_value((*(int *)((char *)pc_hp + (432 * l6)) + l14), 0, *(int *)((char *)pc_hp_max + (432 * l6)));
#asm
	db 0e9h,061h,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,0c6h,087h,08ch,045h,000h
	db 0c6h,087h,00fh,045h,000h,0e9h,04ch,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h
	db 0c6h,087h,00dh,045h,000h,0e9h,03ch,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h
	db 080h,0bfh,089h,045h,002h,075h,005h,0c6h,087h,089h,045h,000h
#endasm
Lc697:
	goto Lc8bf;
	l4 = 1;
Lc69f:
	;
#asm
lc69f:
	db 08bh,046h,0fch,03dh,001h,000h,074h,014h,03dh,002h,000h,074h,00fh,03dh,004h,000h
	db 074h,00ah,03dh,008h,000h,074h,005h,03dh,009h,000h,075h,014h
#endasm
Lc6bb:
	;
#asm
lc6bb:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0d9h,0c6h
	db 087h,00ah,045h,000h
#endasm
Lc6cf:
	l4++;
	if (l4 <= 9) goto Lc69f;
	goto Lc8bf;
	*(int *)((char *)pc_stamina + (432 * l6)) = clamp_value((*(int *)((char *)pc_stamina + (432 * l6)) - l14), 0, *(int *)((char *)pc_stamina_max + (432 * l6)));
	if (*(int *)((char *)pc_stamina + (432 * l6)) > 0) goto Lc733;
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
	;
#asm
lc73b:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,0ffh,0b7h,012h,044h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0ffh,076h,0f4h,0ffh
	db 076h,0f6h
	call format_dice_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,08bh,0c8h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,056h,0fch,0d1h,0e2h
	db 0d1h,0e2h,003h,0c2h,08bh,0d8h,08bh,087h,010h,044h,02bh,0c1h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0c8h,08bh,056h,0fch,0d1h
	db 0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,089h,087h,010h,044h
#endasm
	l4++;
	if (l4 < 6) goto Lc73b;
	goto Lc8bf;
	*(int *)((char *)pc_hp + (432 * l6)) = clamp_value((*(int *)((char *)pc_hp + (432 * l6)) - l14), 0, *(int *)((char *)pc_hp_max + (432 * l6)));
	if (*(int *)((char *)pc_hp + (432 * l6)) > 0) goto Lc814;
	pc_condition[(432 * l6)] = 3;
	*(int *)((char *)pc_hp + (432 * l6)) = 0;
	*(int *)((char *)pc_stamina + (432 * l6)) = 0;
	play_sound(((unsigned char)pc_sex[(432 * l6)] + 8));
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
