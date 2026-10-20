extern char g4430[];
extern char g4548[];
extern char g454a[];
extern char pc_equipped[];
extern char pc_item_count[];
extern char pc_swag_count[];
extern int pc_item_id[];
struct s8 { int w[4]; };
f6835(p4, p6)
{
	int l2;
	int l4;
	if (p6 >= 10) goto L6978;
	l4 = 0;
L684b:
	if ((unsigned char)pc_equipped[((432 * p4) + l4)] != p6) goto L68c5;
	switch (l4) {
case 0:
case 1:
	f66fe(p4, l4);
	goto L68b5;
case 2:
	g454a[(432 * p4)] = 0;
	goto L68b5;
case 3:
case 4:
case 5:
case 6:
case 7:
	g4548[((432 * p4) + l4)] = g4548[(432 * p4)];
	goto L68b5;
	}
L68b5:
	pc_equipped[((432 * p4) + l4)] = -1;
L68c5:
	l4++;
	if (l4 < 8) goto L684b;
	*(int *)((char *)pc_item_id + ((432 * p4) + (p6 << 3))) = 0;
	pc_item_count[(432 * p4)]--;
	for (l2 = p6; (unsigned char)pc_item_count[(432 * p4)] > l2; l2++) {
	*(struct s8 *)((char *)pc_item_id + ((432 * p4) + (l2 << 3))) = *(struct s8 *)((char *)g4430 + ((432 * p4) + (l2 << 3)));
	l4 = 0;
L6935:
	if ((unsigned char)pc_equipped[((432 * p4) + l4)] == (l2 + 1)) {
	pc_equipped[((432 * p4) + l4)] = *(char *)&l2;
	}
	l4++;
	if (l4 < 8) goto L6935;
	}
	goto L69d5;
L6978:
	pc_swag_count[(432 * p4)]--;
	for (l2 = p6; ((unsigned char)pc_swag_count[(432 * p4)] + 10) > l2; l2++) {
	*(struct s8 *)((char *)pc_item_id + ((432 * p4) + (l2 << 3))) = *(struct s8 *)((char *)g4430 + ((432 * p4) + (l2 << 3)));
	}
L69d5:
	;
}
