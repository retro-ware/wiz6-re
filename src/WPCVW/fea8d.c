extern char g4515[];
extern char g4516[];
extern char g4517[];
extern char g4518[];
extern char g4519[];
extern char g4587[];
extern char g4590[];
fea8d(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	l2 = (unsigned char)g4515[(432 * p4)];
	l4 = (unsigned char)g4516[(432 * p4)];
	l10 = (unsigned char)g4517[(432 * p4)];
	l6 = (unsigned char)g4518[(432 * p4)];
	l8 = (unsigned char)g4519[(432 * p4)];
	g4590[(432 * p4)] = (char)(f09e2(6) + 5);
	l12 = 0;
	switch ((unsigned char)g4587[(432 * p4)]) {
case 1:
	l12 = fea25(p4, l2, 3, 3, 28);
	goto Lecf6;
case 2:
	l12 = fea25(p4, l4, 3, 3, 26);
	goto Lecf6;
case 3:
	l12 = fea25(p4, ((l2 + l6) / 2), 4, 3, 15);
	l12 += fea25(p4, ((l6 + l8) / 2), 4, 2, 14);
	goto Lecf6;
case 4:
	l12 = fea25(p4, ((l6 + l8) / 2), 4, 2, 7);
	l12 += fea25(p4, ((l2 + l10) / 2), 4, 2, 11);
	goto Lecf6;
case 6:
	l12 = fea25(p4, ((l2 + l6) / 2), 3, 3, 12);
	goto Lecf6;
case 5:
	l12 = fea25(p4, l2, 3, 3, 25);
	goto Lecf6;
case 7:
	l12 = fea25(p4, ((l2 + l4) / 2), 3, 3, 27);
	goto Lecf6;
case 9:
	l12 = fea25(p4, l2, 4, 2, 28);
	l12 += fea25(p4, l4, 4, 2, 26);
	goto Lecf6;
case 11:
	l12 = fea25(p4, ((l6 + l8) / 2), 3, 3, 1);
	goto Lecf6;
case 13:
	l12 = fea25(p4, ((l6 + l8) / 2), 4, 3, 9);
	l12 += fea25(p4, ((l6 + l8) / 2), 4, 2, 16);
	goto Lecf6;
	}
Lecf6:
	if ((unsigned char)g4590[(432 * p4)] <= l12) goto Led18;
#asm
	db 08ah,087h,090h,045h,02ah,0e4h,02bh,046h,0f4h,088h,087h,090h,045h,0ebh,005h
#endasm
Led18:
	;
#asm
led18:
	db 0c6h,087h,090h,045h,000h
#endasm
Led1d:
	;
}
