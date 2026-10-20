extern char g55a3;
extern char g55d8[];
f7e5f(p4, p6)
{
	g55d8[p4] = (char)(40 - ((((unsigned char)g55a3 - p6) < 0 ? -((unsigned char)g55a3 - p6) : ((unsigned char)g55a3 - p6)) << 2));
}
