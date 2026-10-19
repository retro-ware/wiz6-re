extern char g4518[];
extern char g452a[];
extern char g4550[];
extern char g51cf;
extern char pc_class[];
extern char pc_sex[];
extern int g5274;
extern int g54b2;
extern int g54b4[];
extern int g56ee[];
extern int g5856[];
extern int g5892;
extern int pc_gold[];
extern int pc_level[];
extern long g51c0;
/* Try to steal gold or an item from the NPC; chance from level and skill. */
do_npc_pilfer(member)
{
	int chance;
	int roll;
	int l6;
	int l8;
	int l10;
	int l12;
	chance = (((*(int *)((char *)pc_level + (432 * member)) - (unsigned char)g51cf) * 5) + ((unsigned char)g452a[(432 * member)] / 2));
	if (pc_class[(432 * member)] != 3) goto Lb095;
	chance += ((unsigned char)g4518[(432 * member)] << 1);
	goto Lb0ae;
Lb095:
	;
#asm
lb095:
	db 08ah,087h,087h,045h,03ch,004h,074h,008h,03ch,006h,074h,004h,03ch,00dh,075h,009h
#endasm
Lb0a5:
	;
#asm
lb0a5:
	db 08ah,087h,018h,045h,02ah,0e4h,001h,046h,0feh
#endasm
Lb0ae:
	;
#asm
lb0ae:
	db 08ah,087h,01ah,045h,02ah,0e4h,050h,003h,01eh,074h,052h,08ah,087h,050h,045h,098h
	db 003h,006h,0d0h,052h,0b9h,004h,000h,099h,0f7h,0f9h,08bh,0c8h,058h,003h,0c1h,003h
	db 046h,0feh,005h,0f6h,0ffh,089h,046h,0feh,03dh,000h,000h,07dh,005h
#endasm
	chance = 0;
Lb0e0:
	if (chance <= 95) goto Lb0eb;
	chance = 95;
Lb0eb:
	roll = (random(100) + g5892);
	g5892 = ((random(10) + g5892) + 5);
	get_message(((unsigned char)pc_sex[(432 * member)] + 1570), 20948);
	replace_char_with_string(20948, ((432 * member) + 17384), 94);
	f5d0c(20948, 0);
	if (roll >= chance) goto Lb233;
	fa206();
	if (g54b2 <= 0) goto Lb170;
	if (random(100) >= 20) goto Lb1d1;
Lb170:
	l6 = (random(100) * (unsigned char)g51cf);
	if ((long)l6 <= g51c0) goto Lb19d;
	l6 = *(int *)&g51c0;
Lb19d:
	g51c0 -= (long)l6;
	*(long *)((char *)pc_gold + (432 * member)) += (long)l6;
	get_message(1574, 20948);
	goto Lb230;
Lb1d1:
	l8 = random(g54b2);
	l10 = g54b4[l8];
	l12 = g5856[l10];
	if (npc_give_item_to_member(member, l12, g56ee[l10]) != -1) goto Lb215;
	get_message(1575, 20948);
	goto Lb230;
Lb215:
	get_message(1573, 20948);
	g5856[l10] = 0;
Lb230:
	goto Lb2d5;
Lb233:
	if ((chance << 1) < roll) goto Lb246;
	if (roll < 95) goto Lb2c7;
Lb246:
	get_message(1576, 20948);
	replace_char_with_string(20948, ((432 * member) + 17384), 94);
	f5d0c(20948, 1);
	l6 = (g4550[((432 * member) + g5274)] - (random(25) + 25));
	if (l6 >= -100) goto Lb2a9;
	l6 = -100;
Lb2a9:
	g4550[((432 * member) + g5274)] = *(char *)&l6;
	f7f76(member, 10, 0, 0, 0);
	return;
Lb2c7:
	get_message(1572, 20948);
Lb2d5:
	replace_char_with_string(20948, ((432 * member) + 17384), 94);
	f5d0c(20948, 1);
	return;
}
