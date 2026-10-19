extern int cell_event_index;
extern int g5034;
extern int game_state_arg;
extern int party_facing;
try_flag_event_at(event)
{
	int l2;
	int l4;
	int l6;
	register int rsi;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (extract_bits(l2, 14, 1) != 1) goto Lcc5e;
	if (extract_bits(l2, 12, 2) == party_facing) goto Lcc5e;
	return 0;
Lcc5e:
	l4 = extract_bits(l2, 0, 8);
	l6 = extract_bits(l2, 10, 1);
	set_bit(((game_state_arg * 10) + 20204), l4, l6);
	cell_event_index = event;
	l4 = extract_bits(l2, 8, 2);
	set_event_flags(l4);
	cell_event_index = (event + 1);
	g5034 = 1;
	return 1;
}
