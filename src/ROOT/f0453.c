#asm
	extrn $lrm:near
#endasm
/* Convert a signed long to a decimal string. */
long_to_string(value, buf)
long value;
char *buf;
{
	long orig;
	register int len;
	register int rdi;
	orig = value;
	if (orig >= 0L) goto L0482;
#asm
l0475:
	db 0f7h,0dah,0f7h,0d8h,083h,0dah,000h,089h,056h,006h,089h,046h,004h
#endasm
L0482:
	len = 0;
L0485:
	;
#asm
l0485:
	db 08bh,046h,004h,08bh,056h,006h,0b9h,00ah,000h,0bbh,000h,000h
	call $lrm
	db 005h,030h,000h,083h,0d2h,000h,08bh,0feh,046h,08bh,05eh,008h,088h,001h
#endasm
	if ((value = (value / 10L)) > 0L) goto L0485;
	if (orig < 0L) {
	rdi = len;
	len++;
	*(buf + rdi) = 45;
	}
	*(buf + len) = 0;
	reverse_string(buf);
}
