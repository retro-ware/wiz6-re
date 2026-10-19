extern char g51d1;
extern int g5856[];
fb805()
{
	int l2;
	int l4;
	char l44[40];
	l4 = 0;
	if ((unsigned)g51d1 <= 0) goto Lb8c7;
	access_scenario_record(7, l44, (unsigned char)g51d1, 0);
	l2 = 0;
Lb837:
	if ((l44[((l2 * 6) + 4)] != 2) || (*(int *)(l44 + (l2 * 6)) <= 0)) goto Lb8b9;
Lb852:
	if ((l4 >= 29) || (*(int *)(l44 + ((l2 * 6) + 2)) <= 0)) goto Lb8b9;
	if (random(100) >= (unsigned char)l44[((l2 * 6) + 5)]) goto Lb8a2;
	g5856[l4] = *(int *)(l44 + (l2 * 6));
	l4++;
Lb8a2:
	(*(int *)(l44 + (l2 * 6)))++;
	(*(int *)(l44 + ((l2 * 6) + 2)))--;
	goto Lb852;
Lb8b9:
	l2++;
	if (l2 < 6) goto Lb837;
Lb8c7:
	g5856[l4] = 0;
	fa206();
	fa247();
}
