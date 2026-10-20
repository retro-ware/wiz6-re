#asm
	extrn access_scenario_record_:near
#endasm
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
	char x56[20];
	char *slot;
	int l80;
#asm
	db 0b8h,000h,000h,050h,0ffh,076h,004h,08dh,046h,0b4h,050h,0b8h,001h,000h,050h
	call access_scenario_record_
	db 083h,0c4h,008h,0a0h,01ch,056h,02ah,0e4h,0d1h,0e0h,0d1h,0e0h,0d1h,0e0h,005h,0b0h
	db 054h,089h,046h,0b2h
#endasm
	char_item_count++;
	slot[6] = (char)(((unsigned char)l54 * (unsigned char)l53) + l56);
	*(int *)slot = item_id;
	slot[4] = l16;
	slot[5] = l15;
	*(int *)(slot + 2) = l46;
	slot[7] = 0;
	if (((unsigned char)l17 & 8)) {
	slot[7] |= 4;
	}
	if (((unsigned char)l17 & 4)) {
	slot[7] |= 8;
	}
	if (((unsigned char)l17 & 16)) {
	slot[7] |= 16;
	}
	if (((unsigned char)l17 & 32)) {
	slot[7] |= 32;
	}
	if (((unsigned char)l17 & 2)) {
	slot[7] |= 64;
	}
	char_load = 0;
	l2 = 0;
	goto L8151;
L8125:
	if ((l80 = (unsigned char)g54b6[(l2 << 3)]) < 1) {
	l80 = 1;
	}
	char_load += (*(int *)((char *)g54b2 + (l2 << 3)) * l80);
	l2++;
L8151:
	if ((unsigned char)char_item_count > l2) goto L8125;
}
