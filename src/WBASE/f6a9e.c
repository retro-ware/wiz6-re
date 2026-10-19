extern char party[];
extern char roster_slot_used[];
extern int member_pcfile_index[];
extern int member_portrait[];
extern int party_count;
extern int pclist_pcindex[];
struct s432 { int w[216]; };
/* Pick a stored character and add it to the party. */
add_party_member()
{
	int pcindex;
	char x2[19];
	char l22;
	char x22[410];
	int rec;
	int pick;
	if ((pick = choose_pcfile_char()) == -1) goto L6b2a;
	pcindex = pclist_pcindex[pick];
	pcfile_record_io(&rec, pcindex, 0);
	roster_slot_used[pcindex] = 2;
	member_pcfile_index[party_count] = pcindex;
	member_portrait[party_count] = find_free_portrait_slot(party_count);
	load_portrait((unsigned char)l22, member_portrait[party_count]);
	*(struct s432 *)((char *)party + (432 * party_count)) = *(struct s432 *)(char *)(&rec);
	draw_member_panel(party_count);
	party_count++;
L6b2a:
	;
}
