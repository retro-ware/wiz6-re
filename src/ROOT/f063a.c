extern int g0848;
f063a(p4)
{
	int l2;
	char *l4;
	register int rsi;
	register int rdi;
	rdi = g0848;
	rdi--;
	l2 = 0;
L064c:
	if (rdi < l2) goto L06a5;
	rsi = (((rdi - l2) / 2) + l2);
	l4 = ((rsi * 6) + 2122);
	if (*(int *)l4 <= p4) goto L0681;
	rdi = rsi;
	rdi--;
	goto L06a3;
L0681:
	if (((unsigned char)l4[4] + *(int *)l4) >= p4) goto L069b;
	l2 = (rsi + 1);
	goto L06a3;
L069b:
	;
#asm
l069b:
	db 08bh,0c3h
#endasm
	return;
L06a3:
	goto L064c;
L06a5:
	return 0;
}
