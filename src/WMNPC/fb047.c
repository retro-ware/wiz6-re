extern char g4518[];
extern char g451a[];
extern char g452a[];
extern char g4550[];
extern char g51cf;
extern char pc_class[];
extern char pc_sex[];
extern int g5274;
extern int g52d0;
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
	if (pc_class[(432 * member)] == 3) {
	chance += ((unsigned char)g4518[(432 * member)] << 1);
	} else {
	if (((pc_class[(432 * member)] == 4) || (pc_class[(432 * member)] == 6)) || (pc_class[(432 * member)] == 13)) {
	chance += (unsigned char)g4518[(432 * member)];
	}
	}
	if ((chance = ((((unsigned char)g451a[(432 * member)] + ((g4550[((432 * member) + g5274)] + g52d0) / 4)) + chance) + -10)) < 0) {
	chance = 0;
	}
	if (chance > 95) {
	chance = 95;
	}
	roll = (random(100) + g5892);
	g5892 = ((random(10) + g5892) + 5);
	get_message(((unsigned char)pc_sex[(432 * member)] + 1570), 20948);
	replace_char_with_string(20948, ((432 * member) + 17384), 94);
	f5d0c(20948, 0);
	if (roll >= chance) goto Lb233;
	fa206();
	if ((g54b2 > 0) && (random(100) >= 20)) goto Lb1d1;
	l6 = (random(100) * (unsigned char)g51cf);
	if ((long)l6 > g51c0) {
	l6 = *(int *)&g51c0;
	}
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
	if (((chance << 1) >= roll) && (roll < 95)) goto Lb2c7;
	get_message(1576, 20948);
	replace_char_with_string(20948, ((432 * member) + 17384), 94);
	f5d0c(20948, 1);
	if ((l6 = (g4550[((432 * member) + g5274)] - (random(25) + 25))) < -100) {
	l6 = -100;
	}
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
