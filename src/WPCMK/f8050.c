extern char char_item_count;
extern char g54b6[];
extern int char_load;
extern int g54b2[];
add_starting_item(item_id)
{
	int l2;
	char x2[12];
	char l15;
	char l16;
	char l17;
	char x17[27];
	int l46;
	char x46[6];
	char l53;
	char l54;
	int l56;
	char x56[18];
	int l76;
	char *slot;
	int l80;
	access_scenario_record(1, &l76, item_id, 0);
	slot = (((unsigned char)char_item_count << 3) + 21680);
	char_item_count++;
	slot[6] = (char)(((unsigned char)l54 * (unsigned char)l53) + l56);
	*(int *)slot = item_id;
	slot[4] = l16;
	slot[5] = l15;
	*(int *)(slot + 2) = l46;
	slot[7] = 0;
	if (!((unsigned char)l17 & 8)) goto L80d4;
	slot[7] |= 4;
L80d4:
	if (!((unsigned char)l17 & 4)) goto L80e5;
	slot[7] |= 8;
L80e5:
	if (!((unsigned char)l17 & 16)) goto L80f6;
	slot[7] |= 16;
L80f6:
	if (!((unsigned char)l17 & 32)) goto L8107;
	slot[7] |= 32;
L8107:
	if (!((unsigned char)l17 & 2)) goto L8118;
	slot[7] |= 64;
L8118:
	char_load = 0;
	l2 = 0;
	goto L8151;
L8125:
	if ((l80 = (unsigned char)g54b6[(l2 << 3)]) >= 1) goto L8143;
	l80 = 1;
L8143:
	char_load += (*(int *)((char *)g54b2 + (l2 << 3)) * l80);
	l2++;
L8151:
	if ((unsigned char)char_item_count > l2) goto L8125;
}
