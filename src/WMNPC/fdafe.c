extern int party_facing;
fdafe(p4, p6, p8, p10, p12, p14, p16)
char *p4;
char *p6;
{
	switch (party_facing) {
case 0:
	*(int *)p4 += p14;
	*(int *)p6 += p16;
	goto Ldb62;
case 1:
	*(int *)p4 += p16;
	*(int *)p6 -= p14;
	goto Ldb62;
case 2:
	*(int *)p4 -= p14;
	*(int *)p6 -= p16;
	goto Ldb62;
case 3:
	*(int *)p4 -= p16;
	*(int *)p6 += p14;
	goto Ldb62;
	}
Ldb62:
	fd90e(p8, p10, p12, *(int *)p4, *(int *)p6);
}
