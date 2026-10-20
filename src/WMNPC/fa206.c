extern int g54b2;
extern int g54b4[];
extern int g5856[];
fa206()
{
	int l2;
	g54b2 = 0;
	l2 = 0;
La217:
	if (g5856[l2] > 0) {
	g54b4[g54b2] = l2;
	g54b2++;
	}
	l2++;
	if (l2 < 30) goto La217;
}
