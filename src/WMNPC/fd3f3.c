#asm
	extrn get_message_:near
#endasm
fd3f3(p4, p6)
{
	int l2;
	l2 = 0;
	goto Ld425;
Ld400:
	;
#asm
ld400:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0c8h,08bh
	db 046h,008h,003h,0c1h,050h,08bh,046h,004h,003h,046h,0feh,050h
	call get_message_
	db 083h,0c4h,004h
#endasm
	l2++;
Ld425:
	if (l2 < p6) goto Ld400;
}
