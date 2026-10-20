extern int g51b6;
extern int g5894;
fc16d(p4, p6)
char *p4;
{
	char l82[82];
	int l84;
	char *l86;
	int l126[20];
	char x126[2];
	int l130;
	int l132;
	int l134;
	get_message(g51b6, ((char *)l82 + 2));
	l132 = (unsigned char)l82[(0 + 2)];
	l134 = (unsigned char)l82[3];
	l84 = 0;
	l86 = 2;
Lc19f:
	if ((*(int *)(l82 + 0) = char_index((l86 + ((char *)l82 + 2)), 47)) == -1) goto Lc1d5;
	l126[l84] = l86;
#asm
	db 003h,046h,0aeh,040h,089h,046h,0aah
#endasm
	l84++;
	goto Lc19f;
Lc1d5:
	l126[l84] = l86;
	if (p6) goto Lc207;
	if (l84 > l132) {
	l84 = l132;
	}
	l130 = random(l84);
	goto Lc221;
Lc207:
	l84 -= l134;
	l130 = (random(l84) + l134);
Lc221:
	*(int *)(l82 + 0) = (l126[(l130 + 1)] - l126[l130]);
	strncpy(p4, (l126[l130] + ((char *)l82 + 2)), *(int *)(l82 + 0));
	(p4 + *(int *)(l82 + 0))[-65537] = 0;
	strcpy(((char *)l82 + 2), p4);
	l82[(*(int *)(l82 + 0) + 1)] = 32;
	l82[(*(int *)(l82 + 0) + 2)] = 0;
	g5894 = fbea1(((char *)l82 + 2), 22678);
}
