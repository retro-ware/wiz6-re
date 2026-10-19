fc0d9(p4, p6)
{
	char x0[2];
	if (strncmp(p4, p6, strlen(p6))) goto Lc110;
	fbb01(p4, (strlen(p6) - 1));
	return 0;
Lc110:
	return -1;
}
