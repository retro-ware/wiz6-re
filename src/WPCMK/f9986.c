extern char char_portrait;
change_portrait(slot)
{
	int old_portrait;
	load_and_show_character(slot);
	old_portrait = (unsigned char)char_portrait;
	choose_portrait();
	if ((unsigned char)char_portrait == old_portrait) goto L99bc;
	access_roster_record(21616, slot, 1);
	wait_for_key();
L99bc:
	;
}
