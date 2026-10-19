extern char roster_slot_used[];
extern int g4fb8;
extern int g4fba;
extern int member_pcfile_index[];
extern int party_count;
/* Remove party member i, mark it available and redraw the panels. */
remove_party_member(i)
{
	int j;
	register int rsi;
	register int rdi;
	roster_slot_used[member_pcfile_index[i]] = 1;
	party_count--;
	j = i;
	goto L6b91;
L6b54:
	rsi = ((432 * j) + 17816);
	rdi = ((432 * j) + 17384);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h
	db 08bh,087h,0deh,043h,089h,087h,0dch,043h,08bh,087h,0d2h,043h,089h,087h,0d0h,043h
#endasm
	j++;
L6b91:
	if (j < party_count) goto L6b54;
	fill_window(g4fba, 32, 3, 0);
	fill_window(g4fb8, 32, 3, 0);
	j = 0;
	goto L6bd7;
L6bcd:
	draw_member_panel(j);
	j++;
L6bd7:
	if (j < party_count) goto L6bcd;
}
