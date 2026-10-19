extern int g440c[];
ff6e6(p4)
{
	int l2;
	int l4;
	int l6;
	l4 = 0;
	l2 = 0;
Lf6f6:
	switch (l2) {
case 0:
	l6 = 2;
	goto Lf747;
case 1:
	l6 = 4;
	goto Lf747;
case 2:
	l6 = 7;
	goto Lf747;
case 3:
	l6 = 10;
	goto Lf747;
case 4:
	l6 = 14;
	goto Lf747;
case 5:
	l6 = 18;
	goto Lf747;
case 6:
	l6 = 24;
	goto Lf747;
	}
Lf747:
	if (*(int *)((char *)g440c + (432 * p4)) < l6) goto Lf75b;
	l4++;
Lf75b:
	l2++;
	if (l2 < 7) goto Lf6f6;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,088h,045h,02ah,0e4h,03bh,046h
	db 0fch,07dh,007h,08ah,046h,0fch,088h,087h,088h,045h
#endasm
Lf780:
	;
}
