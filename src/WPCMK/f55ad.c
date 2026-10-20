set_class_skill_masks(p4, p6, p8, p10)
{
	int l2;
	register int rsi;
	l2 = 0;
	goto L55de;
L55bb:
	;
#asm
l55bb:
	db 08bh,05eh,004h,08bh,076h,0feh,080h,038h,031h,074h,007h,080h,0bch,0a4h,055h,000h
	db 076h,005h
l55cd:
	db 0b8h,001h,000h,0ebh,003h
l55d2:
	db 0b8h,000h,000h
l55d5:
	db 0d1h,0e6h,089h,084h,070h,056h
#endasm
	l2++;
L55de:
	if (strlen(p4) > l2) goto L55bb;
	l2 = 0;
	goto L5614;
L55f1:
	;
#asm
l55f1:
	db 08bh,05eh,006h,08bh,076h,0feh,080h,038h,031h,074h,007h,080h,0bch,0aeh,055h,000h
	db 076h,005h
l5603:
	db 0b8h,001h,000h,0ebh,003h
l5608:
	db 0b8h,000h,000h
l560b:
	db 0d1h,0e6h,089h,084h,084h,056h
#endasm
	l2++;
L5614:
	if (strlen(p6) > l2) goto L55f1;
	l2 = 0;
	goto L564a;
L5627:
	;
#asm
l5627:
	db 08bh,05eh,008h,08bh,076h,0feh,080h,038h,031h,074h,007h,080h,0bch,0b5h,055h,000h
	db 076h,005h
l5639:
	db 0b8h,001h,000h,0ebh,003h
l563e:
	db 0b8h,000h,000h
l5641:
	db 0d1h,0e6h,089h,084h,092h,056h
#endasm
	l2++;
L564a:
	if (strlen(p8) > l2) goto L5627;
	l2 = 0;
	goto L5680;
L565d:
	;
#asm
l565d:
	db 08bh,05eh,00ah,08bh,076h,0feh,080h,038h,031h,074h,007h,080h,0bch,0bah,055h,000h
	db 076h,005h
l566f:
	db 0b8h,001h,000h,0ebh,003h
l5674:
	db 0b8h,000h,000h
l5677:
	db 0d1h,0e6h,089h,084h,09ch,056h
#endasm
	l2++;
L5680:
	if (strlen(p10) > l2) goto L565d;
}
