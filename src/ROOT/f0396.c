f0396(p4, p6, p8)
char *p4;
{
	if (p8 < 16) goto L03c2;
L039f:
	if ((unsigned char)p4[6] >= p6) goto L03c0;
	f23e3(p4, 32, (p8 + -15));
	goto L039f;
L03c0:
	;
#asm
l03c0:
	db 0ebh,01eh
#endasm
L03c2:
	if ((unsigned char)p4[6] >= p6) goto L03e0;
	f22b7(p4, 32, 1);
	goto L03c2;
L03e0:
	;
}
