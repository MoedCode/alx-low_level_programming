/**
 * _pow_recursion - returns x power of y using recursion
 *
 * @x:int value that to be calcualted.
 * @y:int value which x will be raised with.
 *
 * Return: The value of x raised to the power of y,
 * or -1 if y is negative.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	if (y > 0 && y != 1)
	{
		x *=  _pow_recursion(x, y - 1);
	}
	return (x);
}
