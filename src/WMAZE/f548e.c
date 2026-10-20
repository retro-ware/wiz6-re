extern int maze_data;
get_wall_in_direction(p4, p6, p8, p10, p12, p14)
{
	switch (p4) {
case 0:
	get_bitfield((maze_data + 96), (((p6 << 6) + (p10 << 3)) + p8), 2);
	return;
case 1:
	get_bitfield((maze_data + 288), (((p6 << 6) + (p10 << 3)) + p8), 2);
	return;
case 2:
	f7c41(p12, p14, p8, p10, p6);
	return;
case 3:
	f7ca6(p12, p14, p8, p10, p6);
	return;
	}
	return;
}
