extern char g4430[];
extern char g4548[];
extern char g454a[];
extern char pc_equipped[];
extern char pc_item_count[];
extern int g5680[];
extern int item_row_color[];
extern int pc_item_id[];
struct s8 { int w[4]; };
/* Remove inventory item p6 from member p4, unequipping it and shifting the rest down. */
remove_item(member, item)
{
	int l2;
	int slot;
	slot = 0;
L5d68:
	if ((unsigned char)pc_equipped[((432 * member) + slot)] != item) goto L5de2;
	switch (slot) {
case 0:
case 1:
	clear_hand_attack(member, slot);
	goto L5dd2;
case 2:
	g454a[(432 * member)] = 0;
	goto L5dd2;
case 3:
case 4:
case 5:
case 6:
case 7:
	g4548[((432 * member) + slot)] = g4548[(432 * member)];
	goto L5dd2;
	}
L5dd2:
	pc_equipped[((432 * member) + slot)] = -1;
L5de2:
	slot++;
	if (slot < 8) goto L5d68;
	*(int *)((char *)pc_item_id + ((432 * member) + (item << 3))) = 0;
	pc_item_count[(432 * member)]--;
	for (l2 = item; (unsigned char)pc_item_count[(432 * member)] > l2; l2++) {
	*(struct s8 *)((char *)pc_item_id + ((432 * member) + (l2 << 3))) = *(struct s8 *)((char *)g4430 + ((432 * member) + (l2 << 3)));
	strcpy(((l2 << 4) + 21982), ((l2 << 4) + 21998));
	item_row_color[l2] = g5680[l2];
	slot = 0;
L5e7d:
	if ((unsigned char)pc_equipped[((432 * member) + slot)] == (l2 + 1)) {
	pc_equipped[((432 * member) + slot)] = *(char *)&l2;
	}
	slot++;
	if (slot < 8) goto L5e7d;
	}
}
