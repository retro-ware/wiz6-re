extern char g4591[];
extern char g4592[];
extern int pc_carried[];
extern int pc_max_load[];
extern int pc_stamina_max[];
get_load_category(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	long l18;
	register int rsi;
	register int rdi;
	l14 = 0;
	l12 = 0;
	l10 = 0;
	l8 = (unsigned char)g4591[(432 * p4)];
	l6 = (unsigned char)g4592[(432 * p4)];
	l4 = 0;
	l2 = 9;
	l18 = (((long)*(int *)((char *)pc_carried + (432 * p4)) * 100) / (long)*(int *)((char *)pc_max_load + (432 * p4)));
	if (l18 > 50L) goto L5201;
	goto L52f9;
L5201:
	if (l18 > 66L) goto L5232;
	l12 = 5;
	l10 = 10;
	if (l8 <= 3) goto L5224;
	l8 = 3;
L5224:
	if (l6 <= 3) goto L522f;
	l6 = 3;
L522f:
	goto L52f9;
L5232:
	if (l18 > 75L) goto L5281;
	l14 = 1;
	l12 = 10;
	l10 = 20;
	if (l8 <= 2) goto L525a;
	l8 = 2;
L525a:
	if (l6 <= 2) goto L5265;
	l6 = 2;
L5265:
	l4 = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 100);
	l2 = -7;
	goto L52f9;
L5281:
	if (l18 > 90L) goto L52c6;
	l14 = 2;
	l12 = 20;
	l10 = 40;
	l8 = 1;
	l6 = 1;
	l4 = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 50);
	l2 = -5;
	goto L52f9;
L52c6:
	l14 = 4;
	l12 = 40;
	l10 = 80;
	l8 = 1;
	l6 = 1;
	l4 = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 25);
	l2 = -4;
L52f9:
	rsi = &l14;
	rdi = 21802;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h,0b8h,02ah,055h
#endasm
}
