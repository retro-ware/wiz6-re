f030b(p4, p6, p8)
char *p4;
{
	p4[6] = (char)(p6 % (unsigned char)*p4);
	p4[7] = (char)(p8 % (unsigned char)p4[1]);
}
