#asm
	extrn strcpy_:near
#endasm
extern char g4548[];
extern char g454a[];
extern char pc_equipped[];
extern char pc_item_count[];
extern int g5680[];
extern int item_row_color[];
extern int pc_item_id[];
/* Remove inventory item p6 from member p4, unequipping it and shifting the rest down. */
remove_item(member, item)
{
	int l2;
	int slot;
	register int rsi;
	register int rdi;
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
	pc_equipped[((432 * member) + slot)] = 255;
L5de2:
	slot++;
	if (slot < 8) goto L5d68;
	*(int *)((char *)pc_item_id + ((432 * member) + (item << 3))) = 0;
	pc_item_count[(432 * member)]--;
	l2 = item;
	goto L5eab;
L5e1e:
	rsi = (((432 * member) + (l2 << 3)) + 17456);
	rdi = (((432 * member) + (l2 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,08bh,046h,0feh,0b9h,004h,000h,0d3h
	db 0e0h,005h,0eeh,055h,050h,08bh,046h,0feh,0d3h,0e0h,005h,0deh,055h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	item_row_color[l2] = g5680[l2];
	slot = 0;
L5e7d:
	if ((unsigned char)pc_equipped[((432 * member) + slot)] != (l2 + 1)) goto L5e9d;
	pc_equipped[((432 * member) + slot)] = *(char *)&l2;
L5e9d:
	slot++;
	if (slot < 8) goto L5e7d;
	l2++;
L5eab:
	if ((unsigned char)pc_item_count[(432 * member)] > l2) goto L5e1e;
}
