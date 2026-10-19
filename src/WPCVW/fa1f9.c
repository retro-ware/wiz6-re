extern char pc_sex[];
extern int class_allowed[];
/* Compute which of the 14 classes member p4 qualifies for (g57e0). */
calc_allowed_classes(p4)
{
	int l2;
	l2 = 0;
La204:
	switch (l2) {
case 0:
	check_class_reqs(p4, l2, 20486);
	goto La356;
case 1:
	check_class_reqs(p4, l2, 20495);
	goto La356;
case 2:
	check_class_reqs(p4, l2, 20504);
	goto La356;
case 3:
	check_class_reqs(p4, l2, 20513);
	goto La356;
case 4:
	check_class_reqs(p4, l2, 20522);
	goto La356;
case 5:
	check_class_reqs(p4, l2, 20531);
	goto La356;
case 6:
	check_class_reqs(p4, l2, 20540);
	goto La356;
case 7:
	check_class_reqs(p4, l2, 20549);
	goto La356;
case 8:
	if (pc_sex[(432 * p4)] != 1) goto La2c3;
	check_class_reqs(p4, l2, 20558);
	goto La2d0;
La2c3:
	class_allowed[l2] = 0;
La2d0:
	goto La356;
case 9:
	check_class_reqs(p4, l2, 20567);
	goto La356;
case 10:
	check_class_reqs(p4, l2, 20576);
	goto La356;
case 11:
	check_class_reqs(p4, l2, 20585);
	goto La356;
case 12:
	check_class_reqs(p4, l2, 20594);
	goto La356;
case 13:
	check_class_reqs(p4, l2, 20603);
	goto La356;
	}
La356:
	l2++;
	if (l2 <= 13) goto La204;
}
