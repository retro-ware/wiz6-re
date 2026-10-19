extern char char_class;
extern char char_race;
extern char char_stats;
extern char g5563;
extern char g5564[];
extern char g556a;
extern char g556c[];
extern char g556d[];
extern char g556f;
extern char g559d;
extern char g559f;
extern char g55a0;
extern char g55a1;
extern char g55ad;
extern char g55c1;
extern char g55d0[];
extern char g55d2;
extern int g5560;
init_class_race_modifiers()
{
	int l2;
	int l4;
	switch ((unsigned char)char_class) {
case 0:
	init_ratings_from_string(21308);
	goto L848d;
case 4:
case 8:
	init_ratings_from_string(21323);
	goto L848d;
case 10:
	init_ratings_from_string(21338);
	goto L848d;
case 11:
	init_ratings_from_string(21353);
	goto L848d;
case 13:
	init_ratings_from_string(21368);
	goto L848d;
case 1:
case 5:
	init_ratings_from_string(21383);
	goto L848d;
case 7:
	init_ratings_from_string(21398);
	goto L848d;
case 2:
case 9:
	init_ratings_from_string(21413);
	goto L848d;
case 12:
	init_ratings_from_string(21428);
	goto L848d;
case 3:
case 6:
	init_ratings_from_string(21443);
	goto L848d;
	}
L848d:
	switch ((unsigned char)char_race) {
case 0:
	add_class_rating(11, 20);
	goto L85d8;
case 2:
case 4:
	add_class_rating(6, (((unsigned char)g559f / 5) * 5));
case 3:
	add_class_rating(12, (((unsigned char)g559f / 5) * 5));
	goto L85d8;
case 1:
	add_class_rating(9, 20);
	goto L85d8;
case 5:
	add_class_rating(12, 25);
	add_class_rating(4, 25);
	add_class_rating(7, 25);
	add_class_rating(10, 25);
	add_class_rating(11, 25);
	goto L85d8;
case 6:
case 7:
	add_class_rating(10, 25);
	add_class_rating(8, 10);
	add_class_rating(3, -20);
	goto L85d8;
case 8:
	add_class_rating(7, 15);
	add_class_rating(4, 20);
case 9:
	add_class_rating(3, 20);
	goto L85d8;
case 10:
	add_class_rating(12, 25);
	add_class_rating(3, 15);
	goto L85d8;
	}
L85d8:
	if ((unsigned)g559f <= 15) goto L85fb;
	add_class_rating(6, 5);
	add_class_rating(11, 5);
L85fb:
	if ((unsigned)g559d <= 15) goto L8610;
	add_class_rating(9, 5);
L8610:
	if ((unsigned)g55a1 <= 15) goto L8633;
	add_class_rating(7, 5);
	add_class_rating(4, 5);
L8633:
	l2 = 0;
L8638:
	g556d[(l2 << 4)] = 0;
	g556c[(l2 << 4)] = 0;
	l4 = 0;
L8651:
	g5564[((l2 << 4) + l4)] = 0;
	l4++;
	if (l4 < 8) goto L8651;
#asm
	db 08bh,046h,0feh,0b9h,004h,000h,0d3h,0e0h,08bh,0d8h,0c6h,087h,06eh,055h,000h,0c6h
	db 087h,062h,055h,002h,0c6h,087h,063h,055h,002h,0c7h,087h,060h,055h,000h,000h,0c6h
	db 087h,06fh,055h,020h
#endasm
	l2++;
	if (l2 < 2) goto L8638;
	l2 = ((unsigned char)g55ad / 5);
	l4 = ((unsigned char)g55c1 / 5);
	if ((char_class != 13) && (char_class != 12)) goto L86e2;
	g5563 = (char)((l2 / 3) + 2);
	g556f |= 64;
	g556a = (char)(l4 + 5);
	goto L8706;
L86e2:
	if (l2 <= 0) goto L86fa;
	g5563 = (char)((l2 / 4) + 1);
	g556f |= 64;
L86fa:
	if (l4 <= 0) goto L8706;
	g556a = *(char *)&l4;
L8706:
	if ((unsigned)char_stats <= 15) goto L8711;
	g5560++;
L8711:
	if ((unsigned)char_stats <= 17) goto L871c;
	g5560++;
L871c:
	if ((unsigned)g55a0 <= 15) goto L8728;
#asm
	db 080h,006h,06eh,055h,0fbh
#endasm
L8728:
	if ((unsigned)g55a0 <= 17) goto L8739;
#asm
	db 080h,006h,06eh,055h,0fbh,080h,006h,07eh,055h,0fbh
#endasm
L8739:
	g55d0[0] = 10;
	if ((unsigned)g55a1 <= 15) goto L8749;
	g55d0[0]--;
L8749:
	if ((unsigned)g55a1 <= 17) goto L8754;
	g55d0[0]--;
L8754:
	if (char_race != 5) goto L8763;
	g55d0[0] -= 2;
L8763:
	g55d2 = 0;
	l2 = 3;
L876d:
	g55d0[l2] = g55d0[0];
	l2++;
	if (l2 < 8) goto L876d;
}
