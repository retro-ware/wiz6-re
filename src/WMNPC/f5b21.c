extern int g0002;
extern int g5262;
extern int g5264;
extern int g5268;
extern int loot_count;
extern int message_delay;
extern int view_pos_group;
f5b21(p4)
char *p4;
{
	int l2;
	int l4;
L5b27:
	l4 = char_index(20484, (unsigned char)*p4);
	if (l4 < 0) goto L5be0;
	switch (l4) {
case 0:
	p4++;
	loot_count++;
	goto L5bdd;
case 1:
	p4++;
	f5a1e(message_delay);
	goto L5bdd;
case 2:
	p4++;
	f5508((unsigned char)*p4, 4);
	view_pos_group = 4;
	f4572(4, 0);
	f5690();
	p4++;
	goto L5bdd;
case 3:
	p4++;
	view_pos_group = 0;
	f5690();
	goto L5bdd;
case 4:
	p4++;
	clear_window(g5264, 1);
	loot_count = 0;
	goto L5bdd;
case 5:
	p4++;
	f5af3(0);
	goto L5bdd;
	}
L5bdd:
	goto L5b27;
L5be0:
	if (loot_count <= g5262) goto L5bf1;
	f5af3(0);
L5bf1:
	l2 = (20 - ((strlen(p4) + 1) / 2));
	switch ((unsigned char)*p4) {
case 36:
	p4++;
	l2 = 0;
	goto L5c31;
case 94:
	p4++;
	l2 = g5268;
	goto L5c31;
	}
L5c31:
	set_cursor(g5264, l2, loot_count);
	g5268 = l2;
	loot_count++;
	print_string(g5264, p4, g0002);
}
