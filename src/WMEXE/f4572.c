#asm
	extrn $ldv:near
#endasm
f4572(p4)
{
	long l4;
#asm
	db 08bh,046h,006h,0bbh,064h,000h,0f7h,0ebh,050h,052h,08bh,046h,008h,099h,08bh,0c8h
	db 08bh,0dah,05ah,058h
	call $ldv
	db 08bh,0c8h,08bh,0dah,0b8h,064h,000h,0bah,000h,000h,02bh,0c1h,01bh,0d3h,089h,056h
	db 0feh,089h,046h,0fch,083h,0fah,000h,07fh,007h,075h,007h,03dh,032h,000h,076h,002h
#endasm
L45af:
	goto L45b8;
L45b1:
	return 0;
L45b8:
	if (l4 > 66L) goto L45d6;
	return (p4 == 0 ? 5 : 0);
L45d6:
	if (l4 > 75L) goto L45f4;
	return (p4 == 0 ? 10 : 1);
L45f4:
	if (l4 > 90L) goto L4612;
	return (p4 == 0 ? 20 : 2);
L4612:
	return (p4 == 0 ? 40 : 4);
}
