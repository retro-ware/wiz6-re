extern char char_stats[];
extern int bonus_points;
extern int class_eligible[];
/* Check stats against a class minimum string ('A'=0); with apply=1 raise stats paying bonus points. */
check_class_eligible(cls, minimums, apply)
char *minimums;
{
	int l2;
	int points;
	register int stat;
	points = bonus_points;
	stat = 0;
L7222:
	l2 = (unsigned char)char_stats[stat];
L722b:
	if ((*(minimums + stat) + -65) <= l2) goto L7252;
	l2++;
	points--;
	if (apply != 1) goto L7250;
	char_stats[stat]++;
	bonus_points--;
	draw_stats();
L7250:
	goto L722b;
L7252:
	stat++;
	if (stat < 8) goto L7222;
	class_eligible[cls] = (points >= 0 ? 1 : 0);
}
