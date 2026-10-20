reduce_field6(p4, p6)
char *p4;
{
	*(int *)(p4 + 6) -= p6;
	if (*(int *)(p4 + 6) < 0) {
	*(int *)(p4 + 6) = 0;
	}
}
