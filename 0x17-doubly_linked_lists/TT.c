#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_triangle - prints a triangle &&  new line.
 * @size: type int
 *
 * return: 0
 */
void print_triangle(int size, char *x, char *y)
{
	int i, j, k;

	if (size <= 0)
	{
		putchar(10);
	}
	else
	{
		i = 1;

		for (; i <= size; i++)
		{
			j = i;
			for (; j < size; j++)
			{
				printf("%s",x);
			}
			k = 1;
			for (; k <= i; k++)
			{
				printf("%s",y);
			}
			putchar(10);
		}
	}
}
int main(int argc, char *argv[])
{

    if (argc < 2 || !argv[1])
        return (1);

    if (!argv[2] || !strcmp(argv[2], "SHELL=/bin/bash"))
        argv[2] = " ";
    if (!argv[3] || !strcmp(argv[3], "SHELL=/bin/bash"))
        argv[3] = "#";
    argv[4] = NULL;

    printf("argc[%i]\n",argc);
    for (size_t i = 0; i < argc; i++)
        printf("argv[%zu] => %s\n", i, argv[i]);
    /*
    for (size_t i = 0; i < 22; i++)
    {
        printf("%zu=> %s\n",i,argv[i]);
    }
    */
    int size = atoi(argv[1]);

    print_triangle(size,argv[2],argv[3]);
    return (0);

}