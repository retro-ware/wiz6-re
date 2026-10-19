#asm
	extrn swapmem_:near
#endasm
extern int member_pcfile_index[];
extern int member_portrait[];
/* Swap two party members (records, portraits) and redraw their cards. */
swap_members(p4, p6)
{
	char x0[476];
	int l478;
#asm
	db 0b8h,0b0h,001h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h,050h,0b8h,0b0h
	db 001h,0f7h,06eh,006h,005h,0e8h,043h,050h
	call swapmem_
	db 083h,0c4h,006h,0b8h,02ch,000h,050h,0b8h,02ch,000h,0f7h,06eh,004h,08bh,0c8h,0a1h
	db 0a8h,043h,003h,0c1h,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0c8h,0a1h,0a8h,043h
	db 003h,0c1h,050h
	call swapmem_
	db 083h,0c4h,006h
#endasm
	l478 = member_pcfile_index[p6];
	member_pcfile_index[p6] = member_pcfile_index[p4];
	member_pcfile_index[p4] = l478;
	l478 = member_portrait[p6];
	member_portrait[p6] = member_portrait[p4];
	member_portrait[p4] = l478;
	draw_member_card_x(p4, 0);
	draw_member_card_x(p6, 0);
	combat_delay(3);
}
