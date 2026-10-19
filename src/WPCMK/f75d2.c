extern char char_stats;
extern char g55a2;
extern char g55a3;
apply_sex_modifiers(p4)
{
	if (p4 != 1) goto L75ed;
	char_stats = (char)((unsigned char)char_stats - 2);
	g55a2++;
	g55a3++;
L75ed:
	;
}
