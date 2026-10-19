extern char g4430[];
extern char g4548[];
extern char g454a[];
extern char g458d[];
extern char pc_equipped[];
extern char pc_item_count[];
extern char pc_item_qty[];
extern int g435c;
extern int pc_item_id[];
struct s8 { int w[4]; };
struct s14 { int w[7]; };
use_item_charge_x(p4)
{
	int l2;
	int l4;
	char x4[3];
	char l8;
	char x8[8];
	int l18;
	if ((unsigned)pc_item_qty[((432 * g435c) + (p4 << 3))] <= 0) goto L722a;
	pc_item_qty[((432 * g435c) + (p4 << 3))]--;
#asm
	db 074h,003h
#endasm
	goto L722a;
L70c5:
	l4 = 0;
L70ca:
	if ((unsigned char)pc_equipped[((432 * g435c) + l4)] != p4) goto L7143;
	switch (l4) {
case 0:
case 1:
	clear_hand_attack_x(l4);
	goto L7132;
case 2:
	g454a[(432 * g435c)] = 0;
	goto L7132;
case 3:
case 4:
case 5:
case 6:
case 7:
	g4548[((432 * g435c) + l4)] = g4548[(432 * g435c)];
	goto L7132;
	}
L7132:
	pc_equipped[((432 * g435c) + l4)] = 255;
L7143:
	l4++;
	if (l4 < 8) goto L70ca;
	*(int *)((char *)pc_item_id + ((432 * g435c) + (p4 << 3))) = 0;
	pc_item_count[(432 * g435c)]--;
	l2 = p4;
	goto L71e6;
L7180:
	*(struct s8 *)((char *)pc_item_id + ((432 * g435c) + (l2 << 3))) = *(struct s8 *)((char *)g4430 + ((432 * g435c) + (l2 << 3)));
	l4 = 0;
L71b7:
	if ((unsigned char)pc_equipped[((432 * g435c) + l4)] != (l2 + 1)) goto L71d8;
	pc_equipped[((432 * g435c) + l4)] = *(char *)&l2;
L71d8:
	l4++;
	if (l4 < 8) goto L71b7;
	l2++;
L71e6:
	if ((unsigned char)pc_item_count[(432 * g435c)] > l2) goto L7180;
	calc_carried_weight_x(g435c);
	*(struct s14 *)(char *)(&l18) = *(struct s14 *)(char *)(get_load_category_x(g435c));
	g458d[(432 * g435c)] = l8;
L722a:
	;
}
