#asm
	extrn strcpy_:near
#endasm
extern char pc_swag_count[];
remove_swag_item(p4, p6)
{
	int l2;
	char x2[2];
	int l6;
	register int rsi;
	register int rdi;
	pc_swag_count[(432 * p4)]--;
	l2 = p6;
	goto L5f3a;
L5ee3:
	l6 = (l2 + 10);
	rsi = (((432 * p4) + (l6 << 3)) + 17456);
	rdi = (((432 * p4) + (l6 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,08bh,046h,0feh,0b9h,004h,000h,0d3h
	db 0e0h,005h,0a2h,056h,050h,08bh,046h,0feh,0d3h,0e0h,005h,092h,056h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	l2++;
L5f3a:
	if ((unsigned char)pc_swag_count[(432 * p4)] > l2) goto L5ee3;
}
