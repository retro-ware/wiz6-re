extern int g363a;
extern int g363c;
main()
{
	int l2;
	g363a = 0;
L1339:
	switch (g363a) {
case 8:
	f1124(3, 0);
case 0:
case 1:
case 2:
	l2 = ovloader(1524);
	goto L1458;
case 7:
case 24:
	f1124(1, 0);
case 4:
	l2 = ovloader(1530);
	goto L1458;
case 25:
	f1124(2, g363c);
	g363a = 5;
case 5:
case 6:
case 23:
	l2 = ovloader(1536);
	goto L1458;
case 10:
case 11:
case 14:
	l2 = ovloader(1542);
	goto L1458;
case 12:
	l2 = ovloader(1548);
	goto L1458;
case 13:
	l2 = ovloader(1554);
	goto L1458;
case 15:
case 21:
	l2 = ovloader(1560);
	goto L1458;
case 16:
	l2 = ovloader(1566);
	goto L1458;
case 17:
case 22:
	l2 = ovloader(1572);
	goto L1458;
case 18:
	l2 = ovloader(1578);
	goto L1458;
case 19:
case 20:
	l2 = ovloader(1584);
	goto L1458;
case 3:
	f0000(0);
	exit(0);
	goto L1458;
	}
L1458:
	f3640();
	goto L1339;
#asm
	db 08bh,0e5h,05dh,0c3h
#endasm
}
