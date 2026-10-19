extern char g55c2[];
add_class_rating(idx, delta)
{
	int l2;
	l2 = ((unsigned char)g55c2[idx] + delta);
	l2 = (l2 >= 0 ? (l2 > 125 ? 125 : l2) : 0);
	g55c2[idx] = *(char *)&l2;
}
