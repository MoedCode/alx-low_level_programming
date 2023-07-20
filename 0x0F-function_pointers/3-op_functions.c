#include"calc.h"
/**
 * op_add -Returns sum for 2 integers
 *
 * @a: first int argumen
 * @b:second int argumen
 *
 * Return:  sum of  2 integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub -Returns sub of 2 integers
  *
  * @a: first int argumen
  * @b:second int argumen
  *
  * Return:  sub of  2 integers
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function that get  multiplication for 2 integers
  *
  * @a: first int argumen
  * @b:second int argumen
  *
  * Return:  multiplication of  2 integers
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div -Returns division of 2 integers
  *
  * @a: first int argumen
  * @b:second int argumen
  *
  * Return:  division of  2 integers
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function that get  mod of 2 integers
  *
  * @a: first int argumen
  * @b:second int argumen
  *
  * Return:  mod of  2 integers
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
