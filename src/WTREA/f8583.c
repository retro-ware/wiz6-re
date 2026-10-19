extern char g00cc[];
extern char g442c[];
extern char g442e[];
extern char g4594[];
extern char g4595[];
extern char g51e2[];
extern int g4408[];
extern int g4428[];
extern int g51d6[];
f8583(p4, p6)
{
	int l2;
	int l4;
	char x4[12];
	char l17;
	char l18;
	char l19;
	char x19[27];
	int l48;
	char x48[6];
	int l56;
	int l58;
	char x58[18];
	int l78;
	char *l80;
	char l81;
	int l83;
	int l85;
	int l87;
	char x87[1];
	l4 = g51d6[p6];
	f0882(1, &l78, l4, 0);
	if (g00cc[(unsigned char)l18] != 1) goto L85ca;
	l81 = g51e2[(p6 << 1)];
	goto L85d9;
L85ca:
	l81 = (char)f5a98(l58, l56);
L85d9:
	l87 = 1;
	l83 = (unsigned char)g4594[(432 * p4)];
	l2 = (l83 - 1);
	goto L864e;
L85f5:
	if (*(int *)((char *)g4428 + ((432 * p4) + (l2 << 3))) != l4) goto L864b;
	if (g00cc[(unsigned char)g442c[((432 * p4) + (l2 << 3))]] != 1) goto L864b;
	if (((unsigned char)g442e[((432 * p4) + (l2 << 3))] + (unsigned char)l81) > 250) goto L864b;
	l83 = l2;
	l87 = 0;
L864b:
	l2--;
L864e:
	if (l2 >= 0) goto L85f5;
	if (l83 < 10) goto L86f7;
	l87 = 2;
	l83 = ((unsigned char)g4595[(432 * p4)] + 10);
	l2 = ((unsigned char)g4595[(432 * p4)] - 1);
	goto L86e4;
L8682:
	l85 = (l2 + 10);
	if (*(int *)((char *)g4428 + ((432 * p4) + (l85 << 3))) != l4) goto L86e1;
	if (g00cc[(unsigned char)g442c[((432 * p4) + (l85 << 3))]] != 1) goto L86e1;
	if (((unsigned char)g442e[((432 * p4) + (l85 << 3))] + (unsigned char)l81) > 250) goto L86e1;
	l83 = l85;
	l87 = 0;
L86e1:
	l2--;
L86e4:
	if (l2 >= 0) goto L8682;
	if (l83 < 22) goto L86f7;
	return -1;
L86f7:
	l80 = (((432 * p4) + (l83 << 3)) + 17448);
	if (l87 <= 0) goto L873a;
	l80[6] = 0;
	if (l87 != 1) goto L872e;
	g4594[(432 * p4)]++;
	goto L873a;
L872e:
	g4595[(432 * p4)]++;
L873a:
	*(int *)l80 = l4;
	l80[4] = l18;
	l80[5] = l17;
	*(int *)(l80 + 2) = l48;
	l80[6] += l81;
	l80[7] = 0;
	if (!((unsigned char)l19 & 8)) goto L877e;
	l80[7] |= 4;
L877e:
	if (!((unsigned char)l19 & 4)) goto L878f;
	l80[7] |= 8;
L878f:
	if (!((unsigned char)l19 & 16)) goto L87a0;
	l80[7] |= 16;
L87a0:
	if (!((unsigned char)l19 & 32)) goto L87b1;
	l80[7] |= 32;
L87b1:
	if (!((unsigned char)l19 & 2)) goto L87c2;
	l80[7] |= 64;
L87c2:
	*(int *)((char *)g4408 + (432 * p4)) = 0;
	l2 = 0;
	goto L87f4;
L87d7:
	*(int *)((char *)g4408 + (432 * p4)) += f8524(l2, p4);
	l2++;
L87f4:
	if ((unsigned char)g4594[(432 * p4)] > l2) goto L87d7;
	l2 = 0;
	goto L882f;
L880e:
	*(int *)((char *)g4408 + (432 * p4)) += f8524((l2 + 10), p4);
	l2++;
L882f:
	if ((unsigned char)g4595[(432 * p4)] > l2) goto L880e;
	return 0;
}
