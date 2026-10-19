extern char g00cc[];
extern char pc_item_count[];
extern char pc_item_flags[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern char pc_swag_count[];
extern int g43ca;
extern int pc_item_id[];
/* Give items from member p8 to another member, splitting stacks by quantity. */
do_trade_items(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char l14[4];
	int l16;
	int l18;
	int l20;
	register int rsi;
	register int rdi;
	if ((l4 = choose_member(p4, p6, 501, -1)) == -1) goto L96cb;
	if (l4 != p8) goto L96d1;
L96cb:
	return;
L96d1:
	;
#asm
l96d1:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,083h,0bfh,0feh,043h,000h,07ch,009h,075h
	db 00ah,083h,0bfh,0fch,043h,000h,077h,003h
#endasm
L96e9:
	goto L978a;
L96ec:
	input_number(p6, 404, 8);
#asm
	db 089h,056h,0f4h,089h,046h,0f2h,083h,0fah,000h,07ch,007h,075h,007h,03dh,000h,000h
	db 073h,002h
#endasm
L970f:
	goto L9769;
L9711:
	;
#asm
l9711:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08bh,08fh,0fch,043h,08bh,09fh,0feh,043h
	db 08bh,046h,0f2h,08bh,056h,0f4h,03bh,0dah,07ch,006h,075h,006h,03bh,0c8h,073h,002h
#endasm
L9731:
	goto L9769;
L9733:
	;
#asm
l9733:
	db 08bh,046h,0f2h,08bh,056h,0f4h,050h,052h,0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h
	db 05ah,058h,029h,087h,0fch,043h,019h,097h,0feh,043h,08bh,046h,0f2h,08bh,056h,0f4h
	db 050h,052h,0b8h,0b0h,001h,0f7h,06eh,0fch,08bh,0d8h,05ah,058h,001h,087h,0fch,043h
	db 011h,097h,0feh,043h,0ebh,012h
#endasm
L9769:
	*(int *)(l14 + (0 + 2)) = -1;
	*(int *)(l14 + 0) = -1;
	play_sound(0);
L977b:
	if (*(long *)(l14 + 0) != -1L) goto L978a;
	goto L96ec;
L978a:
	draw_sheet(p4, p6, p8);
L9799:
	if (((unsigned char)pc_item_count[(432 * l4)] + (unsigned char)pc_swag_count[(432 * l4)]) >= 22) goto L9b3c;
	if ((unsigned)pc_item_count[(432 * p8)] <= 0) goto L9b3c;
	g43ca = choose_item(p4, p6, 403, p8, 0);
	if (g43ca == -1) goto L96cb;
	if ((!((unsigned char)pc_item_flags[((432 * p8) + (g43ca << 3))] & 1)) && (!((unsigned char)pc_item_flags[((432 * p8) + (g43ca << 3))] & 2))) goto L9828;
	l18 = 0;
	l16 = 0;
	play_sound(0);
	goto L98e2;
L9828:
	l18 = 1;
	l16 = 1;
	l8 = (unsigned char)pc_item_qty[((432 * p8) + (g43ca << 3))];
	if (g00cc[(unsigned char)pc_item_type[((432 * p8) + (g43ca << 3))]] != 1) goto L98e2;
L9861:
	l8 = input_number(p6, 405, 3);
	if ((unsigned char)pc_item_qty[((432 * p8) + (g43ca << 3))] >= l8) goto L98a5;
	l8 = -1;
	play_sound(0);
L98a5:
	if ((long)l8 == -1L) goto L9861;
	if ((unsigned char)pc_item_qty[((432 * p8) + (g43ca << 3))] <= l8) goto L98d7;
	l18 = 0;
L98d7:
	if (l8) goto L98e2;
	l16 = 0;
L98e2:
	if (!l16) goto L9b39;
	l20 = 1;
	l6 = (unsigned char)pc_item_count[(432 * l4)];
	l2 = (l6 - 1);
	goto L9987;
L9908:
	if (((*(int *)((char *)pc_item_id + ((432 * l4) + (l2 << 3))) != *(int *)((char *)pc_item_id + ((432 * p8) + (g43ca << 3)))) || (g00cc[(unsigned char)pc_item_type[((432 * l4) + (l2 << 3))]] != 1)) || (((unsigned char)pc_item_qty[((432 * l4) + (l2 << 3))] + l8) > 250)) goto L9984;
	l6 = l2;
	l20 = 0;
L9984:
	l2--;
L9987:
	if (l2 >= 0) goto L9908;
	if (l6 < 10) goto L9a50;
	l20 = 2;
	l6 = ((unsigned char)pc_swag_count[(432 * l4)] + 10);
	l2 = ((unsigned char)pc_swag_count[(432 * l4)] - 1);
	goto L9a47;
L99bf:
	l10 = (l2 + 10);
	if (((*(int *)((char *)pc_item_id + ((432 * l4) + (l10 << 3))) != *(int *)((char *)pc_item_id + ((432 * p8) + (g43ca << 3)))) || (g00cc[(unsigned char)pc_item_type[((432 * l4) + (l10 << 3))]] != 1)) || (((unsigned char)pc_item_qty[((432 * l4) + (l10 << 3))] + l8) > 250)) goto L9a44;
	l6 = l10;
	l20 = 0;
L9a44:
	l2--;
L9a47:
	if (l2 >= 0) goto L99bf;
L9a50:
	if (l20 <= 0) goto L9ad4;
	rsi = (((432 * p8) + (g43ca << 3)) + 17448);
	rdi = (((432 * l4) + (l6 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,08ah,046h,0f8h,050h,0b8h,0b0h,001h
	db 0f7h,06eh,0fch,08bh,0c8h,08bh,056h,0fah,0d1h,0e2h,0d1h,0e2h,0d1h,0e2h,003h,0c2h
	db 08bh,0d8h,058h,088h,087h,02eh,044h,08ah,087h,02fh,044h,02ah,0e4h,025h,0feh,0ffh
	db 088h,087h,02fh,044h
#endasm
	if (l20 != 1) goto L9acc;
#asm
	db 08bh,0d9h,0feh,087h,094h,045h
#endasm
	goto L9ad2;
L9acc:
	;
#asm
l9acc:
	db 08bh,0d9h,0feh,087h,095h,045h
#endasm
L9ad2:
	goto L9af4;
L9ad4:
	pc_item_qty[((432 * l4) + (l6 << 3))] = (char)((unsigned char)pc_item_qty[((432 * l4) + (l6 << 3))] + l8);
L9af4:
	if (!l18) goto L9b09;
	remove_item(p8, g43ca);
	goto L9b2a;
L9b09:
	pc_item_qty[((432 * p8) + (g43ca << 3))] = (char)((unsigned char)pc_item_qty[((432 * p8) + (g43ca << 3))] - l8);
L9b2a:
	draw_sheet(p4, p6, p8);
L9b39:
	goto L9799;
L9b3c:
	return;
}
