extern int maze_data;
/* Return the wall of map cell x, y, level in direction dir. */
get_wall_in_direction(dir, level, x, y, p12, p14)
{
#asm
	db 08bh,046h,004h,0e9h,084h,000h
#endasm
	get_bitfield((maze_data + 96), (((level << 6) + (y << 3)) + x), 2);
	return;
	get_bitfield((maze_data + 288), (((level << 6) + (y << 3)) + x), 2);
	return;
	f81f9(p12, p14, x, y, level);
	return;
	f825e(p12, p14, x, y, level);
	return;
L5451:
	;
#asm
l5451:
	db 03dh,000h,000h,075h,003h,0e9h,074h,0ffh
l5459:
	db 03dh,001h,000h,074h,09bh,03dh,002h,000h,074h,0c0h,03dh,003h,000h,074h,0d2h
#endasm
	return;
}
