extern int g4faa;
f4735(p4, p6, p8, p10)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	p6 = ((p6 + 8) % 8);
	p8 = ((p8 + 8) % 8);
	rdi = (((p4 << 6) + (p8 << 3)) + p6);
	if (f28af(19976, rdi) != p10) goto L4787;
	return;
L4787:
	f2881(19976, rdi, p10);
	if (p10) goto L4844;
	rsi = 0;
L47a1:
	l2 = f2925((g4faa + 1274), ((p4 * 5) + rsi), 3);
	l4 = f2925((g4faa + 1298), ((p4 * 5) + rsi), 3);
	if (l2 != p6) goto L483b;
	if (l4 != p8) goto L483b;
	f28da((g4faa + 1274), ((p4 * 5) + rsi), 3, 0);
	f28da((g4faa + 1298), ((p4 * 5) + rsi), 3, 0);
L483b:
	rsi++;
	if (rsi < 5) goto L47a1;
L4844:
	if (f2925((g4faa + 96), rdi, 2)) goto L4874;
	if (p8 >= 7) goto L4874;
	f4735(p4, p6, (p8 + 1), p10);
L4874:
	if (f2925((g4faa + 288), rdi, 2)) goto L48a4;
	if (p6 >= 7) goto L48a4;
	f4735(p4, (p6 + 1), p8, p10);
L48a4:
	if (p8 <= 0) goto L48ed;
	if (f2925((g4faa + 96), ((((p4 << 6) + (p8 << 3)) + p6) + -8), 2)) goto L48ed;
	f4735(p4, p6, (p8 - 1), p10);
L48ed:
	if (p6 <= 0) goto L4934;
	if (f2925((g4faa + 288), ((((p4 << 6) + (p8 << 3)) + p6) - 1), 2)) goto L4934;
	f4735(p4, (p6 - 1), p8, p10);
L4934:
	return;
}
