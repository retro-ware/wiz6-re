extern char *maze_data;
f46e8(p4)
{
	int l2;
	l2 = (random(100) < (unsigned char)(maze_data + p4)[1334] ? 0 : 1);
	get_bitfield((maze_data + 1322), ((p4 << 1) + l2), 4);
}
