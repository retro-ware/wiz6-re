f5011(p4, p6)
{
	register int rsi;
	register int rdi;
	rsi = p6;
	goto L5042;
L501b:
	rdi = (rsi / 8);
#asm
	db 08bh,05eh,004h,08ah,001h,098h,050h,08bh,0c6h,099h,0f7h,0f9h,08bh,0cah,0bah,001h
	db 000h,0d3h,0e2h,08bh,0cah,0f7h,0d1h,058h,023h,0c1h,088h,001h
#endasm
	rsi++;
L5042:
	if ((p6 + 2) > rsi) goto L501b;
}
