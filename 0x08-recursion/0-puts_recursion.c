/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		write(1, s, 1);
		s++;
		_puts_recursion(s);
	}
	else
	{
		write(1, s, 1);
		return;
	}
	}
