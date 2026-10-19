extern int g4f9a;
fce13()
{
	int l2;
	char x2[2];
	register int rsi;
#asm
	db 08bh,04eh,004h,0d1h,0e1h,0a1h,0a8h,04fh,003h,0c1h,005h,040h,002h,089h,046h,0fch
#endasm
	l2 = (g4f9a << 1);
	rsi = (l2 / 8);
#asm
	db 08bh,05eh,0fch,08ah,000h,098h,050h,08bh,046h,0feh,099h,0f7h,0f9h,08bh,0cah,0bah
	db 001h,000h,0d3h,0e2h,08bh,0cah,0f7h,0d1h,058h,023h,0c1h,088h,000h
#endasm
	rsi = ((l2 + 1) / 8);
#asm
	db 08ah,000h,098h,050h,08bh,046h,0feh,040h,099h,0f7h,0f9h,08bh,0cah,0bah,001h,000h
	db 0d3h,0e2h,08bh,0cah,058h,00bh,0c1h,088h,000h
#endasm
}
