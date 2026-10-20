fd3f3(p4, p6, p8)
char *p8;
{
	int l2;
	for (l2 = 0; l2 < p6; l2++) {
	get_message((p4 + l2), (p8 + (l2 * 10)));
	}
}
