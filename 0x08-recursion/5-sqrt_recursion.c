/**
 * sqrtAsst - returns sqrt root of n
 *
 * @n_: determine the root square
 * intialized n_ to 0 then  multiplay to it self untill it = n
 *
 * @n: the number that we want to get its root square
 *
 * Return: n (the root square of the num)
 */
int  sqrtAsst(int n_, int n)
{
	if (n_ > n)
		return (-1);

	if (n_ * n_ != n)
	{
		n_ = sqrtAsst(n_ + 1, n);
	}
	return (n_);
}
/**
 * _sqrt_recursion - returns the natural square root of a number by recursion
 *
 * @n:number which is its sqaure will  be calcualted
 *
 * Return: sqaure root
 */

int _sqrt_recursion(int n)
{
	int n_ = 0;

	return (sqrtAsst(n_, n));
}
