f578c(p4)
{
L578f:
	if (key_available(p4)) goto L579f;
	f55dc();
	goto L578f;
L579f:
	return (unsigned char)(get_key(p4));
}
