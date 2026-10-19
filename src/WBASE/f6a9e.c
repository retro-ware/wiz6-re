#asm
	extrn draw_member_panel_:near
#endasm
extern char roster_slot_used[];
extern int member_portrait[];
extern int party_count;
extern int pclist_pcindex[];
/* Pick a stored character and add it to the party. */
add_party_member()
{
	int pcindex;
	char x2[19];
	char l22;
	char x22[410];
	int rec;
	int pick;
	register int rsi;
	register int rdi;
	if ((pick = choose_pcfile_char()) == -1) goto L6b2a;
	pcindex = pclist_pcindex[pick];
	pcfile_record_io(&rec, pcindex, 0);
	roster_slot_used[pcindex] = 2;
	rsi = party_count;
#asm
	db 0d1h,0e6h,089h,09ch,0dch,043h
#endasm
	member_portrait[party_count] = find_free_portrait_slot(party_count);
	load_portrait((unsigned char)l22, member_portrait[party_count]);
	rsi = &rec;
	rdi = ((432 * party_count) + 17384);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0ffh,036h,0ceh,043h
	call draw_member_panel_
	db 059h
#endasm
	party_count++;
L6b2a:
	;
}
