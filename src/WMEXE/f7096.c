extern char g4548[];
extern char g454a[];
extern char pc_equipped[];
extern char pc_item_count[];
extern char pc_item_qty[];
extern int g435c;
extern int pc_item_id[];
use_item_charge_x(p4)
{
	int l2;
	int l4;
	char x4[12];
	int l18;
	register int rsi;
	register int rdi;
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
	rsi = (((432 * g435c) + (l2 << 3)) + 17456);
	rdi = (((432 * g435c) + (l2 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,0c7h,046h,0fch,000h,000h
#endasm
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
	rsi = get_load_category_x(g435c);
	rdi = &l18;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h,08ah,046h,0f8h,050h,0b8h,0b0h,001h
	db 0f7h,02eh,05ch,043h,08bh,0d8h,058h,088h,087h,08dh,045h
#endasm
L722a:
	;
}
