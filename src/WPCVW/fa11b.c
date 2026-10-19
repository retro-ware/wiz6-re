extern char pc_stats[];
fa11b(p4, p6, p8)
char *p6;
{
	register int rsi;
	rsi = 0;
	if (p8 != 1) goto La163;
	if ((unsigned char)pc_stats[((432 * p4) + rsi)] <= (*(p6 + rsi) + -65)) goto La161;
#asm
	db 08ah,000h,004h,0bfh,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0c8h,003h,0c6h,08bh
	db 0d8h,058h,088h,087h,014h,045h
#endasm
La161:
	goto La19c;
La163:
	if ((unsigned char)pc_stats[((432 * p4) + rsi)] >= (*(p6 + rsi) + -65)) goto La19c;
#asm
	db 08ah,000h,004h,0bfh,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0c8h,003h,0c6h,08bh
	db 0d8h,058h,088h,087h,014h,045h
#endasm
La19c:
	rsi++;
#asm
	db 083h,0feh,007h,07ch,080h
#endasm
}
