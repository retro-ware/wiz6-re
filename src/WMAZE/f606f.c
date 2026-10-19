extern int cur_member;
extern int party_count;
reorder_party()
{
	int l2;
	char x2[2616];
	int l2620;
	int l2622;
	register int rsi;
	register int rdi;
	l2622 = party_count;
	l2620 = 0;
	goto L6140;
L6088:
	cur_member = choose_party_member_m(2037, 0);
	rsi = ((cur_member * 432) + 17384);
#asm
	db 08bh,086h,0c4h,0f5h,0f7h,0e9h,08bh,0f8h,08dh,08eh,0deh,0f5h,003h,0c1h,08bh,0f8h
	db 08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0a1h,0cch,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,087h,0dch,043h,08bh,08eh,0c4h,0f5h,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,087h
	db 0d2h,0f5h,0a1h,0cch,043h,0d1h,0e0h,08bh,0d8h,08bh,087h,0d0h,043h,08bh,0d9h,003h
	db 0ddh,089h,087h,0c6h,0f5h
#endasm
	party_count--;
	l2 = cur_member;
	goto L6133;
L60f6:
	rsi = ((432 * l2) + 17816);
	rdi = ((432 * l2) + 17384);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h
	db 08bh,087h,0deh,043h,089h,087h,0dch,043h,08bh,087h,0d2h,043h,089h,087h,0d0h,043h
#endasm
	l2++;
L6133:
	if (l2 < party_count) goto L60f6;
	l2620++;
L6140:
	if ((l2622 - 1) > l2620) goto L6088;
	rsi = 17384;
#asm
	db 0b8h,0b0h,001h,0f7h,0aeh,0c2h,0f5h,08bh,0f8h,08dh,08eh,02eh,0f4h,003h,0c1h,08bh
	db 0f8h,08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0a1h,0dch,043h,08bh,08eh,0c2h
	db 0f5h,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,087h,0d0h,0f5h,0a1h,0d0h,043h,08bh,0d9h
	db 003h,0ddh,089h,087h,0c4h,0f5h
#endasm
	party_count = l2622;
	l2 = 0;
	goto L61e9;
L6195:
	;
#asm
l6195:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0f0h,08dh,08eh,0deh,0f5h,003h,0c1h,08bh,0f0h
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0f8h,005h,0e8h,043h,08bh,0f8h,08ch,0d9h,08eh
	db 0c1h,0b9h,0d8h,000h,0f3h,0a5h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh
	db 087h,0d2h,0f5h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,089h,087h,0dch,043h,003h,0ddh
	db 08bh,087h,0c6h,0f5h,08bh,0d9h,089h,087h,0d0h,043h
#endasm
	draw_member_status_m(l2);
	l2++;
L61e9:
	if (l2 < party_count) goto L6195;
}
