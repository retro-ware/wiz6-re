extern char g4598[];
extern char party[];
extern int cur_member;
extern int g43d2[];
extern int g43de[];
extern int member_pcfile_index[];
extern int member_portrait[];
extern int party_count;
struct s432 { int w[216]; };
reorder_party()
{
	int l2;
	char savepcs[2592];
	int pcfiles[6];
	int portraits[6];
	int l2620;
	int l2622;
	l2622 = party_count;
	l2620 = 0;
	goto L6140;
L6088:
	cur_member = choose_party_member_m(2037, 0);
	*(struct s432 *)(char *)((l2620 * 432) + savepcs) = *(struct s432 *)((char *)party + (cur_member * 432));
	pcfiles[l2620] = member_pcfile_index[cur_member];
	portraits[l2620] = member_portrait[cur_member];
	party_count--;
	for (l2 = cur_member; l2 < party_count; l2++) {
	*(struct s432 *)((char *)party + (432 * l2)) = *(struct s432 *)((char *)g4598 + (432 * l2));
	member_pcfile_index[l2] = g43de[l2];
	member_portrait[l2] = g43d2[l2];
	}
	l2620++;
L6140:
	if ((l2622 - 1) > l2620) goto L6088;
	*(struct s432 *)(char *)((432 * l2622) + (savepcs + -432)) = *(struct s432 *)(char *)(17384);
	pcfiles[l2622 - 1] = member_pcfile_index[0];
	portraits[l2622 - 1] = member_portrait[0];
	party_count = l2622;
	for (l2 = 0; l2 < party_count; l2++) {
	*(struct s432 *)((char *)party + (432 * l2)) = *(struct s432 *)(char *)((432 * l2) + savepcs);
	member_pcfile_index[l2] = pcfiles[l2];
	member_portrait[l2] = portraits[l2];
	draw_member_status_m(l2);
	}
}
