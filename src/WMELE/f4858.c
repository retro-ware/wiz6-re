extern char pic_slot_loaded[];
extern char pic_slot_monster[];
f4858(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	l8 = 0;
	switch (p4) {
case 9:
case 13:
case 27:
case 28:
case 32:
case 34:
case 45:
case 47:
case 50:
case 54:
	l8 = 1;
	goto L48b0;
	}
L48b0:
	l6 = -1;
	l2 = 4;
	goto L493a;
L48bd:
	l10 = 1;
	l4 = 0;
	goto L48eb;
L48c9:
	if ((unsigned char)pic_slot_monster[(l2 + l4)] != p4) goto L48e3;
	if (pic_slot_loaded[(l2 + l4)] == 1) goto L48e8;
L48e3:
	l10 = 0;
L48e8:
	l4++;
L48eb:
	if (l4 <= l8) goto L48c9;
	if (l10 != 1) goto L4900;
	return l2;
L4900:
	l12 = 1;
	l4 = 0;
	goto L4923;
L490c:
	if (!pic_slot_loaded[(l2 + l4)]) goto L4920;
	l12 = 0;
L4920:
	l4++;
L4923:
	if (l4 <= l8) goto L490c;
	if (l12 != 1) goto L4937;
	l6 = l2;
L4937:
	l2++;
L493a:
	if ((7 - l8) > l2) goto L48bd;
	if (l6 == -1) goto L4960;
	pic_slot_monster[l6] = 255;
	load_monster_pic_mele(p4, l6);
L4960:
	return l6;
}
