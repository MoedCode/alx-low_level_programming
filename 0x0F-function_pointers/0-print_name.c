
/**
 * print_name - accept  prints function as a parameter
 * @name: name passed to callback
 * @f: function pointer
 * Return:(void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
