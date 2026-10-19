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
	c = *(str + i);
	*(str + i) = *(str + j);
	*(str + j) = c;
	j--;
	i++;
L0448:
	if (i < j) goto L0426;
}
