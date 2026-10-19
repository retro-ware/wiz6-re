extern char *maze_data;
f467b(p4)
{
	int l2;
	int l4;
	int l6;
	l2 = (random(100) % 4);
	l4 = random(100);
	l6 = (l4 >= 74 ? (l4 < 92 ? 1 : 2) : 0);
	return (unsigned char)*(maze_data + (((p4 * 12) + (l2 * 3)) + l6));
}
