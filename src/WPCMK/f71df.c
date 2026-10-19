extern char g559c[];
f71df(p4)
char *p4;
{
	register int rsi;
	rsi = 0;
L71e6:
	if ((unsigned char)g559c[rsi] >= (*(p4 + rsi) + -65)) goto L7207;
#asm
	db 08ah,000h,004h,0bfh,088h,084h,09ch,055h
#endasm
L7207:
	rsi++;
	if (rsi < 8) goto L71e6;
}
