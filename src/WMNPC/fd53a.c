extern char *g5264;
/* Prompt member p4 for a word and match it against the '/'-separated choices of message p6. */
npc_input_word(member, msg, p8)
{
	char l50[50];
	char *l52;
	char x52[18];
	int l72;
	char l152[80];
	int l154;
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
	l50[(l154 + 1)] = 0;
	fc3eb(l50);
	l154 = 0;
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
	l154 = ((l154 + l158) + 2);
#asm
	db 08bh,09eh,066h,0ffh,003h,0ddh,080h,0bfh,068h,0ffh,000h,075h,08fh
#endasm
	if (p8 != 1) goto Ld66f;
	return 1;
Ld66f:
	goto Ld588;
	return;
}
