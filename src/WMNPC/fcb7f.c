#asm
	extrn random_:near
#endasm
extern char g4550[];
extern int g5274;
extern int g5894;
extern int g5896;
extern int g5898;
extern int g589a;
extern int g589c;
extern int g589e;
extern int g58a0;
extern int g58a2;
extern int g58b4;
extern int g58c2;
extern int g6a98;
extern int g6a9a;
extern int g6a9c;
extern int message_delay;
fcb7f()
{
	g5898 = -1;
	g5894 = -1;
	g5896 = 0;
	switch (g589a) {
case 0:
	fc95b(g6a98, 20520);
	break;
case 1:
	if (g6a9a > 0) {
	fc95b(g6a9a, 20521);
	f5a1e(message_delay);
	}
	break;
case 2:
	fc95b(1608, 20522);
	g5898 = g58a0;
	g5894 = g589c;
	g5896 = g589e;
	g58b4 = 1;
	fbb28(g58a2);
	break;
case 3:
	fc95b(1609, 20523);
	g58a2 = -1;
	break;
case 4:
	fc95b(1610, 20524);
	break;
case 5:
	fc95b(1611, 20525);
	break;
case 6:
	fc95b(1612, 20526);
	g4550[((432 * g6a9c) + g5274)] = (char)(g4550[((432 * g6a9c) + g5274)] - (random(5) + 1));
	if (random(2) == 1) {
	g58c2 = 1;
	}
	break;
case 7:
	fc95b(1613, 20527);
	g5894 = -1;
	g5896 = 0;
	g5898 = -1;
	g589c = -1;
	g589e = 0;
	g58a0 = -1;
	g58a2 = -1;
	break;
case 8:
	fc95b(1614, 20528);
	break;
case 9:
	fc95b(1615, 20529);
	if (random(2) != 1) goto Lcd1f;
	if (g4550[((432 * g6a9c) + g5274)] >= 50) goto Lcd1f;
#asm
	db 08ah,087h,050h,045h,098h,08bh,0c8h,051h,0b8h,003h,000h,050h
	call random_
	db 059h,059h,003h,0c1h,040h,050h,0b8h,0b0h,001h,0f7h,02eh,09ch,06ah,08bh,0c8h,003h
	db 006h,074h,052h,08bh,0d8h,058h,088h,087h,050h,045h
#endasm
Lcd1f:
	break;
	}
}
