extern char g019b[];
extern char g019d[];
extern char g3810[];
extern int g4360;
extern int g4362[];
extern int g43a8[];
extern int g50b4[];
f6af9(p4, p6, p8)
{
	register int rsi;
	register int rdi;
	if (p4 <= g4360) goto L6b10;
	return -1;
L6b10:
	if (p6 != 1) goto L6b3a;
	if (g3810[((unsigned char)g019b[g43a8[p4]] * 314)]) goto L6b3a;
	return -1;
L6b3a:
	rsi = 0;
	goto L6bb1;
L6b3f:
	rdi = (44 * rsi);
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,079h,02ah,0ffh,075h
	db 059h
#endasm
	*(int *)((char *)g50b4 + ((p6 * 10) + (p8 << 1))) = 1;
	*(int *)((char *)g4362 + ((p6 * 10) + (p8 << 1))) = p4;
	((char *)g43a8[p4] + rdi)[42] = (char)((p6 * 10) + p8);
	if (p6) goto L6baa;
	f4f02(p4, p8);
L6baa:
	return 0;
L6bb0:
	rsi++;
L6bb1:
	if ((unsigned char)g019d[g43a8[p4]] > rsi) goto L6b3f;
	return -1;
}
