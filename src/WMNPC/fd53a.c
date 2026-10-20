extern char *g5264;
/* Prompt member p4 for a word and match it against the '/'-separated choices of message p6. */
npc_input_word(member, msg, p8)
{
	char l50[50];
	char *l52;
	char x52[18];
	int l72;
	char l152[80];
	char *l154;
	int l156;
	int l158;
	get_message(msg, l152);
	get_message(1513, &l72);
	replace_char_with_string(&l72, ((432 * member) + 17384), 94);
	l156 = (37 - strlen(&l72));
Ld588:
	fc999((msg + 2));
	print_string(g5264, &l72, 1);
	g5264[6]++;
	npc_input_line(g5264, l50, l156, 6, 0);
	f4f73(g5264);
	l154 = strlen(l50);
	l50[l154] = 32;
#asm
	db 0c6h,047h,0cfh,000h
#endasm
	fc3eb(l50);
	l154 = 0;
Ld5f3:
	l158 = char_index((l154 + ((char *)l152 + 1)), 47);
	l52 = l50;
Ld612:
	if (!*l52) goto Ld649;
	if (strncmp(l52, (l154 + ((char *)l152 + 1)), l158)) goto Ld644;
	return (unsigned char)l152[l154];
Ld640:
	;
Ld644:
	l52++;
	goto Ld612;
Ld649:
	;
#asm
ld649:
	db 08bh,086h,066h,0ffh,003h,086h,062h,0ffh,040h,040h,089h,086h,066h,0ffh
#endasm
	if (l152[l154]) goto Ld5f3;
	if (p8 != 1) goto Ld66f;
	return 1;
Ld66f:
	goto Ld588;
	return;
}
