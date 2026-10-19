#asm
	extrn clear_combat_groups_:near
	extrn generate_monster_group_:near
#endasm
extern int combat_gold;
extern int g4354;
extern int g43c8;
/* Set up a new encounter: clear groups, generate monsters, roll surprise, fill party group. */
start_encounter()
{
	char x0[4];
	register int rsi;
	g43c8 = 0;
	combat_gold = 0;
#asm
	db 0a1h,03ah,043h,03dh,080h,000h,074h,00ah,03dh,097h,000h,074h,005h,03dh,099h,000h
	db 075h,006h
#endasm
L62f3:
	g4354 = 1;
L62f9:
	;
#asm
l62f9:
	call clear_combat_groups_
	db 0b8h,001h,000h,050h,0ffh,036h,03ah,043h
	call generate_monster_group_
	db 083h,0c4h,004h,08bh,01eh,0b8h,043h,08bh,036h,038h,043h,08ah,080h,0a2h,000h,02ah
	db 0e4h,0a3h,0c4h,043h
#endasm
	check_group_surprise();
	fill_party_group();
}
