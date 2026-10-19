extern char char_sex;
extern int class_eligible[];
compute_eligible_classes()
{
	int l2;
	l2 = 0;
L727f:
	switch (l2) {
case 0:
	check_class_eligible(l2, 20957, 0);
	goto L73d7;
case 1:
	check_class_eligible(l2, 20966, 0);
	goto L73d7;
case 2:
	check_class_eligible(l2, 20975, 0);
	goto L73d7;
case 3:
	check_class_eligible(l2, 20984, 0);
	goto L73d7;
case 4:
	check_class_eligible(l2, 20993, 0);
	goto L73d7;
case 5:
	check_class_eligible(l2, 21002, 0);
	goto L73d7;
case 6:
	check_class_eligible(l2, 21011, 0);
	goto L73d7;
case 7:
	check_class_eligible(l2, 21020, 0);
	goto L73d7;
case 8:
	if (char_sex != 1) goto L733f;
	check_class_eligible(l2, 21029, 0);
	goto L734c;
L733f:
	class_eligible[l2] = 0;
L734c:
	goto L73d7;
case 9:
	check_class_eligible(l2, 21038, 0);
	goto L73d7;
case 10:
	check_class_eligible(l2, 21047, 0);
	goto L73d7;
case 11:
	check_class_eligible(l2, 21056, 0);
	goto L73d7;
case 12:
	check_class_eligible(l2, 21065, 0);
	goto L73d7;
case 13:
	check_class_eligible(l2, 21074, 0);
	goto L73d7;
	}
L73d7:
	l2++;
	if (l2 <= 13) goto L727f;
}
