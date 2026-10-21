extern char pc_rank[];
extern int pc_level[];
ff6e6(p4)
{
	int l2;
	int l4;
	int l6;
	l4 = 0;
	l2 = 0;
Lf6f6:
	switch (l2) {
case 0:
	l6 = 2;
	goto Lf747;
case 1:
	l6 = 4;
	goto Lf747;
case 2:
	l6 = 7;
	goto Lf747;
case 3:
	l6 = 10;
	goto Lf747;
case 4:
	l6 = 14;
	goto Lf747;
case 5:
	l6 = 18;
	goto Lf747;
case 6:
	l6 = 24;
	goto Lf747;
	}
Lf747:
	if (*(int *)((char *)pc_level + (432 * p4)) >= l6) {
	l4++;
	}
	l2++;
	if (l2 < 7) goto Lf6f6;
Lf76c:
	if ((unsigned char)pc_rank[(432 * p4)] < l4) {
	pc_rank[(432 * p4)] = l4;
	}
}
