extern int msg_index_count;
/* Binary-search the message index for the entry containing a message number. */
find_message_index()
{
	int lo;
	char x2[2];
	register int mid;
	register int hi;
	hi = msg_index_count;
	hi--;
	lo = 0;
L064c:
	if (hi < lo) goto L06a5;
	mid = (((hi - lo) / 2) + lo);
#asm
	db 08bh,0c6h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,04ah,008h,089h,046h,0fch
	db 08bh,0d8h,08bh,007h,03bh,046h,004h,07eh,005h
#endasm
	hi = mid;
	hi--;
	goto L06a3;
L0681:
	;
#asm
l0681:
	db 08ah,047h,004h,02ah,0e4h,08bh,0c8h,08bh,007h,003h,0c8h,08bh,0c1h,03bh,046h,004h
	db 07dh,008h
#endasm
	lo = (mid + 1);
	goto L06a3;
L069b:
	;
#asm
l069b:
	db 08bh,0c3h
#endasm
	return;
L06a3:
	goto L064c;
L06a5:
	return 0;
}
