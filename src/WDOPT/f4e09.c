extern char g4430[];
extern char g4548[];
extern char g454a[];
extern char pc_equipped[];
extern char pc_item_count[];
extern char pc_swag_count[];
extern int pc_item_id[];
struct s8 { int w[4]; };
/* Remove item slot from member's inventory, unequipping it and shifting the rest. */
remove_item(member, slot)
{
	int i;
	int eq;
	if (slot >= 10) goto L4f4c;
	eq = 0;
L4e1f:
	if ((unsigned char)pc_equipped[((432 * member) + eq)] != slot) goto L4e99;
	switch (eq) {
case 0:
case 1:
	clear_weapon_slot(member, eq);
	goto L4e89;
case 2:
	g454a[(432 * member)] = 0;
	goto L4e89;
case 3:
case 4:
case 5:
case 6:
case 7:
	g4548[((432 * member) + eq)] = g4548[(432 * member)];
	goto L4e89;
	}
L4e89:
	pc_equipped[((432 * member) + eq)] = -1;
L4e99:
	eq++;
	if (eq < 8) goto L4e1f;
	*(int *)((char *)pc_item_id + ((432 * member) + (slot << 3))) = 0;
	pc_item_count[(432 * member)]--;
	i = slot;
	goto L4f37;
L4ed4:
	*(struct s8 *)((char *)pc_item_id + ((432 * member) + (i << 3))) = *(struct s8 *)((char *)g4430 + ((432 * member) + (i << 3)));
	eq = 0;
L4f09:
	if ((unsigned char)pc_equipped[((432 * member) + eq)] != (i + 1)) goto L4f29;
	pc_equipped[((432 * member) + eq)] = *(char *)&i;
L4f29:
	eq++;
	if (eq < 8) goto L4f09;
	i++;
L4f37:
	if ((unsigned char)pc_item_count[(432 * member)] > i) goto L4ed4;
	goto L4fa9;
L4f4c:
	pc_swag_count[(432 * member)]--;
	i = slot;
	goto L4f93;
L4f60:
	*(struct s8 *)((char *)pc_item_id + ((432 * member) + (i << 3))) = *(struct s8 *)((char *)g4430 + ((432 * member) + (i << 3)));
	i++;
L4f93:
	if (((unsigned char)pc_swag_count[(432 * member)] + 10) > i) goto L4f60;
L4fa9:
	;
}
