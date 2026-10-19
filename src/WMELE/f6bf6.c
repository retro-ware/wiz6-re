extern int g433c;
extern int g4360;
extern int g4362[];
extern int g5010;
extern int g50b4[];
f6bf6()
{
	int l2;
	int l12[5];
	register int rsi;
	register int rdi;
	rsi = 0;
	goto L6d3e;
L6c04:
	l2 = 0;
L6c09:
	*(int *)((char *)g50b4 + ((rsi * 10) + (l2 << 1))) = 0;
	l12[l2] = 0;
	l2++;
	if (l2 < 5) goto L6c09;
	l2 = 0;
L6c3d:
	rdi = f09e2(5);
	if (l12[rdi] == 1) goto L6c3d;
	if (l12[0]) goto L6c65;
	if (g5010 != 1) goto L6c65;
	rdi = 0;
L6c65:
	l12[rdi] = 1;
	if (*(int *)((char *)g4362 + ((rsi * 10) + (rdi << 1)))) goto L6d2f;
	switch (rsi) {
case 0:
	if (rdi < 3) goto L6ca3;
	if (g4360 != 1) goto L6cb1;
L6ca3:
	f6bcf(1, rsi, rdi);
	goto L6cde;
L6cb1:
	if (rdi == 3) goto L6cc4;
	if (g433c == 1) goto L6cc4;
	if (g4360 != 2) goto L6cd2;
L6cc4:
	f6bcf(2, rsi, rdi);
	goto L6cde;
L6cd2:
	f6bcf(3, rsi, rdi);
L6cde:
	goto L6d2f;
case 1:
	if (g4360 != 1) goto L6cf5;
	f6bcf(1, rsi, rdi);
	goto L6d20;
L6cf5:
	if (rdi == 1) goto L6d06;
	if (rdi == 2) goto L6d06;
	if (g4360 != 2) goto L6d14;
L6d06:
	f6bcf(2, rsi, rdi);
	goto L6d20;
L6d14:
	f6bcf(3, rsi, rdi);
L6d20:
	goto L6d2f;
	}
L6d2f:
	l2++;
	if (l2 < 5) goto L6c3d;
	rsi++;
L6d3e:
	if (rsi <= g433c) goto L6c04;
}
