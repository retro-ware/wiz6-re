extern char *g4fa8;
extern int g502a;
extern int g502c;
extern int party_facing;
/* Try to open a lock with spell power; sets the success/failure/jammed message. */
try_open_lock(power)
{
	int l2;
	int lock_level;
	int l6;
	int roll;
	int jammed;
	int result;
	int ev;
	if ((ev = find_lock_event()) != -1) goto L5195;
	return -1;
L5195:
	l6 = *(int *)((g4fa8 + (ev << 1)) + 288);
	l2 = (unsigned char)(g4fa8 + ev)[1584];
	lock_level = extract_bits(l2, 0, 5);
	jammed = 0;
	l2 = *(int *)((g4fa8 + (ev << 1)) + 576);
	if ((extract_bits(l2, (party_facing << 1), 2) != 2) || (lock_level)) goto L5201;
	jammed = 1;
L5201:
	result = 0;
	roll = ((((random((power << 1)) + random((power << 1))) + random((power << 1))) + 3) / 2);
	if (roll >= lock_level) goto L5246;
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
