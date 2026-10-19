/* Copy a zero-terminated name from src to dst. */
copy_name(src, dst)
char *src;
char *dst;
{
L4ca8:
	*dst = *src;
#asm
	db 084h,0c0h,074h,018h,08bh,05eh,006h,080h,03fh,041h,072h,008h,080h,03fh,05ah,077h
	db 003h,080h,007h,020h
#endasm
L4cc6:
	src++;
	dst++;
	goto L4ca8;
L4cce:
	;
}
