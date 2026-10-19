extern int maze_data;
get_wall_in_direction(p4, p6, p8, p10, p12, p14)
{
#asm
	db 08bh,046h,004h,0e9h,084h,000h
#endasm
	get_bitfield((maze_data + 96), (((p6 << 6) + (p10 << 3)) + p8), 2);
	return;
	get_bitfield((maze_data + 288), (((p6 << 6) + (p10 << 3)) + p8), 2);
	return;
	f7c41(p12, p14, p8, p10, p6);
	return;
	f7ca6(p12, p14, p8, p10, p6);
	return;
L551b:
	;
#asm
l551b:
	db 03dh,000h,000h,075h,003h,0e9h,074h,0ffh
l5523:
	db 03dh,001h,000h,074h,09bh,03dh,002h,000h,074h,0c0h,03dh,003h,000h,074h,0d2h
#endasm
	return;
}
