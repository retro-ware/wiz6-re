extern int cell_event_index;
extern int game_state;
extern int party_facing;
check_locked_door_at(event)
{
	int l2;
	register int rsi;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (extract_bits(l2, 14, 1) != 1) goto Ldae4;
	if (extract_bits(l2, 12, 2) == party_facing) goto Ldae4;
	return 0;
Ldae4:
	if (extract_bits(l2, 8, 1)) goto Ldafe;
	return 0;
Ldafe:
	cell_event_index = event;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,08ah,080h,030h,006h,02ah,0e4h,0a3h,0c4h,043h
#endasm
	game_state = 21;
	return 1;
}
