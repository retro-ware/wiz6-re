extern char *g4fa8;
extern int g4ee0[];
extern int party_facing;
fce81(p4)
{
	g4ee0[party_facing] = 0;
	fca32(((g4fa8 + (p4 << 1)) + 576), (party_facing << 1));
	play_sound(4);
}
