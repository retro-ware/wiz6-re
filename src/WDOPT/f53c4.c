extern int maze_data;
/* Return the wall of map cell x, y, level in direction dir. */
get_wall_in_direction(dir, level, x, y, p12, p14)
{
	switch (dir) {
case 0:
	get_bitfield((maze_data + 96), (((level << 6) + (y << 3)) + x), 2);
	return;
case 1:
	get_bitfield((maze_data + 288), (((level << 6) + (y << 3)) + x), 2);
	return;
case 2:
	f81f9(p12, p14, x, y, level);
	return;
case 3:
	f825e(p12, p14, x, y, level);
	return;
	}
	return;
}
