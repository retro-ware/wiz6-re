#asm
	extrn strcpy_:near
#endasm
extern char g019c[];
extern int g43a8[];
extern int g43b6[];
f6ba3(p4, p6)
{
	if (p6) goto L6bc1;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,008h,005h,0e8h,043h,050h,0ffh,076h,004h
	call strcpy_
	db 083h,0c4h,004h,0ebh,02ch
#endasm
L6bc1:
	strcpy(p4, (g43b6[p6] + ((unsigned char)g019c[g43a8[p6]] << 5)));
L6bed:
	;
}
