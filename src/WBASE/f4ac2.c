f4ac2(p4, p6, p8, p10, p12, p14, p16)
char p10;
char p12;
char p14;
char p16;
{
	f030b(p4, p6, p8);
	f23e3(p4, (unsigned char)p10, 2);
	f23e3(p4, (unsigned char)p12, 2);
	f030b(p4, p6, (p8 + 1));
	f23e3(p4, (unsigned char)p14, 2);
	f23e3(p4, (unsigned char)p16, 2);
}
