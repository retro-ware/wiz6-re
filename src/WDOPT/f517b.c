extern int g502a;
extern int g502c;
extern int party_facing;
/* Try to open a lock with spell power; sets the success/failure/jammed message. */
try_open_lock(power)
{
	int l2;
	int lock_level;
	char x4[2];
	int roll;
	int jammed;
	int result;
	int ev;
	register int rsi;
	if ((ev = find_lock_event()) != -1) goto L5195;
	return -1;
L5195:
	;
#asm
l5195:
	db 08bh,046h,0f2h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0fah
#endasm
	rsi = ev;
#asm
	db 08ah,080h,030h,006h,02ah,0e4h,089h,046h,0feh
#endasm
	lock_level = extract_bits(l2, 0, 5);
	jammed = 0;
#asm
	db 08bh,046h,0f2h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (extract_bits(l2, (party_facing << 1), 2) != 2) goto L5201;
	if (lock_level) goto L5201;
	jammed = 1;
L5201:
	result = 0;
	if ((roll = ((((random((power << 1)) + random((power << 1))) + random((power << 1))) + 3) / 2)) >= lock_level) goto L5246;
	result = 1;
L5246:
	if (!jammed) goto L5251;
	result = 2;
L5251:
	if (result) goto L525e;
	clear_maze_event(ev);
L525e:
	g502a = (result + 2113);
	g502c = result;
	return 0;
}
