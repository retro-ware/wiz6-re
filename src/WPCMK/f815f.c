add_starting_items(p4, p6, p8, p10, p12)
{
	int l12[6];
	l12[0] = p4;
	l12[1] = p6;
	l12[2] = p8;
	l12[3] = p10;
	l12[4] = p12;
	l12[5] = 0;
L8188:
	if (l12[l12[5]] > 0) {
	add_starting_item(l12[l12[5]]);
	}
	l12[5]++;
	if (l12[5] < 5) goto L8188;
}
