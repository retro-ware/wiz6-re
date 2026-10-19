extern int g363c;
fbbe7(p4, p6, p8)
{
	int l2;
	int l4;
	l2 = (p8 == 0 ? p4 : p6);
	l4 = (p8 == 0 ? p6 : p4);
	if (!l2) goto Lbc4d;
	f2881(((g363c * 10) + 20204), l2, 0);
	f2881(((g363c * 10) + 13304), l2, 0);
Lbc4d:
	if (!l4) goto Lbc8f;
	f2881(((g363c * 10) + 20204), l4, 1);
	f2881(((g363c * 10) + 13304), l4, 1);
Lbc8f:
	;
}
