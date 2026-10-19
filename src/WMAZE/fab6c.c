extern char g453a[];
extern char g4586[];
extern char g4589[];
extern int g4400[];
extern int g4404[];
extern int g4fca;
fab6c(p4, p6, p8, p10)
{
	char x0[78];
	int l80;
	char x80[3];
	int l85;
	char x85[3];
	int l90;
	if (!p8) goto Lab9c;
	if (f09e2(100) <= (unsigned char)g453a[((432 * p4) + p8)]) goto Lac1c;
Lab9c:
	if ((unsigned char)g4589[(432 * p4)] >= p10) goto Lac1c;
	g4589[(432 * p4)] = *(char *)&p10;
	if (p10 < 3) goto Labd6;
	*(int *)((char *)g4400 + (432 * p4)) = 0;
	*(int *)((char *)g4404 + (432 * p4)) = 0;
	f0aaa(((unsigned char)g4586[(432 * p4)] + 8));
Labd6:
	f075b(p6, &l80);
	*(char *)&l85 = 0;
	*(char *)&l90 = 0;
	faa50(p4, &l80, &l85, &l90, 1, 6, 0, 0);
	f4ba8(p4);
	f533b(g4fca);
Lac1c:
	;
}
