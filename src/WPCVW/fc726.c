struct s8 { int w[4]; };
extern char pc_equipped[];
extern int g567c[];
extern int item_row_color[];
extern int pc_item_id[];
extern int pc_item_qty[];
extern int pc_item_type[];
extern int pc_item_weight[];
fc726(p4)
{
	struct s8 it;
	int l10;
	int l12;
	int l14;
	char x14[14];
	int l30;
	int l32;
	register int rsi;
	register int rdi;
	l10 = 0;
	l14 = 0;
Lc738:
	if (l10 >= 8) goto Lc8bc;
	rsi = (unsigned char)pc_equipped[((432 * p4) + l10)];
	if (rsi == 255) goto Lc8b6;
	it.w[0] = *(int *)((char *)pc_item_id + ((432 * p4) + (rsi << 3)));
	it.w[1] = *(int *)((char *)pc_item_weight + ((432 * p4) + (rsi << 3)));
	it.w[2] = *(int *)((char *)pc_item_type + ((432 * p4) + (rsi << 3)));
	it.w[3] = *(int *)((char *)pc_item_qty + ((432 * p4) + (rsi << 3)));
	strcpy(&l30, ((rsi << 4) + 21982));
	l32 = item_row_color[rsi];
	l12 = rsi;
	goto Lc83f;
Lc7b3:
	*(struct s8 *)((char *)pc_item_id + ((432 * p4) + (l12 << 3))) = *(struct s8 *)(((char *)pc_item_id - 8) + ((432 * p4) + (l12 << 3)));
	strcpy(((l12 << 4) + 21982), ((l12 << 4) + 21966));
	item_row_color[l12] = g567c[l12];
	rdi = l10;
	rdi++;
	goto Lc837;
Lc817:
	if ((unsigned char)pc_equipped[((432 * p4) + rdi)] == (l12 - 1)) {
	pc_equipped[((432 * p4) + rdi)] = *(char *)&l12;
	}
	rdi++;
Lc837:
	if (rdi < 8) goto Lc817;
	l12--;
Lc83f:
	if (l12 > l14) goto Lc7b3;
	((struct s8 *)((char *)pc_item_id + (432 * p4)))[l14] = it;
	pc_equipped[((432 * p4) + l10)] = *(char *)&l14;
	strcpy(((l14 << 4) + 21982), &l30);
	item_row_color[l14] = l32;
	l14++;
Lc8b6:
	l10++;
	goto Lc738;
Lc8bc:
	;
}
