extern char g019d[];
extern int g43b4;
extern int g500a;
extern int monster_group_count;
f87ae(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24)
{
	int l2;
	g500a = 2;
	if (p4 <= 0) goto L8802;
	if (p4 >= 6) goto L8802;
	l2 = 1;
	goto L87f7;
L87cd:
	f86aa(l2, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24);
	l2++;
L87f7:
	if (l2 <= monster_group_count) goto L87cd;
#asm
	db 0ebh,05bh
#endasm
L8802:
	f86aa(0, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24);
	if ((unsigned)g019d[g43b4] <= 0) goto L885d;
	f86aa(6, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24);
L885d:
	;
}
