extern char *g3342;
extern int g0846;
extern int g4fc4;
f5ad8(p4, p6, p8, p10, p12, p14, p16, p18, p20)
char *p4;
{
	int l2;
	int l4;
	int l6;
	char l636[630];
	char x636[8];
	int l646;
	char x646[8];
	int l656;
	int l658;
	int l660;
	int l662;
	int l664;
	register int rsi;
	if (p20 != 1) goto L5b4c;
	l658 = (unsigned char)g3342[6];
	l660 = (unsigned char)g3342[7];
	f075b(2027, &l646);
	f075b(2028, &l656);
	if (g0846 != 1) goto L5b36;
	f251d(g3342, &l646, 3);
	goto L5b4c;
L5b36:
	f24e9(g3342, &l656, (0 - p18));
L5b4c:
	l4 = 0;
	l2 = 0;
L5b56:
	;
#asm
l5b56:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h
#endasm
	goto L5c8d;
L5b68:
	;
#asm
l5b68:
	db 083h,038h,001h,074h,003h
#endasm
	goto L5c87;
L5b70:
	l662 = (((l4 / p16) * p14) + p10);
	l664 = ((l4 % p16) + p12);
	f030b(p4, l662, l664);
	f075b((p6 + l2), ((l4 * 40) + l636));
	if (g0846) goto L5bfd;
	if (p20) goto L5bfd;
	if (l4) goto L5bfd;
	f24e9(p4, ((l4 * 40) + l636), (0 - p18));
	goto L5c20;
L5bfd:
	f251d(p4, ((l4 * 40) + l636), 3);
L5c20:
	*(int *)(l636 + ((l4 << 1) + 600)) = l2;
	f0c16(l4, ((unsigned char)p4[2] + l662), ((unsigned char)p4[3] + l664), (((strlen(((l4 * 40) + l636)) + (unsigned char)p4[2]) + l662) - 1), ((unsigned char)p4[3] + l664));
	l4++;
L5c87:
	l2++;
	goto L5b56;
L5c8d:
	f0c16(l4, 255, 0, 0, 0);
	if (p20 != 1) goto L5d01;
	f0c16(l4, ((unsigned char)g3342[2] + l658), ((unsigned char)g3342[3] + l660), (((strlen(&l656) + (unsigned char)g3342[2]) + l658) - 1), ((unsigned char)g3342[3] + l660));
	f0c16((l4 + 1), 255, 0, 0, 0);
L5d01:
	l6 = (p20 == 1 ? -1 : 0);
L5d10:
	if (g0846) goto L5d94;
	if (l6 != -1) goto L5d4a;
	f030b(g3342, l658, l660);
	f24e9(g3342, &l656, (0 - p18));
	goto L5d94;
L5d4a:
	f030b(p4, (((l6 / p16) * p14) + p10), ((l6 % p16) + p12));
	f24e9(p4, ((l6 * 40) + l636), (0 - p18));
L5d94:
	l2 = f5534(20520, 13720);
	if (g4fc4 != 1) goto L5dc4;
	l6 = (l2 < l4 ? l2 : -1);
	l2 = 5;
	goto L5f7c;
L5dc4:
	switch (l2) {
case 1:
	if (l6 == -1) goto L5e0c;
	if ((l6 - p16) < 0) goto L5e0c;
	f5a9d(p4, l6, p14, p16, p10, p12, ((l6 * 40) + l636));
	l6 -= p16;
L5e0c:
	goto L5f7c;
case 2:
	if (l6 == -1) goto L5e92;
	if ((l6 % p16) <= 0) goto L5e59;
	f5a9d(p4, l6, p14, p16, p10, p12, ((l6 * 40) + l636));
	l6--;
	goto L5e92;
L5e59:
	if (p20 != 1) goto L5e92;
	f5a9d(p4, l6, p14, p16, p10, p12, ((l6 * 40) + l636));
	l6 = -1;
L5e92:
	goto L5f7c;
case 3:
	if (l6 == -1) goto L5eda;
	if ((l6 + p16) >= l4) goto L5eda;
	f5a9d(p4, l6, p14, p16, p10, p12, ((l6 * 40) + l636));
	l6 += p16;
L5eda:
	goto L5f7c;
case 4:
	if (l6 != -1) goto L5f0f;
	f030b(g3342, l658, l660);
	f251d(g3342, &l646, 3);
	l6 = 0;
	goto L5f5a;
L5f0f:
	if ((l6 % p16) >= (p16 - 1)) goto L5f5a;
	if ((l6 + 1) >= l4) goto L5f5a;
	f5a9d(p4, l6, p14, p16, p10, p12, ((l6 * 40) + l636));
	l6++;
L5f5a:
	goto L5f7c;
	}
L5f7c:
	if (l2 != 5) goto L5d10;
	if (l6 != -1) goto L5f93;
	return -1;
L5f93:
	return *(int *)(l636 + ((l6 << 1) + 600));
}
