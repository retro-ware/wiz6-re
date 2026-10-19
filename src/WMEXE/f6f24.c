extern char *monster_groups;
extern char g44db[];
extern char g44dc[];
extern char g44e2[];
extern char g44e5[];
extern char g4525[];
extern char g4539[];
extern char pc_class[];
extern int g435c;
clear_hand_attack_x(p4)
{
	int l2;
	int l4;
	g44e5[((432 * g435c) + (p4 << 4))] = 0;
#asm
	db 0c6h,087h,0e4h,044h,000h
#endasm
	l4 = 0;
L6f4f:
	g44dc[(((432 * g435c) + (p4 << 4)) + l4)] = 0;
	l4++;
	if (l4 < 8) goto L6f4f;
#asm
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,056h,004h,0b9h,004h,000h,0d3h,0e2h,08bh
	db 0cah,003h,0c1h,08bh,0d8h,0c6h,087h,0e6h,044h,000h,0c6h,087h,0dah,044h,002h,0c6h
	db 087h,0dbh,044h,002h,0c7h,087h,0d8h,044h,000h,000h,0c6h,087h,0e7h,044h,020h
#endasm
	l2 = ((unsigned char)g4525[(432 * g435c)] / 5);
	l4 = ((unsigned char)g4539[(432 * g435c)] / 5);
	if ((pc_class[(432 * g435c)] != 13) && (pc_class[(432 * g435c)] != 12)) goto L7004;
	g44db[((432 * g435c) + (p4 << 4))] = (char)((l2 / 3) + 2);
#asm
	db 080h,08fh,0e7h,044h,040h,08bh,046h,0fch,005h,005h,000h,088h,087h,0e2h,044h
#endasm
	goto L705c;
L7004:
	if (l2 <= 0) goto L7036;
	g44db[((432 * g435c) + (p4 << 4))] = (char)((l2 / 4) + 1);
#asm
	db 080h,08fh,0e7h,044h,040h
#endasm
L7036:
	if (l4 <= 0) goto L705c;
	g44e2[((432 * g435c) + (p4 << 4))] = *(char *)&l4;
L705c:
	(monster_groups + (44 * g435c))[30] = 10;
	l2 = 0;
L7072:
	(monster_groups + ((44 * g435c) + l2))[24] = 0;
	l2++;
	if (l2 < 4) goto L7072;
}
