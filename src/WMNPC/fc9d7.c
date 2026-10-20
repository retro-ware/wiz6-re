extern int g5894;
extern int g5896;
extern int g5898;
extern int g589a;
extern int g589c;
extern int g589e;
extern int g58a0;
extern int g58a2;
extern int g58a6;
extern int g58b2;
extern int g58b4;
extern int g58d0;
extern int g58d2;
extern int g58d4;
npc_answer_topic()
{
	char x0[80];
	int l82;
	char x82[78];
	int l162;
	if ((g5898 == -1) && (g58b2 == 1)) {
	g5898 = 1;
	}
	if (g58d0 == -1) goto Lca73;
	fbe7a(g5894, g5896, &l82);
	fc115(&l82);
	get_message(1600, &l162);
	replace_char_with_string(&l162, &l82, 94);
	fc7d9(&l162, 5);
	fbe7a(g58d0, g58d2, &l82);
	fc115(&l82);
	fc95b(1601, &l82);
	return -1;
Lca73:
	if ((g589a != -1) || (g5894 != -1)) goto Lcad4;
	if (g5898 == -1) goto Lcaa5;
	fc95b(1602, ((g5898 * 10) + 24746));
	goto Lcacf;
Lcaa5:
	if (random(2)) goto Lcac1;
	fc95b(1603, 20516);
	goto Lcacf;
Lcac1:
	fc95b(1604, 20517);
Lcacf:
	return -1;
Lcad4:
	if (g58d4 == -1) goto Lcb38;
	if (g5894 != -1) {
	fbe7a(g5894, 1, &l82);
	fc115(&l82);
	fc95b(1605, &l82);
	g58a0 = 1;
	g589c = g5894;
	g589e = g5896;
	g58a2 = 1;
	} else {
	fc95b(1606, 20518);
	}
	return -1;
Lcb38:
	if ((g589a != -1) || (g5898 != -1)) goto Lcb79;
	if (g5894 == -1) goto Lcb65;
	g58b4 = 1;
	g58a6 = 1;
	g5898 = 1;
	return 0;
Lcb65:
	fc95b(1607, 20519);
	return -1;
Lcb79:
	return 0;
}
