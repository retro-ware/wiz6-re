extern char pc_class[];
extern char pc_equipped[];
extern char pc_item_count[];
extern char pc_item_flags[];
extern char pc_item_type[];
extern char pc_race[];
extern char pc_sex[];
extern int pc_item_id[];
/* Check whether member p4 may equip item p6 by class, race and sex masks. */
can_equip_item(p4, p6, p8)
char *p8;
{
	int l2;
	int l4;
	int l6;
	int l8;
	char x8[14];
	int l24;
	int l26;
	int l28;
	char x28[52];
	int l82;
	l8 = 0;
	l2 = 0;
Lc8d3:
	*(int *)(p8 + (l2 << 1)) = -1;
	l2++;
	if (l2 < 10) goto Lc8d3;
	l2 = 0;
	goto Lcbd6;
Lc8f4:
	l6 = -1;
	switch ((unsigned char)pc_item_type[((432 * p4) + (l2 << 3))]) {
case 0:
case 1:
case 2:
case 3:
case 12:
case 16:
	if (p6) goto Lc922;
	l6 = 0;
	goto Lc94b;
Lc922:
	if ((p6 != 1) || (!((unsigned char)pc_item_flags[((432 * p4) + (l2 << 3))] & 4))) goto Lc94b;
	l6 = 1;
Lc94b:
	goto Lc9dd;
case 4:
	l6 = 1;
	goto Lc9dd;
case 5:
	l6 = 2;
	goto Lc9dd;
case 6:
	l6 = 3;
	goto Lc9dd;
case 7:
	l6 = 4;
	goto Lc9dd;
case 8:
	l6 = 5;
	goto Lc9dd;
case 9:
	l6 = 6;
	goto Lc9dd;
case 10:
	l6 = 7;
	goto Lc9dd;
case 11:
	l6 = 1;
	goto Lc9dd;
case 13:
case 14:
case 15:
	if (!((unsigned char)pc_item_flags[((432 * p4) + (l2 << 3))] & 4)) goto Lc9ac;
	l6 = 1;
Lc9ac:
	goto Lc9dd;
	}
Lc9dd:
	if (p6 != 1) goto Lcb08;
	l4 = (unsigned char)pc_equipped[(432 * p4)];
	if (l4 == 255) goto Lcae9;
	if (pc_item_type[((432 * p4) + (l4 << 3))] != 3) goto Lcac8;
#asm
lca11:
	db 08ah,087h,02dh,044h,03ch,00bh,075h,01bh,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh
	db 0feh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,03ch
	db 016h,075h,06ch
#endasm
Lca34:
	;
#asm
lca34:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,08ah,087h,02dh,044h,03ch,00dh,075h,01bh,0b8h,0b0h,001h,0f7h,06eh
	db 004h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h
	db 02dh,044h,03ch,017h,075h,036h
#endasm
Lca6a:
	;
#asm
lca6a:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,08ah,087h,02dh,044h,03ch,00ch,075h,022h,0b8h,0b0h,001h,0f7h,06eh
	db 004h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08ah,087h
	db 02dh,044h,03ch,053h,074h,007h
#endasm
Lcaa0:
	l6 = -1;
	goto Lcac6;
Lcaa7:
	if (pc_item_type[((432 * p4) + (l2 << 3))] == 4) goto Lcac6;
	l6 = -1;
Lcac6:
	goto Lcae7;
Lcac8:
	if (pc_item_type[((432 * p4) + (l2 << 3))] != 4) goto Lcae7;
	l6 = -1;
Lcae7:
	goto Lcb08;
Lcae9:
	if (pc_item_type[((432 * p4) + (l2 << 3))] != 4) goto Lcb08;
	l6 = -1;
Lcb08:
	l4 = 0;
Lcb0d:
	if ((unsigned char)pc_equipped[((432 * p4) + l4)] != l2) goto Lcb28;
	l6 = -1;
Lcb28:
	l4++;
	if (l4 < 8) goto Lcb0d;
	if (l6 != p6) goto Lcbd3;
	access_scenario_record(1, &l82, *(int *)((char *)pc_item_id + ((432 * p4) + (l2 << 3))), 0);
	if (((test_bit(&l28, (unsigned char)pc_class[(432 * p4)]) != 1) || (test_bit(&l26, (unsigned char)pc_race[(432 * p4)]) != 1)) || (test_bit(&l24, (unsigned char)pc_sex[(432 * p4)]) != 1)) goto Lcbd3;
	*(int *)(p8 + (l8 << 1)) = l2;
	l8++;
Lcbd3:
	l2++;
Lcbd6:
	if ((unsigned char)pc_item_count[(432 * p4)] > l2) goto Lc8f4;
	return l8;
}
