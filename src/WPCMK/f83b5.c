extern char g55c2[];
init_ratings_from_string(p4)
char *p4;
{
	int l2;
	register int rsi;
	for (l2 = 0; l2 < 14; l2++) {
	g55c2[l2] = 0;
	rsi = l2;
	add_class_rating(rsi, ((*(p4 + rsi) << 2) + -260));
	}
}
