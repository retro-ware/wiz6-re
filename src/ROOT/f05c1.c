/* Replace the first occurrence of a char in str with another string. */
replace_char_with_string(str, repl, ch)
char *str;
char *repl;
char ch;
{
	int len;
	char buf[80];
	register int i;
	register int j;
	i = 0;
	len = 0;
L05d1:
	if (!*(str + i)) goto L061e;
	if ((unsigned char)*(str + i) != ch) goto L060b;
	j = 0;
L05ec:
	if (!*(repl + j)) goto L0604;
	buf[len] = *(repl + j);
	len++;
	j++;
	goto L05ec;
L0604:
	ch = 0;
	i++;
	goto L061c;
L060b:
	buf[len] = *(str + i);
	len++;
	i++;
L061c:
	goto L05d1;
L061e:
	buf[len] = 0;
	strcpy(str, buf);
}
