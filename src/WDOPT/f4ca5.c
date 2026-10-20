/* Copy a zero-terminated name from src to dst. */
copy_name(src, dst)
char *src;
char *dst;
{
L4ca8:
	if (!(*dst = *src)) goto L4cce;
	if ((*(unsigned char *)dst >= 65) && (*(unsigned char *)dst <= 90)) {
	*dst += 32;
	}
	src++;
	dst++;
	goto L4ca8;
L4cce:
	;
}
