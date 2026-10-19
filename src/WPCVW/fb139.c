fb139(p4, p6, p8, p10)
char *p4;
char p10;
{
	(p4 + ((((unsigned char)*p4 * p8) + p6) << 1))[16] = p10;
}
