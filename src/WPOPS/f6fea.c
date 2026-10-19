copy_name(p4, p6)
char *p4;
char *p6;
{
L6fed:
	if (!(*p6 = *p4)) goto L7013;
	if ((*(unsigned char *)p6 < 65) || (*(unsigned char *)p6 > 90)) goto L700b;
	*p6 += 32;
L700b:
	p4++;
	p6++;
	goto L6fed;
L7013:
	;
}
