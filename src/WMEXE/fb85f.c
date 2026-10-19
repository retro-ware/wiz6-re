extern char g505c;
extern int g435c;
extern int g435e;
extern int g4fc8;
extern int g5114;
fb85f(p4, p6, p8, p10)
{
	char x0[2];
	get_combatant_name(20492, g435e, g435c);
	get_message(p4, 20652);
	g505c = 0;
	if (p6 < 0) goto Lb89c;
	get_message(p6, 20572);
Lb89c:
	print_combat_line(20492, 20652, 20572, (g435e == 0 ? 1 : 6), p8, p8);
	if (p10 != 1) goto Lb8f7;
	combat_delay(2);
	print_msg_centered(3200, 3, 2);
	combat_delay((g4fc8 / 2));
	return 1;
Lb8f7:
	if (!g435e) goto Lb92f;
#asm
	db 08bh,01eh,0b8h,043h,08ah,087h,0d2h,000h,03ch,000h,076h,025h,03ch,006h,074h,021h
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,08fh,0d2h,000h,08bh
	db 01eh,0b8h,043h,08ah,087h,0d2h,000h,03ah,0c8h,075h,006h
#endasm
	g5114 = 14;
Lb92f:
	return 0;
}
