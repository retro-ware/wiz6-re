/* Clamp value p4 into the range p6..p8. */
clamp_value(value, lo, hi)
{
	return (lo <= value ? (value > hi ? hi : value) : lo);
}
