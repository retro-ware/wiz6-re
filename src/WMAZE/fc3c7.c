/* Clamp value p4 into the range p6..p8. */
clamp_value(value, lo, hi)
{
#asm
	db 08bh,046h,006h,050h,03bh,046h,004h,058h,07fh,00dh,08bh,046h,004h,050h,03bh,046h
	db 008h,058h,07eh,003h
#endasm
	return hi;
}
