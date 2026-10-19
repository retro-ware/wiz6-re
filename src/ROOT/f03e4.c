f03e4(p4)
char *p4;
{
	p4[6] = 0;
	p4[7] = (char)((unsigned char)(((unsigned char)p4[7] + 1)) % (unsigned char)p4[1]);
}
