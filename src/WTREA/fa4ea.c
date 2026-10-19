extern int g363c;
extern int g4f9a;
extern int g4faa;
fa4ea(p4, p6, p8, p10, p12, p14)
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	if (!p14) goto La539;
	if (!f9ec3(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto La539;
	if (g363c == 10) goto La52b;
	if (g363c != 12) goto La534;
La52b:
	return 0;
La534:
	return 2;
La539:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (f28af((g4faa + 1082), rsi) != 1) goto La593;
	switch (g363c) {
case 0:
case 4:
case 5:
case 12:
	if (g363c != 12) goto La578;
	if (p12 <= 8) goto La57d;
La578:
	return 0;
La57d:
	goto La593;
	}
La593:
	rdi = 0;
	switch (g4f9a) {
case 0:
	rdi = f2925((g4faa + 288), rsi, 2);
	goto La60d;
case 1:
	rdi = f9df9(p4, p6, p8, p10, p12);
	goto La60d;
case 2:
	rdi = f9e5e(p4, p6, p8, p10, p12);
	goto La60d;
case 3:
	rdi = f2925((g4faa + 96), rsi, 2);
	goto La60d;
	}
La60d:
	l2 = f2925((g4faa + 504), rsi, 4);
	l4 = ((f2925((g4faa + 888), rsi, 2) + 3) % 4);
	if (l4 != g4f9a) goto La6a4;
	switch (l2) {
case 1:
	rdi = 5;
	goto La6a4;
case 2:
	rdi = 6;
	goto La6a4;
case 3:
	rdi = 8;
	goto La6a4;
case 4:
	rdi = 9;
	goto La6a4;
case 7:
	rdi = 4;
	goto La6a4;
case 8:
	rdi = 7;
	goto La6a4;
case 9:
	rdi = 10;
	goto La6a4;
case 10:
	rdi = 11;
	goto La6a4;
case 11:
	rdi = 12;
	goto La6a4;
case 12:
	rdi = 13;
	goto La6a4;
	}
La6a4:
	return rdi;
}
