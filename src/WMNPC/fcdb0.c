extern int g6a9e;
extern int g6aa0;
extern int g6aa2;
fcdb0(p4)
{
	if (p4 >= g6a9e) goto Lcdcc;
	return ((p4 * 5) + g6aa0);
Lcdcc:
	return (((p4 - g6a9e) * 5) + g6aa2);
}
