/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: input int that will be used as base
 * @y: input int that will be used as power
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
