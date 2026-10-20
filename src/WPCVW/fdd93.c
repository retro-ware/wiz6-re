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
	db 08bh,05eh,006h,08bh,076h,0feh,080h,038h,031h,074h,011h,0b8h,0b0h,001h,0f7h,06eh
	db 004h,003h,0c6h,08bh,0d8h,080h,0bfh,01ch,045h,000h,076h,005h
lddbd:
	db 0b8h,001h,000h,0ebh,003h
lddc2:
	db 0b8h,000h,000h
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
	db 08bh,05eh,008h,08bh,076h,0feh,080h,038h,031h,074h,011h,0b8h,0b0h,001h,0f7h,06eh
	db 004h,003h,0c6h,08bh,0d8h,080h,0bfh,026h,045h,000h,076h,005h
lddfd:
	db 0b8h,001h,000h,0ebh,003h
lde02:
	db 0b8h,000h,000h
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
	db 08bh,05eh,00ah,08bh,076h,0feh,080h,038h,031h,074h,011h,0b8h,0b0h,001h,0f7h,06eh
	db 004h,003h,0c6h,08bh,0d8h,080h,0bfh,02dh,045h,000h,076h,005h
lde3d:
	db 0b8h,001h,000h,0ebh,003h
lde42:
	db 0b8h,000h,000h
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
	db 08bh,05eh,00ch,08bh,076h,0feh,080h,038h,031h,074h,011h,0b8h,0b0h,001h,0f7h,06eh
	db 004h,003h,0c6h,08bh,0d8h,080h,0bfh,032h,045h,000h,076h,005h
lde7d:
	db 0b8h,001h,000h,0ebh,003h
lde82:
	db 0b8h,000h,000h
lde85:
	db 0d1h,0e6h,089h,084h,02ah,058h
#endasm
	l2++;
Lde8e:
	if (strlen(p12) > l2) goto Lde61;
}
