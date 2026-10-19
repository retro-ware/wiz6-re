extern char g50de[];
extern char trap_guess_letters[];
extern int chest_trap;
extern int g5194[];
extern int trap_guess_len;
/* Inspect result: reveal correct letters of the trap name or add misleading letters. */
reveal_trap_letters(win, member, letters, accuracy)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	l4 = 0;
	goto L67a3;
L673a:
	if (g5194[l4]) goto L67a0;
	if (random(100) <= 50) goto L67a0;
	if (random(100) >= accuracy) goto L679d;
	l8 = char_index(20702, (unsigned char)trap_guess_letters[l4]);
	if (l8 < 0) goto L6795;
	g5194[l4] = 1;
	g50de[l8] = 36;
	goto L679d;
L6795:
	trap_guess_letters[l4] = 42;
L679d:
	letters--;
L67a0:
	l4++;
L67a3:
	if (l4 >= trap_guess_len) goto L67b2;
	if (letters > 0) goto L673a;
L67b2:
	if (letters <= 0) goto L687c;
	l10 = 0;
	l2 = 0;
	goto L67d7;
L67c7:
	if (g50de[l2] == 36) goto L67d4;
	l10++;
L67d4:
	l2++;
L67d7:
	if (strlen(20702) > l2) goto L67c7;
	if (random(100) >= accuracy) goto L683d;
	if (l10 <= 0) goto L683b;
	if (trap_guess_len >= 18) goto L683b;
	l4 = random(strlen(20702));
#asm
	db 08bh,05eh,0fch,080h,0bfh,0deh,050h,024h,074h,0e6h,08bh,05eh,0fch,08ah,087h,0deh
	db 050h,08bh,01eh,0d0h,051h,088h,087h,0bch,051h,0d1h,0e3h,0c7h,087h,094h,051h,001h
	db 000h
#endasm
	trap_guess_len++;
	g50de[l4] = 36;
L683b:
	goto L6876;
L683d:
	if (l10 <= 0) goto L6876;
	if (random(100) <= 50) goto L6876;
	if (trap_guess_len >= 18) goto L6876;
	trap_guess_letters[trap_guess_len] = (char)(random(26) + 65);
#asm
	db 0d1h,0e3h,0c7h,087h,094h,051h,000h,000h
#endasm
	trap_guess_len++;
L6876:
	letters--;
	goto L67b2;
L687c:
	defer_window_draw(win);
	clear_window_area(win, 1, 2, 18, 2);
	set_cursor(win, 1, 2);
	if (chest_trap) goto L68c7;
	print_string(win, 20682, 6);
	goto L6907;
L68c7:
	l2 = 0;
	goto L68fe;
L68ce:
	l6 = (g5194[l2] == 1 ? 6 : 12);
	put_char(win, (unsigned char)trap_guess_letters[l2], l6);
	l2++;
L68fe:
	if (l2 < trap_guess_len) goto L68ce;
L6907:
	resume_window_draw(win);
	refresh_window(win);
}
