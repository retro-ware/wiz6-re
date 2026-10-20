extern char g00cc[];
extern char pc_item_count[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern char pc_swag_count[];
extern int pc_carried[];
extern int pc_item_id[];
npc_give_item_to_member(p4, p6, p8)
{
	int l2;
	char x2[12];
	char l15;
	char l16;
	char l17;
	char x17[27];
	int l46;
	char x46[6];
	int l54;
	int l56;
	char x56[18];
	int l76;
	char *l78;
	int l80;
	int l82;
	int l84;
	access_scenario_record(1, &l76, p6, 0);
	if (p8 == -1) {
	p8 = f66cf(l56, l54);
	}
	l84 = 1;
	l80 = (unsigned char)pc_item_count[(432 * p4)];
	l2 = (l80 - 1);
	goto L6b1d;
L6acc:
	if (((*(int *)((char *)pc_item_id + ((432 * p4) + (l2 << 3))) != p6) || (g00cc[(unsigned char)pc_item_type[((432 * p4) + (l2 << 3))]] != 1)) || (((unsigned char)pc_item_qty[((432 * p4) + (l2 << 3))] + p8) > 250)) goto L6b1a;
	l80 = l2;
	l84 = 0;
L6b1a:
	l2--;
L6b1d:
	if (l2 >= 0) goto L6acc;
	if (l80 < 10) goto L6bbe;
	l84 = 2;
	l80 = ((unsigned char)pc_swag_count[(432 * p4)] + 10);
	l2 = ((unsigned char)pc_swag_count[(432 * p4)] - 1);
	goto L6bab;
L6b51:
	l82 = (l2 + 10);
	if (((*(int *)((char *)pc_item_id + ((432 * p4) + (l82 << 3))) != p6) || (g00cc[(unsigned char)pc_item_type[((432 * p4) + (l82 << 3))]] != 1)) || (((unsigned char)pc_item_qty[((432 * p4) + (l82 << 3))] + p8) > 250)) goto L6ba8;
	l80 = l82;
	l84 = 0;
L6ba8:
	l2--;
L6bab:
	if (l2 >= 0) goto L6b51;
	if (l80 < 22) goto L6bbe;
	return -1;
L6bbe:
	l78 = (char *)pc_item_id + ((432 * p4) + (l80 << 3));
	if (l84 <= 0) goto L6c01;
	l78[6] = 0;
	if (l84 != 1) goto L6bf5;
	pc_item_count[(432 * p4)]++;
	goto L6c01;
L6bf5:
	pc_swag_count[(432 * p4)]++;
L6c01:
	*(int *)l78 = p6;
	l78[4] = l16;
	l78[5] = l15;
	*(int *)(l78 + 2) = l46;
	l78[6] = (char)((unsigned char)l78[6] + p8);
#asm
	db 0c6h,047h,007h,000h
#endasm
	if (((unsigned char)l17 & 8)) {
	l78[7] |= 4;
	}
	if (((unsigned char)l17 & 4)) {
	l78[7] |= 8;
	}
	if (((unsigned char)l17 & 16)) {
	l78[7] |= 16;
	}
	if (((unsigned char)l17 & 32)) {
	l78[7] |= 32;
	}
	if (((unsigned char)l17 & 2)) {
	l78[7] |= 64;
	}
	*(int *)((char *)pc_carried + (432 * p4)) = 0;
	l2 = 0;
	goto L6cbd;
L6ca0:
	*(int *)((char *)pc_carried + (432 * p4)) += f6a0e(l2, p4);
	l2++;
L6cbd:
	if ((unsigned char)pc_item_count[(432 * p4)] > l2) goto L6ca0;
	l2 = 0;
	goto L6cf8;
L6cd7:
	*(int *)((char *)pc_carried + (432 * p4)) += f6a0e((l2 + 10), p4);
	l2++;
L6cf8:
	if ((unsigned char)pc_swag_count[(432 * p4)] > l2) goto L6cd7;
	return 0;
}
