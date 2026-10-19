#asm
	extrn clear_window_:near
	extrn refresh_all_windows_:near
#endasm
extern char *g522a;
print_member_message(p4, p6, p8, p10, p12, p14, p16, p18)
char *p6;
char *p8;
char *p10;
{
	int l2;
#asm
	db 0b8h,000h,000h,050h,0ffh,036h,02ah,052h
	call clear_window_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 08bh,05eh,006h,080h,03fh,000h,074h,005h,0b8h,001h,000h,0ebh,003h
#endasm
Laa74:
	;
#asm
laa74:
	db 0b8h,000h,000h
#endasm
Laa77:
	if (!*p8) goto Laa84;
#asm
	db 0b9h,001h,000h,0ebh,003h
#endasm
Laa84:
	;
#asm
laa84:
	db 0b9h,000h,000h
#endasm
Laa87:
	;
#asm
laa87:
	db 003h,0c1h,08bh,05eh,00ah,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
#endasm
Laa96:
	;
#asm
laa96:
	db 0b9h,000h,000h
#endasm
Laa99:
	;
#asm
laa99:
	db 003h,0c1h,040h,089h,046h,0feh
#endasm
	set_cursor(g522a, (20 - (((((strlen(((432 * p4) + 17384)) + strlen(p6)) + strlen(p8)) + strlen(p10)) + l2) / 2)), 1);
	print_string(g522a, ((432 * p4) + 17384), p12);
	g522a[6]++;
	if (!*p6) goto Lab2e;
	print_string(g522a, p6, p14);
	g522a[6]++;
Lab2e:
	if (!*p8) goto Lab4b;
	print_string(g522a, p8, p16);
	g522a[6]++;
Lab4b:
	if (!*p10) goto Lab68;
	print_string(g522a, p10, p18);
	g522a[6]++;
Lab68:
	;
}
