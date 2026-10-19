#asm
	extrn random_:near
#endasm
extern char g00df[];
extern char g00e2[];
extern char g019d[];
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
/* Choose an action and target for each monster of a group (attack, spell, breath). */
choose_group_actions(group, target_group)
{
	int i;
	int l4;
	char x4[2];
	char *monster;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	int l22;
	int l24;
	int l26;
	register int rsi;
	i = 0;
	goto L8a27;
L848f:
	;
#asm
l848f:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0c8h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 087h,0a8h,043h,003h,0c1h,089h,046h,0f8h,0b8h,00ah,000h,050h
	call random_
	db 059h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,08ah,040h,029h,098h,08bh,0c8h,058h,003h,0c1h,050h,08bh
	db 046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0d3h,000h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h,089h,046h,0f6h,03dh,001h,000h,07dh,005h
#endasm
	l10 = 1;
L84f0:
	;
#asm
l84f0:
	db 08bh,046h,0f6h,050h,08ah,087h,0d5h,000h,02ah,0e4h,08bh,0c8h,058h,099h,0f7h,0f9h
	db 089h,046h,0f4h,08ah,087h,0dch,000h,02ah,0e4h,0a9h,002h,000h,074h,007h
#endasm
	monster[36] = 1;
L8515:
	if ((unsigned)monster[36] <= 0) goto L854f;
	monster[37] = (char)((random((l10 / 2)) + random(20)) + (l10 / 2));
L854f:
	monster[33] = 0;
	monster[28] = (char)pick_random_row(group);
	l22 = 0;
L8568:
	monster[29] = (char)pick_random_row(group);
	l22++;
	if (monster[29] != monster[28]) goto L858b;
	if (l22 < 3) goto L8568;
L858b:
	l14 = 0;
L8590:
	if ((unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[213] <= l14) goto L85bb;
	if ((unsigned)monster[34] >= 2) goto L85bb;
	if ((unsigned)monster[17] > 0) goto L85bb;
	if ((unsigned)monster[16] <= 0) goto L85c7;
L85bb:
	;
#asm
l85bb:
	db 08bh,05eh,0f8h,08bh,076h,0f2h,0c6h,040h,018h,000h
#endasm
	goto L85d9;
L85c7:
	;
#asm
l85c7:
	db 08ah,046h,0f6h,08bh,05eh,0f8h,08bh,076h,0f2h,088h,040h,018h
#endasm
	l10 -= l12;
L85d9:
	l14++;
	if (l14 < 4) goto L8590;
	l24 = -1;
	monster[31] = *(char *)&target_group;
L85f2:
	monster[32] = (char)random((unsigned char)g019d[monster_groups[target_group]]);
	rsi = ((unsigned char)monster[32] * 44);
	if ((unsigned)((char *)monster_groups[(unsigned char)monster[31]] + rsi)[34] >= 3) goto L85f2;
	if (random(100) >= (unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[168]) goto L878b;
	l24 = 3;
	monster[30] = 3;
	l18 = random(100);
	l22 = 5;
	l16 = 0;
	l26 = -1;
L867a:
	if (l18 >= l22) goto L8699;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0f0h,08ah,080h
	db 08ah,000h,02ah,0e4h,089h,046h,0e6h
#endasm
L8699:
	l16++;
	if (l22 >= 15) goto L86a8;
	l22 += 5;
	goto L86b8;
L86a8:
	if (l22 >= 55) goto L86b4;
	l22 += 10;
	goto L86b8;
L86b4:
	l22 += 15;
L86b8:
	if (l26 == -1) goto L867a;
	if (g00e2[(l26 * 6)] != 1) goto L872d;
	if (group != 6) goto L8701;
	if (find_most_wounded(monster, 0)) goto L86ff;
	if (find_most_wounded(monster, 6)) goto L86ff;
	l24 = -1;
L86ff:
	goto L872d;
L8701:
	if (find_most_wounded(monster, group)) goto L872d;
	if (find_most_wounded(monster, (random(monster_group_count) + 1))) goto L872d;
	l24 = -1;
L872d:
	l18 = ((*(int *)monster - (unsigned char)g00df[(l26 * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0eeh,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L8764:
	;
#asm
l8764:
	db 089h,046h,0eeh
#endasm
L8767:
	if ((random(*(int *)monster) + 1) >= l18) goto L877b;
	l18--;
	goto L8767;
L877b:
	*(int *)(monster + 10) = ((l18 << 8) + l26);
L878b:
	if (l24 != -1) goto L87d5;
	if (random(100) >= (unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[170]) goto L87d5;
	l24 = 8;
	monster[30] = 8;
	*(int *)(monster + 10) = (unsigned char)(*(char **)((char *)group_monster_rec + (group << 1)))[216];
L87d5:
	if (l24 != -1) goto L8958;
	l18 = 0;
	if ((unsigned)monster[34] >= 2) goto L886f;
	if (monster[17]) goto L886f;
#asm
l87f8:
	db 080h,07fh,010h,000h,074h,003h,0e9h,06eh,000h
#endasm
L8801:
	;
#asm
l8801:
	db 08ah,047h,01ch,02ah,0e4h,089h,046h,0ech
#endasm
	if (group != 6) goto L8816;
	l18 = 9;
	goto L886f;
L8816:
	if (group < 3) goto L8837;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,0ech,0b9h,004h
	db 000h,0d3h,0e0h,08bh,0f0h,080h,078h,051h,001h,076h,038h
#endasm
L8837:
	l18 = 3;
#asm
	db 0b8h,002h,000h,083h,07eh,004h,003h,07dh,003h,0b8h,000h,000h
#endasm
L8848:
	;
#asm
l8848:
	db 050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,0ech,0b9h
	db 004h,000h,0d3h,0e0h,08bh,0f0h,08ah,040h,051h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h
	db 07dh,005h
#endasm
	l18 = 6;
L886f:
	if ((unsigned char)g019d[monster_groups[target_group]] >= l18) goto L8888;
	l18 = (unsigned char)g019d[monster_groups[target_group]];
L8888:
	l16 = 0;
	l22 = 0;
	goto L88b3;
L8894:
	rsi = (44 * l22);
	if ((unsigned)((char *)monster_groups[target_group] + rsi)[34] >= 3) goto L88b0;
	l16++;
L88b0:
	l22++;
L88b3:
	if (l22 < l18) goto L8894;
	if (l16 <= 0) goto L8951;
	monster[30] = 0;
	monster[31] = *(char *)&target_group;
	monster[32] = (char)random(l16);
	l20 = (unsigned char)monster[28];
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,002h,075h,00ah
#endasm
	*(int *)(monster + 10) = 4;
	goto L894f;
L890b:
	;
#asm
l890b:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,003h,075h,00ah
#endasm
	*(int *)(monster + 10) = 8;
	goto L894f;
L892a:
	*(int *)(monster + 10) = pick_random_set_bit(((group_monster_rec[group] + (l20 << 4)) + 83));
L894f:
	goto L8958;
L8951:
	monster[24] = 0;
L8958:
	*(int *)(monster + 12) = -1;
	if (monster[30]) goto L8a0a;
	l20 = (unsigned char)monster[29];
	if (group < 3) goto L8995;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,046h,0ech,0b9h,004h
	db 000h,0d3h,0e0h,08bh,0f0h,080h,078h,051h,001h,076h,065h
#endasm
L8995:
	;
#asm
l8995:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,002h,075h,00ah
#endasm
	*(int *)(monster + 12) = 4;
	goto L89f8;
L89b4:
	;
#asm
l89b4:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0ech,080h,0b8h
	db 080h,000h,003h,075h,00ah
#endasm
	*(int *)(monster + 12) = 8;
	goto L89f8;
L89d3:
	*(int *)(monster + 12) = pick_random_set_bit(((group_monster_rec[group] + (l20 << 4)) + 83));
L89f8:
	goto L8a08;
L89fa:
	monster[25] = 0;
	monster[27] = 0;
L8a08:
	goto L8a24;
L8a0a:
	l4 = 1;
L8a0f:
	;
#asm
l8a0f:
	db 08bh,05eh,0f8h,08bh,076h,0fch,0c6h,040h,018h,000h
#endasm
	l4++;
	if (l4 < 4) goto L8a0f;
L8a24:
	i++;
L8a27:
	if ((unsigned char)g019d[monster_groups[group]] > i) goto L848f;
}
