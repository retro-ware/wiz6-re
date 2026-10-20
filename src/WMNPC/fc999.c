extern int g5264;
extern int msg_not_found;
fc999(p4)
{
	char x0[78];
	int l80;
Lc99f:
	get_message(p4, &l80);
	if (!msg_not_found) {
	fc7d9(&l80, 5);
	p4++;
	}
	if (!msg_not_found) goto Lc99f;
	f4f73(g5264);
}
