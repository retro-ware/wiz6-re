extern char g451c[];
extern char g4526[];
extern char g452d[];
extern char g4532[];
fdd93(p4, p6, p8, p10, p12)
{
	int l2;
	register int rsi;
	l2 = 0;
	goto Lddce;
Ldda1:
	;
#asm
ldda1:
	db 08bh,05eh,006h,08bh,076h,0feh,080h,038h,031h,074h,011h
#endasm
	if ((unsigned)g451c[((432 * p4) + rsi)] <= 0) goto Lddc2;
Lddbd:
	;
#asm
lddbd:
	db 0b8h,001h,000h,0ebh,003h
#endasm
Lddc2:
	;
#asm
lddc2:
	db 0b8h,000h,000h
#endasm
Lddc5:
	;
#asm
lddc5:
	db 0d1h,0e6h,089h,084h,0feh,057h
#endasm
	l2++;
Lddce:
	if (strlen(p6) > l2) goto Ldda1;
	l2 = 0;
	goto Lde0e;
Ldde1:
	;
#asm
ldde1:
	db 08bh,05eh,008h,08bh,076h,0feh,080h,038h,031h,074h,011h
#endasm
	if ((unsigned)g4526[((432 * p4) + rsi)] <= 0) goto Lde02;
Lddfd:
	;
#asm
lddfd:
	db 0b8h,001h,000h,0ebh,003h
#endasm
Lde02:
	;
#asm
lde02:
	db 0b8h,000h,000h
#endasm
Lde05:
	;
#asm
lde05:
	db 0d1h,0e6h,089h,084h,012h,058h
#endasm
	l2++;
Lde0e:
	if (strlen(p8) > l2) goto Ldde1;
	l2 = 0;
	goto Lde4e;
Lde21:
	;
#asm
lde21:
	db 08bh,05eh,00ah,08bh,076h,0feh,080h,038h,031h,074h,011h
#endasm
	if ((unsigned)g452d[((432 * p4) + rsi)] <= 0) goto Lde42;
Lde3d:
	;
#asm
lde3d:
	db 0b8h,001h,000h,0ebh,003h
#endasm
Lde42:
	;
#asm
lde42:
	db 0b8h,000h,000h
#endasm
Lde45:
	;
#asm
lde45:
	db 0d1h,0e6h,089h,084h,020h,058h
#endasm
	l2++;
Lde4e:
	if (strlen(p10) > l2) goto Lde21;
	l2 = 0;
	goto Lde8e;
Lde61:
	;
#asm
lde61:
	db 08bh,05eh,00ch,08bh,076h,0feh,080h,038h,031h,074h,011h
#endasm
	if ((unsigned)g4532[((432 * p4) + rsi)] <= 0) goto Lde82;
Lde7d:
	;
#asm
lde7d:
	db 0b8h,001h,000h,0ebh,003h
#endasm
Lde82:
	;
#asm
lde82:
	db 0b8h,000h,000h
#endasm
Lde85:
	;
#asm
lde85:
	db 0d1h,0e6h,089h,084h,02ah,058h
#endasm
	l2++;
Lde8e:
	if (strlen(p12) > l2) goto Lde61;
}
