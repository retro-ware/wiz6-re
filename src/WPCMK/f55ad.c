extern char char_skills[];
extern char g55ae[];
extern char g55b5[];
extern char g55ba[];
extern int g5670[];
extern int g5684[];
extern int g5692[];
extern int g569c[];
set_class_skill_masks(p4, p6, p8, p10)
char *p4;
char *p6;
char *p8;
char *p10;
{
	int l2;
	for (l2 = 0; strlen(p4) > l2; l2++) {
	g5670[l2] = ((*(p4 + l2) == 49) || ((unsigned)char_skills[l2] > 0) ? 1 : 0);
	}
	for (l2 = 0; strlen(p6) > l2; l2++) {
	g5684[l2] = ((*(p6 + l2) == 49) || ((unsigned)g55ae[l2] > 0) ? 1 : 0);
	}
	for (l2 = 0; strlen(p8) > l2; l2++) {
	g5692[l2] = ((*(p8 + l2) == 49) || ((unsigned)g55b5[l2] > 0) ? 1 : 0);
	}
	for (l2 = 0; strlen(p10) > l2; l2++) {
	g569c[l2] = ((*(p10 + l2) == 49) || ((unsigned)g55ba[l2] > 0) ? 1 : 0);
	}
}
