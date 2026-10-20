extern char g36e4[];
extern char g3717[];
extern int anim_cycle;
extern int g006a[];
extern int g007e[];
extern int g50fe[];
extern int g5112;
queue_effect_sprite(p4, p6)
{
	int l2;
	int l4;
	char l16[12];
	int l18;
	int l20;
	if (*(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))) != -1) goto L6769;
	return;
L6769:
	if ((anim_cycle != 1) || (*(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))) != 1)) goto L677d;
	g5112 = 1;
L677d:
	l2 = 0;
	l18 = 1;
	l4 = 0;
	switch (((p4 * 10) + *(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))))) {
case 0:
	l18 = 5;
	goto L6835;
case 1:
	l18 = 3;
	goto L6835;
case 2:
	l18 = 3;
	l4 = 1;
	goto L6835;
case 3:
case 11:
	l18 = 2;
	goto L6835;
case 4:
case 12:
	l18 = 2;
	l4 = 1;
	goto L6835;
case 5:
case 13:
	l18 = 1;
	goto L6835;
case 6:
case 14:
	l18 = 1;
	l4 = 1;
	goto L6835;
case 7:
case 15:
	*(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))) = -1;
	return;
case 10:
	l18 = 4;
	goto L6835;
	}
L6835:
	l16[0] = *(char *)&l18;
	l16[(0 + 1)] = 0;
	l20 = 30;
	switch (((p4 * 10) + p6)) {
case 13:
case 14:
	l20 = 9;
	goto L68ab;
case 11:
case 12:
	l20 = 19;
	goto L68ab;
case 10:
	l20 = 14;
	goto L68ab;
case 3:
case 4:
	l20 = 24;
	goto L68ab;
case 1:
case 2:
	l20 = 50;
	goto L68ab;
case 0:
	l20 = 29;
	goto L68ab;
	}
L68ab:
	add_sprite(l20, l2, ((unsigned char)g36e4[((314 * l2) + (l18 << 1))] + *(int *)((char *)g006a + ((p4 * 10) + (p6 << 1)))), (((unsigned char)g3717[((314 * l2) + l18)] + *(int *)((char *)g007e + ((p4 * 10) + (p6 << 1)))) - (p4 == 1 ? 8 : 0)), 72, 248, l4, l16);
	if (anim_cycle) goto L695b;
	(*(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))))++;
L695b:
	return;
}
