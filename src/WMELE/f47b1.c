#asm
	extrn setmem_:near
#endasm
extern char g019d[];
extern int combat_over;
extern int monster_group_count;
extern int monster_groups[];
extern int view_anim_state;
/* Clear the seven combat group buffers and reset the encounter state. */
clear_combat_groups()
{
	char x0[416];
	register int rsi;
	get_message(3900, 17270);
#asm
	db 0b8h,000h,000h,050h,0b8h,014h,000h,050h,0b8h,062h,043h,050h
	call setmem_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L47dc:
	setmem(monster_groups[rsi], 416, 0);
	rsi++;
	if (rsi < 7) goto L47dc;
	for (rsi = 0; rsi < 7; rsi++) {
	g019d[monster_groups[rsi]] = 0;
	}
	monster_group_count = 0;
	combat_over = 0;
	view_anim_state = -2;
}
