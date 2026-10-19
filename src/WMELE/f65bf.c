extern int g438e[];
extern int g4390[];
f65bf(p4, p6, p8, p10, p12, p14, p16, p18)
char p6;
char p16;
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	l2 = 0;
L65cc:
	if (l2 >= g438e[0]) goto L65ec;
	if ((unsigned char)(*(char **)((char *)g4390 + (l2 << 1)))[20] > p4) goto L65ec;
	l2++;
	goto L65cc;
L65ec:
	l4 = g438e[0];
	goto L660f;
L65f4:
	rsi = g438e[l4];
	rdi = g4390[l4];
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,00ch,000h,0f3h,0a5h,0ffh,04eh,0fch
#endasm
L660f:
	if (l4 > l2) goto L65f4;
	if (l2 < 12) goto L6627;
L661d:
	f0aaa(0);
	goto L661d;
L6627:
	(*(char **)((char *)g4390 + (l2 << 1)))[20] = *(char *)&p4;
	(*(char **)((char *)g4390 + (l2 << 1)))[21] = p6;
	*(int *)(*(char **)((char *)g4390 + (l2 << 1))) = p8;
	*(int *)((*(char **)((char *)g4390 + (l2 << 1))) + 2) = p10;
	*(int *)((*(char **)((char *)g4390 + (l2 << 1))) + 4) = p12;
	*(int *)((*(char **)((char *)g4390 + (l2 << 1))) + 6) = p14;
	(*(char **)((char *)g4390 + (l2 << 1)))[22] = p16;
	strcpy((g4390[l2] + 8), p18);
	g438e[0]++;
}
