extern int g4f9a;
fd6f6(p4, p6, p8, p10, p12, p14, p16)
char *p4;
char *p6;
{
	switch (g4f9a) {
case 0:
	*(int *)p4 += p14;
	*(int *)p6 += p16;
	goto Ld75a;
case 1:
	*(int *)p4 += p16;
	*(int *)p6 -= p14;
	goto Ld75a;
case 2:
	*(int *)p4 -= p14;
	*(int *)p6 -= p16;
	goto Ld75a;
case 3:
	*(int *)p4 -= p16;
	*(int *)p6 += p14;
	goto Ld75a;
	}
Ld75a:
	fd506(p8, p10, p12, *(int *)p4, *(int *)p6);
}
