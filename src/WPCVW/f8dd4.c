f8dd4(p4)
{
	register int rsi;
	f32be(p4, 0, 1, 0);
	f5f86(p4, 0, 0, 9);
	f5f86(p4, 39, 0, 10);
	f5f86(p4, 0, 15, 6);
	f5f86(p4, 39, 15, 8);
	rsi = 1;
L8e41:
	f5f86(p4, rsi, 0, 12);
	f5f86(p4, rsi, 15, 7);
	rsi++;
	if (rsi < 39) goto L8e41;
	rsi = 1;
L8e6e:
	f5f86(p4, 0, rsi, 4);
	f5f86(p4, 39, rsi, 5);
	rsi++;
	if (rsi < 15) goto L8e6e;
	f2b19(p4);
}
