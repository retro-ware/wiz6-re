extern char g00cc[];
extern char g442c[];
extern char g442e[];
extern char g4594[];
extern char g4595[];
extern int g4408[];
extern int g4428[];
f6a80(p4, p6, p8)
{
	int l2;
	char x2[12];
	char l15;
	char l16;
	char l17;
	char x17[27];
	int l46;
	char x46[6];
	int l54;
	int l56;
	char x56[18];
	int l76;
	char *l78;
	int l80;
	int l82;
	int l84;
	f0882(1, &l76, p6, 0);
	if (p8 != -1) goto L6ab0;
	p8 = f66cf(l56, l54);
L6ab0:
	l84 = 1;
	l80 = (unsigned char)g4594[(432 * p4)];
	l2 = (l80 - 1);
	goto L6b1d;
L6acc:
	if (*(int *)((char *)g4428 + ((432 * p4) + (l2 << 3))) != p6) goto L6b1a;
	if (g00cc[(unsigned char)g442c[((432 * p4) + (l2 << 3))]] != 1) goto L6b1a;
	if (((unsigned char)g442e[((432 * p4) + (l2 << 3))] + p8) > 250) goto L6b1a;
	l80 = l2;
	l84 = 0;
L6b1a:
	l2--;
L6b1d:
	if (l2 >= 0) goto L6acc;
	if (l80 < 10) goto L6bbe;
	l84 = 2;
	l80 = ((unsigned char)g4595[(432 * p4)] + 10);
	l2 = ((unsigned char)g4595[(432 * p4)] - 1);
	goto L6bab;
L6b51:
	l82 = (l2 + 10);
	if (*(int *)((char *)g4428 + ((432 * p4) + (l82 << 3))) != p6) goto L6ba8;
	if (g00cc[(unsigned char)g442c[((432 * p4) + (l82 << 3))]] != 1) goto L6ba8;
	if (((unsigned char)g442e[((432 * p4) + (l82 << 3))] + p8) > 250) goto L6ba8;
	l80 = l82;
	l84 = 0;
L6ba8:
	l2--;
L6bab:
	if (l2 >= 0) goto L6b51;
	if (l80 < 22) goto L6bbe;
	return -1;
L6bbe:
	l78 = (((432 * p4) + (l80 << 3)) + 17448);
	if (l84 <= 0) goto L6c01;
	l78[6] = 0;
	if (l84 != 1) goto L6bf5;
	g4594[(432 * p4)]++;
	goto L6c01;
L6bf5:
	g4595[(432 * p4)]++;
L6c01:
	*(int *)l78 = p6;
	l78[4] = l16;
	l78[5] = l15;
	*(int *)(l78 + 2) = l46;
	l78[6] = (char)((unsigned char)l78[6] + p8);
#asm
	db 0c6h,047h,007h,000h
#endasm
	if (!((unsigned char)l17 & 8)) goto L6c47;
	l78[7] |= 4;
L6c47:
	if (!((unsigned char)l17 & 4)) goto L6c58;
	l78[7] |= 8;
L6c58:
	if (!((unsigned char)l17 & 16)) goto L6c69;
	l78[7] |= 16;
L6c69:
	if (!((unsigned char)l17 & 32)) goto L6c7a;
	l78[7] |= 32;
L6c7a:
	if (!((unsigned char)l17 & 2)) goto L6c8b;
	l78[7] |= 64;
L6c8b:
	*(int *)((char *)g4408 + (432 * p4)) = 0;
	l2 = 0;
	goto L6cbd;
L6ca0:
	*(int *)((char *)g4408 + (432 * p4)) += f6a0e(l2, p4);
	l2++;
L6cbd:
	if ((unsigned char)g4594[(432 * p4)] > l2) goto L6ca0;
	l2 = 0;
	goto L6cf8;
L6cd7:
	*(int *)((char *)g4408 + (432 * p4)) += f6a0e((l2 + 10), p4);
	l2++;
L6cf8:
	if ((unsigned char)g4595[(432 * p4)] > l2) goto L6cd7;
	return 0;
}
