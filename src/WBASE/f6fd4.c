extern int party_count;
/* Remove all party members. */
remove_all_members()
{
L6fd4:
	if (party_count <= 0) goto L6fe6;
	remove_party_member((party_count - 1));
	goto L6fd4;
L6fe6:
	;
}
