extern char *party_picture_win;
/* Print text word-wrapped into the combat message window g4fb6. */
print_wrapped(p4, p6)
{
	int l2;
	int l4;
	char x4[78];
	int l84;
	char *l86;
	strcpy(&l84, p4);
	l86 = &l84;
L6c0b:
	if (strlen(l86) <= 0) goto L6cbe;
	l2 = char_index(l86, 32);
	l4 = (l2 < 0 ? strlen(l86) : l2);
	if ((((unsigned char)party_picture_win[6] + l4) + 1) > (unsigned char)*party_picture_win) {
	window_newline(party_picture_win);
	}
	if (!party_picture_win[6]) {
	party_picture_win[6]++;
	}
	if (l2 >= 0) {
	*(l86 + l2) = 0;
	print_string(party_picture_win, l86, p6);
	party_picture_win[6]++;
	l86 += l2;
	l86 += 1;
	} else {
	print_string(party_picture_win, l86, p6);
	party_picture_win[6]++;
	*l86 = 0;
	}
	goto L6c0b;
L6cbe:
	;
}
