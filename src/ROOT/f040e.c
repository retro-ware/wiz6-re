reverse_string(str)
char *str;
{
	int j;
	register int c;
	register int i;
	i = 0;
	j = (strlen(str) - 1);
	goto L0448;
L0426:
	;
#asm
l0426:
	db 08bh,05eh,004h,08ah,001h,098h,08bh,0f0h,003h,05eh,0feh,08ah,007h,08bh,05eh,004h
	db 088h,001h
#endasm
	*(str + j) = c;
	j--;
	i++;
L0448:
	if (i < j) goto L0426;
}
