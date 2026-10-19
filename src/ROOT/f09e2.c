/* Return a random number 0..n-1 (0 if n<=0). */
random(n)
{
#asm
	db 0b8h,000h,000h,083h,07eh,004h,000h,07eh,009h
#endasm
	return (random_word() % n);
}
