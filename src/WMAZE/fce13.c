extern char *g4fa8;
extern int party_facing;
fce13(p4)
{
	int l2;
	char *l4;
	l4 = ((g4fa8 + (p4 << 1)) + 576);
	l2 = (party_facing << 1);
	*(l4 + (l2 / 8)) &= ~(1 << (l2 % 8));
	*(l4 + ((l2 + 1) / 8)) |= (1 << ((l2 + 1) % 8));
}
