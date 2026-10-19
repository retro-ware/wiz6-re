f80d2(p4, p6)
char *p4;
char *p6;
{
L80d5:
	if (!(*p6 = *p4)) goto L80fb;
	if ((*(unsigned char *)p6 < 65) || (*(unsigned char *)p6 > 90)) goto L80f3;
	*p6 += 32;
L80f3:
	p4++;
	p6++;
	goto L80d5;
L80fb:
	;
}
