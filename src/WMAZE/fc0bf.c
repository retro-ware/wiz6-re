#asm
	extrn extract_bits_:near
	extrn set_event_flags_:near
	extrn swap_level_flags_:near
#endasm
extern char pc_item_count[];
extern char pc_item_flags[];
extern int party_count;
extern int pc_item_id[];
check_party_item_event()
{
	int l2;
	int l4;
	int l6;
	int l8;
	register int rsi;
	l8 = 1;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,000h,089h,046h,0fah
#endasm
	l2 = 0;
	goto Lc12e;
Lc0e2:
	l4 = 0;
	goto Lc118;
Lc0e9:
	if ((*(int *)((char *)pc_item_id + ((432 * l2) + (l4 << 3))) != l6) || (!((unsigned char)pc_item_flags[((432 * l2) + (l4 << 3))] & 1))) goto Lc115;
	l8 = 0;
Lc115:
	l4++;
Lc118:
	if ((unsigned char)pc_item_count[(432 * l2)] > l4) goto Lc0e9;
	l2++;
Lc12e:
	if (l2 < party_count) goto Lc0e2;
#asm
	db 0ffh,076h,0f8h,08bh,036h,0e8h,04eh,08bh,01eh,0a8h,04fh,08ah,080h,030h,006h,02ah
	db 0e4h,050h,0d1h,0e6h,0ffh,0b0h,020h,001h
	call swap_level_flags_
	db 083h,0c4h,006h
#endasm
	if (l8) goto Lc17d;
#asm
	db 0b8h,002h,000h,050h,0b8h,000h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,050h
	call set_event_flags_
	db 059h
#endasm
Lc17d:
	;
}
