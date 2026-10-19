extern char g450a[];
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
	switch (p6) {
case 53:
	g4ed0 += (p8 * 50);
	g4ed2 = f812e(((p8 * 5) + 70), g4ed2, 0);
	break;
case 68:
	g4ed4 += (p8 * 35);
	g4ed6 = f812e((((p8 - 1) / 2) + 1), g4ed6, 0);
	break;
case 41:
	g4ecc += (p8 * 50);
	g4ece = f812e((((p8 - 1) / 2) + 1), g4ece, 0);
	break;
case 30:
	g4edc += (p8 * 5);
	break;
case 38:
	g4ec8 += (100 * p8);
	break;
case 70:
	g4ed8 += (p8 * 50);
	g4eda = f812e((p8 * 5), g4eda, 0);
	break;
case 10:
	l2 = f66cf(f80ff((p8 << 1), 8, p8));
	*(int *)((char *)pc_stamina + (432 * p10)) += l2;
	if (*(int *)((char *)pc_stamina + (432 * p10)) <= *(int *)((char *)pc_stamina_max + (432 * p10))) goto L82cd;
	*(int *)((char *)pc_stamina + (432 * p10)) = *(int *)((char *)pc_stamina_max + (432 * p10));
L82cd:
	f5078(p10, g527a);
	break;
case 15:
	if ((l2 = ((unsigned char)g450d[(432 * p10)] - (p8 * 25))) >= 0) goto L830d;
	l2 = 0;
L830d:
	g450d[(432 * p10)] = *(char *)&l2;
	f5078(p10, g527a);
	break;
case 26:
	if ((l2 = ((unsigned char)g458c[(432 * p10)] - p8)) > 0) goto L8347;
	l2 = 0;
	g450f[(432 * p10)] = 0;
L8347:
	g458c[(432 * p10)] = *(char *)&l2;
	if ((l2 = ((unsigned char)g450f[(432 * p10)] - (p8 * 5))) > 0) goto L8377;
	l2 = 0;
	g458c[(432 * p10)] = 0;
L8377:
	g450f[(432 * p10)] = *(char *)&l2;
	f5078(p10, g527a);
	break;
case 46:
	if (pc_condition[(432 * p10)] != 2) goto L83f3;
	if ((p8 * 3) <= (21 - (unsigned char)g4517[(432 * p10)])) goto L83f3;
	g4517[(432 * p10)]--;
	if (random(21) <= (unsigned char)g4517[(432 * p10)]) goto L83ee;
	pc_condition[(432 * p10)] = 3;
	*(int *)((char *)pc_hp + (432 * p10)) = 0;
	*(int *)((char *)pc_stamina + (432 * p10)) = 0;
	goto L83f3;
L83ee:
	pc_condition[(432 * p10)] = 0;
L83f3:
	f5078(p10, g527a);
	break;
case 57:
	if ((l2 = ((unsigned char)g4511[(432 * p10)] - (p8 * 25))) >= 0) goto L8433;
	l2 = 0;
L8433:
	g4511[(432 * p10)] = *(char *)&l2;
	f5078(p10, g527a);
	break;
case 51:
	l4 = 1;
L844f:
	if (((((l4 != 1) && (l4 != 2)) && (l4 != 4)) && (l4 != 8)) && (l4 != 9)) goto L849b;
	if ((l2 = ((unsigned char)g450a[((432 * p10) + l4)] - (p8 << 1))) >= 0) goto L8494;
	l2 = 0;
L8494:
	g450a[((432 * p10) + l4)] = *(char *)&l2;
L849b:
	l4++;
	if (l4 <= 9) goto L844f;
	f5078(p10, g527a);
	break;
case 64:
	l2 = f66cf(f80ff(p8, 7, p8));
	*(int *)((char *)pc_hp + (432 * p10)) += l2;
	if (*(int *)((char *)pc_hp + (432 * p10)) <= *(int *)((char *)pc_hp_max + (432 * p10))) goto L8500;
	*(int *)((char *)pc_hp + (432 * p10)) = *(int *)((char *)pc_hp_max + (432 * p10));
L8500:
	f5078(p10, g527a);
	break;
case 77:
	if (pc_condition[(432 * p10)] != 3) goto L855c;
	if ((p8 * 3) <= (18 - (unsigned char)g4517[(432 * p10)])) goto L855c;
	g4517[(432 * p10)]--;
	pc_condition[(432 * p10)] = 0;
	*(int *)((char *)pc_hp + (432 * p10)) = 1;
	*(int *)((char *)pc_stamina + (432 * p10)) = (*(int *)((char *)pc_stamina_max + (432 * p10)) / 10);
	(*(int *)((char *)g440e + (432 * p10)))++;
L855c:
	f5078(p10, g527a);
	break;
case 80:
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
	break;
case 81:
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
	break;
case 50:
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
	break;
case 56:
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
	break;
	}
}
