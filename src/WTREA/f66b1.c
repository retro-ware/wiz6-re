extern int chest_trap;
/* Pick a random trap from the chest's trap bitset and store its name. */
pick_chest_trap(chest)
{
	int l2;
	int l4;
	chest_trap = 0;
	l2 = (random(100) + 1);
	l4 = 0;
L66ce:
	if (l2 <= 0) goto L670a;
	if (l4 >= 100) goto L670a;
	chest_trap++;
	if (chest_trap <= 15) goto L66ef;
	chest_trap = 0;
	l4++;
L66ef:
	if (test_bit((chest + 36), chest_trap) != 1) goto L6708;
	l2--;
L6708:
	goto L66ce;
L670a:
	get_message((chest_trap + 5300), 20682);
	strcpy(20702, 20682);
}
