extern int g4f9a;
f7d0b(p4, p6, p8, p10, p12, p14, p16)
char *p4;
char *p6;
{
	switch (g4f9a) {
case 0:
	*(int *)p4 += p14;
	*(int *)p6 += p16;
	goto L7d6f;
case 1:
	*(int *)p4 += p16;
	*(int *)p6 -= p14;
	goto L7d6f;
case 2:
	*(int *)p4 -= p14;
	*(int *)p6 -= p16;
	goto L7d6f;
case 3:
	*(int *)p4 -= p16;
	*(int *)p6 += p14;
	goto L7d6f;
	}
L7d6f:
	f7b1b(p8, p10, p12, *(int *)p4, *(int *)p6);
}
