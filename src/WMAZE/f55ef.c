extern int g4f86;
extern int g5034;
extern int party_x;
extern int party_y;
step_position(p4, p6)
{
	g5034 = 1;
	setmem(20192, 8, 0);
	g4f86 = 0;
	switch (p4) {
case 0:
	party_y += p6;
	break;
case 1:
	party_x += p6;
	break;
case 2:
	party_y -= p6;
	break;
case 3:
	party_x -= p6;
	break;
	}
}
