extern char g4326[];
extern int g4362[];
extern int g4390[];
fba00()
{
	int l2;
	int l4;
	int l6;
	l2 = 0;
Lba0b:
	free(g4390[l2]);
	l2++;
	if (l2 < 12) goto Lba0b;
	l2 = 0;
Lba2a:
	g4326[l2] = 0;
	l2++;
	if (l2 < 3) goto Lba2a;
	l4 = 0;
Lba42:
	l6 = 0;
Lba47:
	*(int *)((char *)g4362 + ((l4 * 10) + (l6 << 1))) = 0;
	l6++;
	if (l6 < 5) goto Lba47;
	l4++;
	if (l4 < 2) goto Lba42;
}
