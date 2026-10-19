f467b()
{
	int l2;
	int l4;
	int l6;
	register int rsi;
	l2 = (f09e2(100) % 4);
	l4 = f09e2(100);
	l6 = (l4 >= 74 ? (l4 < 92 ? 1 : 2) : 0);
#asm
	db 08bh,046h,004h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h,050h,08bh,046h
	db 0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,08bh,0c8h,058h,003h,0c1h,08bh,0c8h,08bh,046h
	db 0fah,003h,0c8h,08bh,0f1h,08bh,01eh,0aah,04fh,08ah,000h,02ah,0e4h
#endasm
}
