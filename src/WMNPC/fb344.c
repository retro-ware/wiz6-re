#asm
	extrn random_:near
#endasm
extern char g451a[];
extern char g4550[];
extern char g51c4[];
extern char g51cc;
extern char g51d3;
extern int g4338;
extern int g433a;
extern int g4354;
extern int g51b0;
extern int g5224;
extern int g5274;
extern int g5276;
extern int g527a;
extern int g52d0;
extern int g5892;
extern int game_state;
extern int party_count;
extern int return_cmd;
fb344()
{
	int l2;
	int l4;
	int l6;
	char x6[2];
	int l10;
	int l26[8];
	int l28;
	char x28[18];
	int l48;
	int l50;
	char x50[4];
	g5276 = 0;
	g5892 = 0;
	for (l6 = 0; l6 <= 7; l6++) {
	l26[l6] = 1;
	}
	l10 = -1;
	l6 = 0;
	get_message(1510, &l48);
	l28 = create_window(0, 19, 19, 5, 18, -4, 0, 0);
	if (g51b0 > 0) {
	f5c61(g51b0, 0);
	}
	l50 = 0;
Lb3c9:
	g527a = 0;
	if (g5224 > 0) {
	play_sound(g5224);
	}
	l2 = 0;
Lb3e3:
	if (((unsigned)g51c4[l2] <= 0) || (f7038(l50, (unsigned char)g51c4[l2]) != 1)) goto Lb422;
	if (g5276 == 1) {
	f56a1(1);
	}
	destroy_window(l28, 0);
	return;
Lb422:
	l2++;
	if (l2 < 8) goto Lb3e3;
	fill_window(l28, 32, 3, 0);
	f541a(&l48, 0);
	l50 = -1;
	refresh_all_windows();
	l6 = f5e0c(l28, 1530, l26, 1, 1, 6, 3, 5, 0, 0);
	switch (l6) {
case 0:
	if (((l50 = f62ee(1512, 1)) < 0) || (!fb2fd(l50))) goto Lb4e0;
	if (((g4550[((432 * l50) + g5274)] + (unsigned char)g451a[(432 * l50)]) + g52d0) <= 0) goto Lb4d8;
	fd674(l50);
	goto Lb4e0;
Lb4d8:
	fa645(1540);
Lb4e0:
	goto Lb6ac;
case 1:
	if (((l50 = f62ee(1501, 1)) < 0) || (!fb2fd(l50))) goto Lb53e;
	if (((g4550[((432 * l50) + g5274)] + (unsigned char)g451a[(432 * l50)]) + g52d0) <= 0) goto Lb536;
	faeb5(l50);
	goto Lb53e;
Lb536:
	fa645(1540);
Lb53e:
	goto Lb6ac;
case 2:
	if (((l50 = f62ee(1514, 1)) >= 0) && (fb2fd(l50))) {
	f9edb(l28, l50);
	}
	goto Lb6ac;
case 3:
	if (((l50 = f62ee(1515, 1)) >= 0) && (fb2fd(l50))) {
	f9e1e(l28, l50);
	}
	goto Lb6ac;
case 4:
	if (((l50 = f62ee(1519, 1)) >= 0) && (fb2fd(l50))) {
	f5382(l50);
	}
	goto Lb6ac;
case 5:
	if (((l50 = f62ee(1511, 1)) >= 0) && (fb2fd(l50))) {
	do_npc_pilfer(l50);
	}
	goto Lb6ac;
case 6:
	l2 = 0;
	goto Lb651;
Lb5f6:
	if (g4550[((432 * l2) + g5274)] > 10) {
	g4550[((432 * l2) + g5274)] = (char)(g4550[((432 * l2) + g5274)] / 5);
	}
	if ((l4 = (g4550[((432 * l2) + g5274)] - (random(5) + 5))) < -100) {
	l4 = -100;
	}
	g4550[((432 * l2) + g5274)] = *(char *)&l4;
	l2++;
Lb651:
	if (l2 < party_count) goto Lb5f6;
	g433a = (unsigned char)g51cc;
	g4338 = 1;
	g4354 = 0;
	g5276 = 0;
	game_state = 10;
	return_cmd = 18;
	l6 = 7;
	goto Lb6ac;
case 7:
	g5276 = 1;
	goto Lb6ac;
	}
Lb6ac:
	if (((l50 < 0) || ((party_count - 1) < l50)) || (!random(4))) {
	l50 = random(party_count);
	}
	if (((g4550[((432 * l50) + g5274)] + (unsigned char)g451a[(432 * l50)]) + g52d0) >= 0) goto Lb7ac;
	if (!((unsigned char)g51d3 & 16)) goto Lb70a;
Lb70a:
	;
#asm
lb70a:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0ceh,08bh,0d8h,08ah,087h,01ah,045h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h,003h,006h,0d0h,052h,003h,01eh,074h,052h,080h,0bfh,050h
	db 045h,000h,07dh,00fh,050h,08ah,087h,050h,045h,098h,08bh,0c8h,0f7h,0d8h,08bh,0c8h
	db 058h,0ebh,009h
#endasm
Lb744:
	;
#asm
lb744:
	db 050h,08ah,087h,050h,045h,098h,08bh,0c8h,058h
#endasm
Lb74d:
	;
#asm
lb74d:
	db 03bh,0c1h,07dh,05bh
#endasm
	if (random(2) != 1) goto Lb793;
	f5d9b(1541, 1);
	g433a = (unsigned char)g51cc;
	g4338 = 1;
	g4354 = 0;
	game_state = 10;
	return_cmd = 18;
	l6 = 7;
	goto Lb7ac;
Lb793:
	f5d9b(1542, 0);
	g5276 = 1;
	l6 = 7;
Lb7ac:
	if (l6 != 7) goto Lb3c9;
	if (game_state == 10) {
	f7f76(0, 6, 0, 0, 0);
	} else {
	f7f76(0, 7, 0, 0, 0);
	}
	if (g5276 == 1) {
	f56a1(1);
	}
	destroy_window(l28, 0);
	return;
}
