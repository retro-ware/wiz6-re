extern char *maze_data;
f74ef(p4, p6, p8)
{
	if (((((unsigned char)(maze_data + p4)[480] > p6) || (((unsigned char)(maze_data + p4)[480] + 7) < p6)) || ((unsigned char)(maze_data + p4)[492] > p8)) || (((unsigned char)(maze_data + p4)[492] + 7) < p8)) goto L7527;
	return p4;
L7527:
	return -1;
}
