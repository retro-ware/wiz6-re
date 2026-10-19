fc282(p4, p6)
{
	int l2;
	register int rsi;
	l2 = 0;
Lc28e:
	;
#asm
lc28e:
	db 08bh,046h,0feh,003h,046h,006h,08bh,0f0h,08bh,05eh,004h,080h,038h,000h,074h,00bh
	db 08ah,000h,03ch,020h,074h,005h
#endasm
	l2++;
	goto Lc28e;
Lc2a9:
	if (l2) goto Lc2b7;
	return -1;
Lc2b7:
	return (p6 + l2);
}
