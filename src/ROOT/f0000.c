extern int g07d2[];
extern int g07d4[];
extern int g080a[];
extern int g080c[];
extern int g0842;
extern int g0844;
extern int g0846;
f0000(p4)
{
	int l2;
	int l4;
	l2 = 0;
	switch (p4) {
case 0:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
	l4 = 0;
L0016:
	if (*(long *)((char *)g07d2 + (l4 << 2)) == 0L) goto L003b;
	lfree(*(int *)((char *)g07d2 + (l4 << 2)), *(int *)((char *)g07d4 + (l4 << 2)));
L003b:
	if (*(long *)((char *)g080a + (l4 << 2)) == 0L) goto L0060;
	lfree(*(int *)((char *)g080a + (l4 << 2)), *(int *)((char *)g080c + (l4 << 2)));
L0060:
	l4++;
	if (l4 < 14) goto L0016;
case 9:
case 10:
	close(g0842);
case 8:
	close(g0844);
case 3:
case 4:
case 5:
case 6:
case 7:
	l2 = 1;
	if (g0846 != 1) goto L008a;
	f36c4();
L008a:
case 1:
case 2:
	goto L00c5;
	}
L00c5:
	f3640();
	if (l2 != 1) goto L00d1;
	f1c3b();
L00d1:
	;
}
