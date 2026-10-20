#asm
	extrn test_bit_:near
#endasm
extern int maze_data;
/* Recursively mark reachable maze cells in the cell bitset. */
flood_mark_cells(p4, p6, p8, p10)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	p6 = ((p6 + 8) % 8);
	p8 = ((p8 + 8) % 8);
#asm
	db 08bh,046h,004h,0b9h,006h,000h,0d3h,0e0h,0d1h,0e2h,0d1h,0e2h,0d1h,0e2h,08bh,0cah
	db 003h,0c1h,08bh,0f8h,003h,046h,006h,08bh,0f8h,057h,0b8h,008h,04eh,050h
	call test_bit_
	db 083h,0c4h,004h,03bh,046h,00ah,075h,006h
#endasm
	return;
L4787:
	set_bit(19976, rdi, p10);
	if (p10) goto L4844;
	rsi = 0;
L47a1:
	l2 = get_bitfield((maze_data + 1274), ((p4 * 5) + rsi), 3);
	l4 = get_bitfield((maze_data + 1298), ((p4 * 5) + rsi), 3);
	if ((l2 != p6) || (l4 != p8)) goto L483b;
	set_bitfield((maze_data + 1274), ((p4 * 5) + rsi), 3, 0);
	set_bitfield((maze_data + 1298), ((p4 * 5) + rsi), 3, 0);
L483b:
	rsi++;
	if (rsi < 5) goto L47a1;
L4844:
	if ((get_bitfield((maze_data + 96), rdi, 2)) || (p8 >= 7)) goto L4874;
	flood_mark_cells(p4, p6, (p8 + 1), p10);
L4874:
	if ((get_bitfield((maze_data + 288), rdi, 2)) || (p6 >= 7)) goto L48a4;
	flood_mark_cells(p4, (p6 + 1), p8, p10);
L48a4:
	if ((p8 <= 0) || (get_bitfield((maze_data + 96), ((((p4 << 6) + (p8 << 3)) + p6) + -8), 2))) goto L48ed;
	flood_mark_cells(p4, p6, (p8 - 1), p10);
L48ed:
	if ((p6 <= 0) || (get_bitfield((maze_data + 288), ((((p4 << 6) + (p8 << 3)) + p6) - 1), 2))) goto L4934;
	flood_mark_cells(p4, (p6 - 1), p8, p10);
L4934:
	return;
}
