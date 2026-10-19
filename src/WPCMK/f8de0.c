extern char g558c;
extern char g558d;
extern char g558e;
extern char g558f;
extern char g5590;
extern char g5591;
set_six_ratings(p4, p6, p8, p10, p12, p14)
{
	g558c = (char)(p4 < 1 ? 1 : p4);
	g558d = (char)(p6 < 1 ? 1 : p6);
	g558e = (char)(p8 < 1 ? 1 : p8);
	g558f = (char)(p10 < 1 ? 1 : p10);
	g5590 = (char)(p12 < 1 ? 1 : p12);
	g5591 = (char)(p14 < 1 ? 1 : p14);
}
