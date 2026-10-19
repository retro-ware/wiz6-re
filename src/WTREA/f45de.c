extern char g36e4[];
extern char g3717[];
animate_chest_lid(p4)
{
	int l2;
	char l14[12];
	int l16;
	l2 = 0;
	switch (p4) {
case 0:
	l16 = 5;
	goto L4652;
case 1:
	l16 = 3;
	goto L4652;
case 2:
	l16 = 3;
	l2 = 1;
	goto L4652;
case 3:
	l16 = 2;
	goto L4652;
case 4:
	l16 = 2;
	l2 = 1;
	goto L4652;
case 5:
	l16 = 1;
	goto L4652;
case 6:
	l16 = 1;
	l2 = 1;
	goto L4652;
case 7:
	return -1;
	}
L4652:
	l14[0] = *(char *)&l16;
	l14[(0 + 1)] = 0;
	drv_draw_text(0, (unsigned char)g36e4[(l16 << 1)], ((unsigned char)g3717[l16] + -8), 72, 248, l2, 0, l14);
	return (p4 + 1);
}
