/* Reduce value by amount toward zero (mode 1 for positive, 0 for negative). */
reduce_toward_zero(amount, value, mode)
{
	if (mode != 1) goto L602b;
	if (value > 0) {
	value -= amount;
	} else {
	if ((0 - amount) < value) {
	value = (0 - amount);
	}
	}
	goto L604d;
L602b:
	if (mode) goto L604d;
	if (value >= 0) goto L603f;
	value += amount;
	goto L604d;
L603f:
	if (value >= amount) goto L604d;
	value = amount;
L604d:
	return value;
}
