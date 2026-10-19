extern char *g4fa8;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
handle_locked_door()
{
	int l2;
	l2 = (unsigned char)(g4fa8 + party_level)[1728];
Ldb36:
	l2 = f7bd2(party_cell_x, party_cell_y, party_level, l2);
	if (l2 == -1) goto Ldbce;
	if (((g4fa8 + l2)[864] != 3) || (check_locked_door_at(l2) != 1)) goto Ldb72;
	return;
Ldb72:
	if (((g4fa8 + l2)[864] != 7) || ((extract_bits(*(int *)((g4fa8 + (l2 << 1)) + 576), (party_facing << 1), 2) != 1) && (extract_bits(*(int *)((g4fa8 + (l2 << 1)) + 576), (party_facing << 1), 2) != 2))) goto Ldbc8;
	locked_door_menu(l2);
	return;
Ldbc8:
	l2++;
	goto Ldb36;
Ldbce:
	return;
}
