faae4(p4, p6)
{
	int l2;
	l2 = 0;
Laaef:
	if ((l2 = npc_choose_member_item(p4, p6, 1517, l2)) == -1) goto Lab25;
	if (fa805(p4, p6, l2) != 1) goto Lab23;
	return 1;
Lab23:
	goto Laaef;
Lab25:
	return 0;
}
