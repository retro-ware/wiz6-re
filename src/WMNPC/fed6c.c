extern int g3646;
extern int g4ec8[];
extern int g4f86;
extern int g4f9a;
extern int g4fac;
fed6c()
{
	int l2;
	int l4;
	int l6;
	l2 = 0;
Led77:
	switch (l2) {
case 3:
	l4 = 346;
	l6 = (g3646 + 1);
	goto Leded;
case 1:
	l4 = 349;
	l6 = (g3646 + 1);
	goto Leded;
case 4:
	l4 = 352;
	l6 = (g3646 + 1);
	goto Leded;
case 0:
	l4 = 361;
	l6 = (g4f9a + 1);
	goto Leded;
case 2:
	l4 = 355;
	l6 = ((g3646 * g4f86) + 1);
	goto Leded;
case 5:
	l4 = 358;
	l6 = (g3646 + 1);
	goto Leded;
	}
Leded:
	if (*(int *)((char *)g4ec8 + (l2 << 2)) <= 0) goto Lee03;
	l4 += l6;
Lee03:
	f36ac(l4, 0, -1);
	l2++;
	if (l2 < 6) goto Led77;
	f36a0(g4fac);
}
