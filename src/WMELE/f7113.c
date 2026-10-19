extern char g0190[];
extern int g4ed8;
extern int g4eda;
extern int monster_groups;
/* Count down timed effects of all combatants after a round. */
tick_combat_effects()
{
	int l2;
	int l4;
	int l6;
	int l8;
	register int rsi;
	l2 = 0;
L711f:
	l4 = 0;
L7124:
	;
#asm
l7124:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0fch,08ah,080h
	db 08ch,001h,02ah,0e4h,089h,046h,0f8h,03dh,000h,000h,07fh,003h
#endasm
	goto L71de;
L7143:
	;
#asm
l7143:
	db 08bh,0c6h,0ebh,059h
#endasm
	l6 = (l8 / 10);
	goto L71ad;
#asm
	db 08bh,046h,0f8h,0b9h,00ah,000h,099h,0f7h,0f9h,089h,046h,0fah,0ebh,04ah
#endasm
	l6 = (l8 / 12);
#asm
	db 0ebh,03ch,08bh,046h,0f8h,0b9h,00ch,000h,099h,0f7h,0f9h,089h,046h,0fah,0ebh,02eh
#endasm
	l6 = (l8 / 20);
#asm
	db 0ebh,020h
#endasm
	l6 = 1;
#asm
	db 0ebh,019h,047h,071h,055h,071h,063h,071h,071h,071h,07fh,071h,08dh,071h
l71a0:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,094h,071h
#endasm
L71ad:
	if (l6 >= 1) goto L71b8;
	l6 = 1;
L71b8:
	l8 -= l6;
	if (l8 >= 0) goto L71c9;
	l8 = 0;
L71c9:
	;
#asm
l71c9:
	db 08ah,046h,0f8h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,08bh,076h
	db 0fch,088h,080h,08ch,001h
#endasm
L71de:
	l4++;
	if (l4 < 6) goto L7124;
	l4 = 0;
L71f1:
	;
#asm
l71f1:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0fch,080h,0b8h
	db 092h,001h,000h,076h,004h,0feh,088h,092h,001h
#endasm
L720a:
	l4++;
	if (l4 < 4) goto L71f1;
	l2++;
	if (l2 < 7) goto L711f;
	if (g4ed8 <= 0) goto L7237;
	g4eda = (unsigned char)g0190[monster_groups];
L7237:
	if (g4eda > 0) goto L724a;
	g4ed8 = 0;
	g4eda = 0;
L724a:
	;
}
